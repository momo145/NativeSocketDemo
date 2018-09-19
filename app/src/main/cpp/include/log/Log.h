//
// Created by 小明 on 2018/5/9.
//

#ifndef PROTOBUFDEMO_LOG_H
#define PROTOBUFDEMO_LOG_H

#include  <android/log.h>

#define TAG    "NativeSocketDemo" // 这个是自定义的LOG的标识
#define LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG, TAG, __VA_ARGS__) // 定义LOGD类型
#endif //PROTOBUFDEMO_LOG_H
