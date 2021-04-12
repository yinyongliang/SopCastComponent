#include "android/log.h"
#include "librtmp/rtmp.h"
#include <jni.h>
#include "string.h"

#define TAG "Rtmp_publish"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, TAG, __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, TAG, __VA_ARGS__)

const char* clazz_name = "com/laifeng/sopcastsdk/rtmp/RtmpPublish";


RTMP *rtmp;

extern "C"
JNIEXPORT void JNICALL
Java_com_laifeng_sopcastsdk_rtmp_RtmpPublish_init(JNIEnv *env, jclass clazz, jstring url,
                                                  jint width, jint height) {
    LOGI("init");
    const char* rtmp_url = env->GetStringUTFChars(url,0);

}


extern "C"
JNIEXPORT void JNICALL
Java_com_laifeng_sopcastsdk_rtmp_RtmpPublish_stop(JNIEnv *env, jclass clazz) {
    LOGI("stop");
}

