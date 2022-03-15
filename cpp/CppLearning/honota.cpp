#include<iostream>
#include<string>
#include<vector>
using namespace std;

// void move(char src,char dest){
//     cout << src << " ->" << dest <<endl;
// }
// void hanoi(int n, char src,char medium, char dest){
//     if(n==1) move(src,dest);
//     else{
//         hanoi(n-1,src,dest,medium);
//         move(src,dest);
//         hanoi(n-1,medium,src,dest);
//     }
// }
// int main(){
//     int m;
//     cin >> m;
//     hanoi(m,'A','B','C');
//     return 0;
// }
class Solution {
public:
    void move(int n, vector<int>& src, vector<int>& temp, vector<int>& tgt){
        if(n == 1 ){
            tgt.push_back(src.back());
            src.pop_back();
        }else{
            move(n-1,src,tgt,temp);
            move(1,src,temp,tgt);
            move(n-1,temp,src,tgt);
        }
    }
    void hanota(vector<int>& A, vector<int>& B, vector<int>& C) {
        int n = A.size();
        move(n,A,B,C);
    }
};
int main(){
    Solution S;
    vector<int> A {2,1,0};
    vector<int> B;vector<int> C;
    S.hanota(A,B,C);
    return 0;
}