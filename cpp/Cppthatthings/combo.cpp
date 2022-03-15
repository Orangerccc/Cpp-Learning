// #include<iostream>
// using namespace std;
// //相同的内存地址
// union myun 
// {
//     struct { int x; int y; int z; }u; 
//     int k; 
// }a; 
// int main() 
// { 
//     a.u.x =4;
//     a.u.y =5; 
//     a.u.z =6; 
//     a.k = 0; //覆盖掉第一个int空间值
//     printf("%d %d %d %d\n",a.u.x,a.u.y,a.u.z,a.k);
//     system("pause");
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Base  {
//     public:
//         Base()    { cout << "Constructor: Base" << endl; }
//         virtual ~Base()   { cout << "Destructor : Base" << endl; }
// };

// class Derived: public Base {
//     public:
//         Derived()   { cout << "Constructor: Derived" << endl; }
//         ~Derived()   { cout << "Destructor : Derived" << endl; }
// };

// int main()  {
//     Base *Var = new Derived();
//     delete Var;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class A
// {
//     public:
//         char b;
//         virtual void fun() {};
//         static int c;
//         static int d;
//         static int f;
// };

// int main()
// {
//     /**
//      * @brief 16  字节对齐、静态变量不影响类的大小、vptr指针=8
//      */
//     cout<<sizeof(int)<<endl; 
//     cout<<sizeof(A)<<endl; 
//     return 0;
// }
#include<iostream>
using namespace std;
class A
{
    virtual void fun() {}
};
class B
{
    virtual void fun2() {}
};
class C : virtual public  A, virtual public B
{
    public:
        virtual void fun3() {}
        virtual void fun4() {}
        virtual void fun5() {}
};

int main()
{
    /**
     * @brief 8 8 16  派生类虚继承多个虚函数，会继承所有虚函数的vptr
     */
    cout<<sizeof(A)<<" "<<sizeof(B)<<" "<<sizeof(C);

    return 0;
}