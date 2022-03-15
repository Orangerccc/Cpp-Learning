#include<iostream>
using namespace std;

class A{
public:
    int a;
    int b;
private:
    int c;
};

class B:public A{
public:
    void jk(){
        func();
    }
private:
    void func(){
        a = 1;
        // c = 1;
        cout <<111 <<endl;
    }
};
int main(){
    B b1;
    b1.jk();
    return 0;
}