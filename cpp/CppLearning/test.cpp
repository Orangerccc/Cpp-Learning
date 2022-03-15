#include<iostream>
#include<string>
// #include<unordered_map>
using namespace std;
// int firstUniqChar(string s) {
//         unordered_map<int,int> map1;
//         for(char v:s){
//             cout << v <<" "<< (int)v<<endl;
//             map1[v]++;
//         }
//         for(auto v : map1){
//             cout << v.first << " " << v.second <<endl;
//             // if(v.second == 1){
//             //     cout << v.first<<endl;
//             //     return s.find_first_of(v.first);
//             // }
//         }
//         return -1;
// }
// int main(){
//     string s = "leetcode";
//     int i = firstUniqChar(s);
//     return 0;
// }
// void compu_float(float x, int &n, float &f){
//     n = static_cast<int>(x);
//     f = x - n;
// }
int main(){
    // float x = 3.141593;
    // int res;
    // float res_;
    // compu_float(x,res,res_);
    // cout << res << " " << res_ << endl;
    int n;
    cin >> n;
    int* array = new int [n];
    for(int i=0;i<n;i++){
        cin >> array[i];
    }
    for(int i=0;i<n;i++){
        cout << array[i] <<endl;
    }
    delete[] array;
    return 0;
}

// class Solution {
// public:
//     int firstUniqChar(string s) {
//         unordered_map<int, int> frequency;
//         for (char ch: s) {
//             ++frequency[ch];
//         }
//         for (int i = 0; i < s.size(); ++i) {
//             if (frequency[s[i]] == 1) {
//                 return i;
//             }
//         }
//         return -1;
//     }
// };