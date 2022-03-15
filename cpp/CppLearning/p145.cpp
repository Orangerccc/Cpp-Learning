#include<iostream>
#include<string>
#include<fstream>
#include<algorithm>

using namespace std;
class Person{
public:
    char m_Name;
    int m_age;
};

// void test01(){
//     ofstream ofs;

//     ofs.open("D:/vscode/cpp/Person.txt",ios::out|ios::binary);
//     Person p ={"张三",18};

//     ofs.write((const char *)&p,sizeof(Person));
//     ofs.close();
// }
void test02(){
    ifstream ifs("Person.txt",ios::in|ios::binary);
    if(!ifs.is_open()){
        cout <<"文件打开失败" <<endl;
        return;
    }
    Person p;
    ifs.read((char *)&p,sizeof(Person));
    cout<<p.m_Name <<p.m_age <<endl;
    ifs.close();
}

int main(){
    // test02();
    // int a = 0,b = 1;
    // int c = max(a,b);
    // cout << c <<endl;
    int rows=2,col=2;
    int ** a2 = new int*[rows];
    for(int i =0;i<rows;i++){
        a2[i]=new int [col];
    }
    for(int i =0;i<rows;i++){
        for(int j=0;j<col;j++){
            cout << a2[i][j] <<endl;
        }
    }
    for(int i=0;i<rows;i++)
        delete []a2[i];
    delete []a2;
    return 0;
}