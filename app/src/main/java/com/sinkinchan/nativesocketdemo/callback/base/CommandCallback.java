package com.sinkinchan.nativesocketdemo.callback.base;


import com.sinkinchan.nativesocketdemo.proto.SDKCommandProto;

public interface CommandCallback {
    void onCommand(SDKCommandProto.SDKCommand command);
}
