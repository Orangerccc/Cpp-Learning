#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> res{0,1,2,3,4,5,6,7,8,9};
    int left = 0;
    int right = 11;

    auto v1 = upper_bound(res.begin(),res.end(),left-1);
    auto v2 = upper_bound(res.begin(),res.end(),right);
    cout << *v1 <<endl;
    cout << *v2 <<endl;
    cout << v2 - v1 <<endl;
    return 0;
}