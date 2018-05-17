//
// Created by lcq on 2018/5/17.
//

#include "Person.h"
#include <jni.h>

extern "C"
JNIEXPORT jlong JNICALL
Java_com_example_lcq_cppjnitest_JniPerson_createNativeObject(JNIEnv *env, jobject obj) {
    jlong result;
    result =(jlong) new Person();
    return result;
}

extern "C"
JNIEXPORT void JNICALL
Java_com_example_lcq_cppjnitest_JniPerson_setAge(JNIEnv *env, jobject obj, jlong addr, jint age) {
    //对象指针调用方法
    ((Person*)addr)->setAge(age);
}

extern "C"
JNIEXPORT jint JNICALL
Java_com_example_lcq_cppjnitest_JniPerson_getAge(JNIEnv *env, jobject obj, jlong addr) {
    return ((Person*)addr)->getAge();
}


int Person::getAge() {
    return this->age;
}

void Person::setAge(int age) {
    this->age = age;
}

Person::Person() {

}


