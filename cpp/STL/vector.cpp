#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    const int N = pow(10,5)+10 , P = 13331;
    vector<int> h(N,0);
    vector<int> p(N,0);
    vector<int> res;
    res.push_back(1);
    for (int i=0; i<100; i++) res.push_back(i);
    cout << res.max_size() <<endl;
    return 0;
}