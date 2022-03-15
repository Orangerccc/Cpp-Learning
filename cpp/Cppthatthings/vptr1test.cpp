#include <iostream>
#include <stdio.h>
using namespace std;

class Base
{
    public:
        Base(){};
        virtual void fun1()
        {
            cout << "Base::fun1()" << endl;
        }
        virtual ~Base(){};
};

/**
 * @brief 派生类
 */
class Derived: virtual public Base
{
    public:
        Derived(){};
        void fun1()
        {
            cout << "Derived::fun1()" << endl;
        }
        ~Derived(){};
};
class Derived2: virtual public Base
{
    public:
        Derived2(){};
        void fun1()
        {
            cout << "Derived::fun1()" << endl;
        }
        ~Derived2(){};
};
class Myclass:  public Derived,public Derived2 
{
    public:
        Myclass(){};
        void fun1()
        {
            cout << "Derived::fun1()" << endl;
        }
        ~Myclass(){};
};
int main(){
    
    cout <<sizeof(Base) <<" "<<sizeof(Derived) << " "<< sizeof(Derived2)  <<" " <<sizeof(Myclass) << endl;
    return 0;
}