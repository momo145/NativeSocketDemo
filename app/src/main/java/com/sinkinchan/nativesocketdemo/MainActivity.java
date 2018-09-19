package com.sinkinchan.nativesocketdemo;

import android.net.wifi.WifiManager;
import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.util.Log;
import android.view.View;
import android.widget.TextView;

import com.sinkinchan.nativesocketdemo.callback.CommandFactory;
import com.sinkinchan.nativesocketdemo.callback.base.CommandCallback;
import com.sinkinchan.nativesocketdemo.jni.Jni;
import com.sinkinchan.nativesocketdemo.proto.SDKCommandProto;
import com.sinkinchan.nativesocketdemo.socket.UdpHelper;

public class MainActivity extends AppCompatActivity implements CommandCallback {

    private static final String TAG = "MainActivity";

    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("native-lib");
    }

    Jni jni = Jni.getInstance();
    UdpHelper udpHelper;
    WifiManager wifiManager;
    TextView textView;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        CommandFactory.addSDKCommandCallBack(this, this);
        //启动Native端服务器
        new Thread(new Runnable() {
            @Override
            public void run() {
                jni.startServer();
            }
        }).start();
        textView = findViewById(R.id.sample_text);
        //启动socket客户端
        udpHelper = new UdpHelper(wifiManager);
        new Thread(udpHelper, "Socket Thread").start();
    }

    int value = 1;

    public void testSendMessage(View view) {
        jni.addOne(value);
    }

    @Override
    public void onCommand(SDKCommandProto.SDKCommand command) {
        if (command != null) {
            switch (command.getCommandType()) {
                case CONNECT_SUCCESS:
                    Log.d(TAG, "onCommand: 连接成功");
                    break;
                case TEST_MESSAGE_RESULT:
                    value = command.getValue();
                    textView.post(new Runnable() {
                        @Override
                        public void run() {
                            textView.setText("结果=" + value);
                        }
                    });
                    break;
            }
        }
    }

    @Override
    protected void onPause() {
        if (isFinishing()) {
            CommandFactory.removeSDKCommandCallBack(this);
        }
        super.onPause();
    }

    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */
    public native String stringFromJNI();
}
