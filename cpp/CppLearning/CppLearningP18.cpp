#include<iostream>
using namespace std;
int i;
int main(){
    i = 5;
    {
        int i = 7;
         cout << i <<endl;
    }
    cout << i <<endl;
    return 0;
}