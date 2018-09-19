package com.sinkinchan.nativesocketdemo.jni;

public class Jni {
    private static final Jni ourInstance = new Jni();


    public static Jni getInstance() {
        return ourInstance;
    }

    private Jni() {
    }

    //服务器开始
    public native void startServer();

    //测试+1
    public native void addOne(int value);
}
