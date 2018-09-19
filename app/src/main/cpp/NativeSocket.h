//
// Created by 小明 on 2018/5/9.
//

#ifndef PROTOBUFDEMO_NATIVESOCKET_H
#define PROTOBUFDEMO_NATIVESOCKET_H



#define HELLO_WORLD_SERVER_PORT    11001
#define LENGTH_OF_LISTEN_QUEUE 20

#include <libs/google/protobuf/any.pb.h>
#include <include/proto/SDKCommand.pb.h>
#include "include/log/Log.h"

class NativeSocket {

private:
    NativeSocket() {

    }


private:

    static NativeSocket *m_instance;
public:
    static NativeSocket *GetInstance();

public:
    int startServer();

    void connectSuccess();

    int sendMessage(sdk::SDKCommand message);
};


#endif //PROTOBUFDEMO_NATIVESOCKET_H
