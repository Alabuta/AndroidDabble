#include <string>
#include <tuple>

#include <jni.h>

extern "C" JNIEXPORT jstring

JNICALL
Java_com_example_almaz_helloworld_MainActivity_nativeEntryPoint(JNIEnv *env, jobject /* this */)
{
    using namespace std::string_literals;

    auto [hello] = std::tuple("Hello from C++17!"s);

    return env->NewStringUTF(hello.c_str());
}
