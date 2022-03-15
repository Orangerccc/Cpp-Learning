#include<iostream>
using namespace std;

class B
{
private:
    int b;
public:
    B();
    B(int i);
    ~B();
    void print() const;
};
B::B()
{
    b = 0;
    cout << "B is default constructor called." << endl;
}
B::B(int i) 
{
    b = i;
    cout << "B is deconstructor called." << endl;
}

B::~B()
{
    cout << "B is destructor called." << endl;
}
void B::print() const{
    cout << b <<endl;
}

class C :public B
{
private:
    int c;
public:
    C();
    C(int i, int j);
    ~C();
    void print() const;
};

C::C()
{
    c = 0;
    cout << "c is default constructor called." << endl;
}
C::C(int i, int j):B(i)
{
    c = j;
    cout << "c is constructor called." << endl;
}
C::~C()
{
    cout << "c is destructor called." << endl;
}
void C::print() const{
    cout << c <<endl;
}
int main(){
    // C* ptr = new C();
    // ptr->print();
    // delete ptr;//最后不用 一定要delete！！！
    C obj(5,6);
    obj.print();
    return 0;
}

