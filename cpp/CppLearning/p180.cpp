#include<iostream>
#include<string>
using namespace std;
#include<D:/vscode/cpp/person.hpp>


// template<typename T1, typename T2>
// class Person{
// public:
//     Person(T1 name,T2 age);
//     // {
//     //     this->m_name = name;
//     //     this->m_age = age;
//     // }
//     void showPerson();
//     // {
//     //     cout << this->m_name << this->m_age <<endl;
//     // }
//     T1 m_name;
//     T2 m_age;
// };
// template<typename T1, typename T2>
// Person<T1,T2>::Person(T1 name,T2 age){
//         this->m_name = name;
//         this->m_age = age;
// }
// template<typename T1, typename T2>
// void Person<T1,T2>::showPerson(){
//     cout << this->m_name << this->m_age <<endl;
// }
void test01(){
    Person<string,int> p("sdad",123);
    p.showPerson();
}
int main(){

    test01();

    system("pause");

    return 0;
}