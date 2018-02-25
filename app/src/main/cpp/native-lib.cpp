#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_tw_kobeyu_pllab_1android_1opencl_1v02_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
