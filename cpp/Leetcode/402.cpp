#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    string removeKdigits(string num, int k) {
        vector<int> S;
        string result = "";
        for(int i = 0; i < num.size(); i++){
            int number = num[i] - '0';
            while(S.size() !=0 && (number < S.back()) && k > 0){
                S.pop_back();
                k--;
            }
            if(S.size() != 0 || number != 0){
                S.push_back(number);
            }
        }
        while(S.size() != 0 && k > 0){
            S.pop_back();
            k--;
        }
        for(int i = 0; i < S.size(); i++){
            result.append(1,('0'+S[i]));
            // result+= ('0'+S[i]) ;
        }
        if(result==""){
            result ="0";
        }
        return result;
    }
};
int main(){
    string num =  "1432219";
    int k = 3;
    Solution s;
    string res = s.removeKdigits(num,k);
    cout << res << endl;
    return 0;
}