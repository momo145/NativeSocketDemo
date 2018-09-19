#include <jni.h>
#include <string>
#include "NativeSocket.h"

extern "C" JNIEXPORT jstring

JNICALL
Java_com_sinkinchan_nativesocketdemo_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
extern "C"
JNIEXPORT void JNICALL
Java_com_sinkinchan_nativesocketdemo_jni_Jni_startServer(JNIEnv *env, jobject instance) {
    //开启socket服务器
    NativeSocket::GetInstance()->startServer();

}extern "C"
JNIEXPORT void JNICALL
Java_com_sinkinchan_nativesocketdemo_jni_Jni_addOne(JNIEnv *env, jobject instance, jint value) {

    int result = (int) value + 1;
    sdk::SDKCommand command;
    command.set_value(result);
    command.set_commandtype(sdk::SDKCommand::TEST_MESSAGE_RESULT);
    NativeSocket::GetInstance()->sendMessage(command);

}