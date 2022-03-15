#include<E:/Windows/vscode/cpp/person.h>
using namespace std;


template<typename T1, typename T2>
Person<T1,T2>::Person(T1 name,T2 age){
        this->m_name = name;
        this->m_age = age;
}
template<typename T1, typename T2>
void Person<T1,T2>::showPerson(){
    cout << this->m_name << this->m_age <<endl;
}