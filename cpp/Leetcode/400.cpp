#include<iostream>
#include<string>
using namespace std;

int main(){
    string s = "";
    int i = 100;
    s = to_string(i);
    int d = stoi(s.c_str());
    cout << d << endl;
    s.erase(s.begin());
    cout << s <<endl;
    return 0;
}