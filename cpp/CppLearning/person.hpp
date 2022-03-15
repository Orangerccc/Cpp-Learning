#pragma once
#include <iostream>
 
using namespace std;

template<typename T1, typename T2>
class Person{
public:
    Person(T1 name,T2 age);
    void showPerson();
    T1 m_name;
    T2 m_age;
};
template<typename T1, typename T2>
Person<T1,T2>::Person(T1 name,T2 age){
        this->m_name = name;
        this->m_age = age;
}
template<typename T1, typename T2>
void Person<T1,T2>::showPerson(){
    cout << this->m_name << this->m_age <<endl;
}