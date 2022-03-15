#pragma once
#include<iostream>

using namespace std;
template<class T>
class Myarray{
public:

    //有参构造
    Myarray(int capacity){
        cout << "有参构造" <<endl;
        this->m_capacity  = capacity;
        this->m_size = 0;
        this->paddress = new T [this->m_capacity];
    }
    //拷贝构造
    Myarray(const Myarray &arr){
        cout << "拷贝构造" <<endl;
        this->m_capacity = arr.m_capacity;
        this->m_size = arr.m_size;

        //深拷贝 
        this->paddress = new T[arr.m_capacity];
        for(int i = 0;i<arr.m_size;i++){
            this->paddress[i] = arr.paddress[i];
        }
    }
    //operator= 重载

    Myarray& operator=(const Myarray &arr){
        cout << "=重载" <<endl;
        //先判断堆区是否有数据
        if(this->paddress !=NULL){
            delete [] this->paddress;
            this->paddress = NULL;
            this->m_capacity = 0;
            this->m_size = 0;
        }
        this->m_capacity = arr.m_capacity;
        this->m_size = arr.m_size;
        //深拷贝
        this->paddress = new T[arr.m_capacity];
        for(int i = 0;i<arr.m_size;i++){
            this->paddress[i] = arr.paddress[i];
        }
        return *this;
    }
    //尾插法
    void push_back(const T &val){
        //判断容量满足？
        if(this->m_capacity ==  this->m_size){
            return;
        }
        this->paddress[this->m_size] = val;
        this->m_size++;
    }
    void pop_back(){
        if(this->m_size ==0){
            return;
        }
        this->m_size--;
    }
    T& operator[](int address){
        // if(address >= this->m_capacity){
        //     return;
        // }
        return this->paddress[address];
    }
    int getcapacity(){
        return this->m_capacity;
    }
    int getsize(){
        return this->m_size;
    }
    //析构函数
    ~Myarray(){
        cout << "析构函数" <<endl;
        if (this->paddress != NULL){
            delete [] this->paddress;
            this->paddress = NULL;
        }
    }

private:
    T * paddress; //指向堆区开启的数组指针
    int m_capacity;
    int m_size;
};
