#include <jni.h>
#include <string>
/**
 * 这个方法没有用到，不用管它，只是前期测试用的。可以使用它给自己一些提示，所以就不删除了。
 */
extern "C" JNIEXPORT jstring

JNICALL
Java_com_example_lcq_cppjnitest_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
