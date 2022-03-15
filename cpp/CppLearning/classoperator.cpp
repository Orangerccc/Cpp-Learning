#include<iostream>
#include<string>

using namespace std;

class student{
    public:
    student(){
        this->stu_no = 0;
        this->name = "Ming";
        this->sex = "men";
    }
    student(int stu_no){
        this->stu_no = stu_no;
        this->name = "Ming";
        this->sex = "men";
    }
    student(const student& stu){
        this->stu_no = stu.stu_no;
        this->name = stu.name;
        this->sex = stu.sex;
    }
    void operator+(student stu){
        this->stu_no += stu.stu_no;
        // return *this;
    }
    // void operator=(student stu){
    //     this->stu_no = stu.stu_no;
    //     this->name = stu.name;
    //     this->sex = stu.sex;
    // }

    int stu_no;
    string name;
    string sex;
};
int main(){
    student stu1(20);
    student stu2(30);
    stu1 + stu2;
    cout << stu1.stu_no <<endl;
    return 0;
}