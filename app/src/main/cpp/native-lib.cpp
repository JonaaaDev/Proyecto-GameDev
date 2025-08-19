#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_jonaaadev_mo_MainActivity_stringFromJNI(JNIEnv* env, jobject /* this */) {
    std::string hello = "Hola Mundo desde C++!";
    return env->NewStringUTF(hello.c_str());
}
