#include<iostream>
#include<string>
using namespace std;
#include<D:/vscode/cpp/Myarray.hpp>

void printArray(Myarray<int>& arr){
    for(int i =0;i<arr.getsize();i++){
        cout << arr[i] <<endl;
    }
}
class person{
public:
    person(){};
    person(string name,int age){
        this->name = name;
        this->age = age;
    }
    string name;
    int age;
};
void test01(){
    Myarray <int> arr1(5);
    // Myarray<int> arr2(arr1);
    // Myarray<int> arr3(100);
    // arr3 = arr1;
    for(int i =0;i<arr1.getcapacity();i++){
        arr1.push_back(i);
    }
    cout <<"arr1的打印输出" <<endl;

    printArray(arr1);

    cout <<arr1.getcapacity()<<endl;
    cout <<arr1.getsize()<<endl;
    arr1.pop_back();
    cout <<arr1.getcapacity()<<endl;
    cout <<arr1.getsize()<<endl;
}
void printpersonarray(Myarray<person> &arr){
    for(int i =0;i<arr.getsize();i++){
        cout << arr[i].name <<arr[i].age<<endl;
    }
}
void test02(){
    Myarray<person> arr(10);
    person p1("dsa",100);
    person p2("da",100);
    person p3("dsb",100);
    person p4("dna",100);
    person p5("dsm",100);
    arr.push_back(p1);
    arr.push_back(p2);
    arr.push_back(p3);
    arr.push_back(p4);
    arr.push_back(p5);
    printpersonarray(arr);
}
int main(){

    // test01();
    test02();
    system("pause");

    return 0;
}
