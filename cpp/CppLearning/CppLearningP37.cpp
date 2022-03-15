#include<iostream>
#include"CppLearningP36.h"

using namespace std;

int main(){
    Array<int> a(10);
    for(int j = 0; j < 10; j++){
            a[j] = j+1;
            cout << a[j] << endl;

    }
    int n = 0;
    int  count = 10;
    cin >> n;
    for(int i = 2; i <= n; i++){
        bool isPrime = true;
        for(int j = 0; j < count;j++)
            if(i % a[j] == 0){
                isPrime = false;break;
            }
        if(isPrime){
            if(count == a.getSize()) a.resize(count * 2);
            a[count++] = i;
        }
    }
    return 0;
}
