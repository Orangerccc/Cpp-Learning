#include<iostream>
#include<string>
#include<fstream>
using namespace std;

void test01(){

    ofstream ofs;
    ofs.open("D:/vscode/cpp/1.txt",ios::out);
    ofs << "1234567" <<endl;
    ofs << "7654321" <<endl;
    ofs << "12345678" <<endl;
    ofs.close();
}
int main(){
    test01();
    return 0;
}