#include<iostream>
#include<string>
#include<fstream>
using namespace std;

void test01(){

    ifstream ifs;
    ifs.open("D:/vscode/cpp/1.txt",ios::in);

    if(!ifs.is_open()){
        cout<< "文件打开失败" <<endl;
        return;
    }
    //第一种
    // char buf[1024] = {0};
    // string buf;
    // while (getline(ifs,buf))
    // {
    //     cout << buf <<endl;
    // }
    char c;
    while ((c =ifs.get()) !=EOF)
    {
       cout << c; 
    }
    
    //
    
    ifs.close();
}
int main(){
    test01();
    return 0;
}