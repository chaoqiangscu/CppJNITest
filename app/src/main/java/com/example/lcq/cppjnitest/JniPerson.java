package com.example.lcq.cppjnitest;

public class JniPerson {
    //保存c++类的地址
    long nativePerson;
    //构造函数
    public JniPerson(){
        nativePerson = createNativeObject();
    }
    public void setAge(int age){
        setAge(nativePerson,age);
        return;
    }

    public int getAge(){
        return getAge(nativePerson);
    }
    /**本地方法：创建c++对象并返回地址*/
    private native long createNativeObject();
    private native void setAge(long addr,int age);
    private native int getAge(long addr);
}
