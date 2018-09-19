//
// Created by 小明 on 2018/5/9.
//
#include <netinet/in.h>    // for sockaddr_in
#include <sys/types.h>    // for socket
#include <sys/socket.h>    // for socket
#include <unistd.h>
#include <stdio.h>        // for printf
#include <stdlib.h>        // for exit
#include <string.h>        // for bzero
#include <string>
#include <libs/google/protobuf/message.h>
#include <libs/google/protobuf/io/coded_stream.h>
#include <libs/google/protobuf/io/zero_copy_stream_impl_lite.h>
#include "NativeSocket.h"
#include "include/proto/SDKCommand.pb.h"

const int INIT_VALUE = -999;
int new_server_socket = INIT_VALUE;

NativeSocket *NativeSocket::m_instance = NULL;

NativeSocket *NativeSocket::GetInstance() {
    if (m_instance == NULL) {
        m_instance = new NativeSocket;
    }
    return m_instance;
}

int NativeSocket::startServer() {
    struct sockaddr_in server_addr;
    struct sockaddr_in client_addr;//客户端网络地址结构体
    bzero(&server_addr, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = htons(INADDR_ANY);
    server_addr.sin_port = htons(HELLO_WORLD_SERVER_PORT);

    int server_socket = socket(AF_INET, SOCK_STREAM, 0);
    if (server_socket < 0) {
        LOGD("Create Socket Failed!");
        return 1;
    }
    {
        int opt = 1;
        setsockopt(server_socket, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt));
    }

    if (bind(server_socket, (struct sockaddr *) &server_addr, sizeof(server_addr))) {
        printf("Server Bind Port : %d Failed!", HELLO_WORLD_SERVER_PORT);
        LOGD("绑定端口失败");
        return 1;
    }

    if (listen(server_socket, LENGTH_OF_LISTEN_QUEUE)) {
        LOGD("服务监听失败");
        return 1;
    }

    LOGD("开始");
    while (true) {
        socklen_t length = sizeof(client_addr);
        new_server_socket = accept(server_socket, (struct sockaddr *) &client_addr, &length);
        if (new_server_socket < 0) {
            LOGD("服务接受失败");
            break;
        } else {
            connectSuccess();
            connectSuccess();
        }
//        connectSuccess();


    }
    close(server_socket);
    return 0;
}

void NativeSocket::connectSuccess() {
    sdk::SDKCommand command;
    command.set_commandtype(sdk::SDKCommand::CONNECT_SUCCESS);
    sendMessage(command);
}

int NativeSocket::sendMessage(sdk::SDKCommand message) {
    int len = message.ByteSize() + 4;
    char *buffer = new char[len];

    google::protobuf::io::ArrayOutputStream arrayOut(buffer, len);
    google::protobuf::io::CodedOutputStream codedOut(&arrayOut);

    codedOut.WriteVarint32(message.ByteSize());

    //write protobuf my_message mm to CodedOutputStream
    message.SerializeToCodedStream(&codedOut);
    LOGD("开始发送");

    if (send(new_server_socket, buffer, len, 0) < 0) {
        LOGD("发送失败");
        return -1;
    } else {
        LOGD("发送成功");
    }
    delete[] buffer;
    return 0;
}