#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;
class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        istringstream txt(text); //用istringstream的方式进行字符串按照空格切割
        string w1, w2, w3;
        txt >> w1 >> w2;
        cout << w1 <<" " <<w2 <<endl;
        vector<string> ans;
        while(txt >> w3) {
            cout << w3 <<endl;
            if(w1 == first && w2 == second) ans.emplace_back(w3);
            w1 = w2;
            w2 = w3;
        }
        return ans;
    }
};
int main(){
    Solution s;
    vector<string> ans;
    string text = "alice is a good girl she is a good student";
    string first = "a";
    string second ="good";
    s.findOcurrences(text,first,second);
    return 0;
}