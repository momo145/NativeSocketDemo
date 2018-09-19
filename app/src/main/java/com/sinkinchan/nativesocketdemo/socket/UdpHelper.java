package com.sinkinchan.nativesocketdemo.socket;

import android.net.wifi.WifiManager;
import android.os.Handler;
import android.os.Looper;
import android.util.Log;

import com.sinkinchan.nativesocketdemo.callback.CommandFactory;
import com.sinkinchan.nativesocketdemo.proto.SDKCommandProto;

import java.io.InputStream;
import java.net.DatagramPacket;
import java.net.DatagramSocket;
import java.net.InetAddress;
import java.net.InetSocketAddress;
import java.net.Socket;

/**
 * Created by xiaoming on 2017/4/11.
 */

public class UdpHelper implements Runnable {
    private static final String TAG = "UdpHelper";
    private Boolean IsThreadDisable = false;//指示监听线程是否终止
    Handler handler;

    public UdpHelper(WifiManager manager) {
        handler = new Handler(Looper.getMainLooper());
    }


    public void StartListen() {


        // UDP客户端接收消息的监听端口
        Integer port = 11001;
        // 接收的字节大小，客户端发送的数据不能超过这个大小
        byte[] message = new byte[1024];

        try {
            // 接收消息的端口和接收的buffer
            final DatagramSocket datagramSocket = new DatagramSocket(port);
            datagramSocket.connect(new InetSocketAddress("127.0.0.1", port));
            DatagramPacket datagramPacket = new DatagramPacket(message,
                    message.length);
            //定义用来发送数据的DatagramPacket实例
            String sendString = "1";
            try {
                DatagramPacket sendPacket = new DatagramPacket(sendString.getBytes(), sendString.length(), InetAddress.getLocalHost(), port);
                datagramSocket.send(sendPacket);
            } catch (Exception e) {
                e.printStackTrace();
            }
            while (!IsThreadDisable) {
                // 准备接收数据
                datagramSocket.receive(datagramPacket);
                Log.d(TAG, "StartListen: ====" + datagramPacket);
//                CommandFactory.getInstance().getCommand(datagramPacket);
            }

        } catch (Exception e) {
            Log.e(TAG, "StartListen: ", e);
        }

    }

    public static final String IP_ADDR = "127.0.0.1";    //server ip
    public static final int PORT = 11001;    //port

    private void initSocket() {
        System.out.println("client starting...");

//            Thread.sleep(1000);
        Socket socket = null;
        try {
            socket = new Socket(IP_ADDR, PORT);
            InputStream input = socket.getInputStream();
            byte[] message = new byte[1024];
            while (true) {
                input.read(message);
//                RandomValueProto.RandomValue randomValue = RandomValueProto.RandomValue.parseFrom(message);
                SDKCommandProto.SDKCommand command = SDKCommandProto.SDKCommand.parseDelimitedFrom(input);
                CommandFactory.onCommand(command);
                Log.d(TAG, "initSocket: type=" + command.getCommandType());
            }

        } catch (Exception e) {
            Log.e(TAG, "initSocket: ", e);
        }
    }

    @Override
    public void run() {
        initSocket();
    }

    public void stop() {
        IsThreadDisable = true;
    }
}
