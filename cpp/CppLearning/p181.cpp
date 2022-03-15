#include<iostream>
#include<string>
using namespace std;

template<typename T1, typename T2>
class Person;
template<class T1,class T2>
void showPerson(Person<T1,T2> p)
    {
        cout << "类外实现："<<p.m_name << p.m_age <<endl;
    }

template<typename T1, typename T2>
class Person{
public:
    //全局函数 类内实现
    //friend void showPerson<>(Person<T1,T2> p);
    // {
    //     cout << p.m_name << p.m_age <<endl;
    // }
    //加空模板 参数列表 -> 函数模板
    //如果全局函数类外实现 需要让编译器提前知道函数存在
    friend void showPerson<>(Person<T1,T2> p);
    // {
    //     cout << p.m_name << p.m_age <<endl;
    // }

    Person(T1 name,T2 age)
    {
        this->m_name = name;
        this->m_age = age;
    }
private:
    T1 m_name;
    T2 m_age;
};

void test01(){
    Person<string,int> p("sdad",123);

    showPerson(p);
}
int main(){

    test01();

    system("pause");

    return 0;
}