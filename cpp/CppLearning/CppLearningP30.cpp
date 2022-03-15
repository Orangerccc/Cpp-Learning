#include<iostream>
using namespace std;

class Base1
{
public:
    void virtual display() const{
        cout << "Base1::display()" <<endl;
    }
};
class Base2:public Base1
{
public:
    void display() const{
        cout << "Base2::display()" <<endl;
    }
};
class Derive: public Base2
{
public:
    void  display() const{
        cout << "Derive::display()" <<endl;
    }
};
void fun(Base1* ptr){
    ptr->display();
}
int main(){
    Base1 base1;
    Base2 base2;
    Derive derive;
    
    fun(&base1);
    fun(&base2);
    fun(&derive);
    return 0;
}
