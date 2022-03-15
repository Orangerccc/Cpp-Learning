#include<iostream>
#include<string.h>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int intrandom[26], intmagazine[26];
        char  charrandom[ransomNote.size()+1] , charmagazine[magazine.size()+1];
        memset(intrandom,0,sizeof(intrandom));
        memset(intmagazine,0,sizeof(intmagazine));
        cout << intrandom[12] <<endl;
        strcpy(charrandom,ransomNote.c_str());
        strcpy(charmagazine,magazine.c_str());
        cout << sizeof(intrandom)<<endl;
        for(int i = 0; i < sizeof(charrandom)/sizeof(charrandom[0])-1; i++){
            cout << charrandom[i] <<endl;
            intrandom[charrandom[i]-'a']++;
            cout << intrandom[charrandom[i]-'a'] <<endl;
        }
        for(int i = 0; i <  sizeof(charmagazine)/sizeof(charmagazine[0])-1; i++){
            // cout << charmagazine[i] <<endl;
            intmagazine[charmagazine[i]-'a']++;
        }
        for(int i = 0; i < 26; i++){
            cout << i << " " << intrandom[i] <<endl;
            if(intrandom[i] == 0) continue;
            if(intrandom[i] > intmagazine[i]) return false;
        }
        return true; 
    }
};
int main(){
    // Solution s;
    // string s1 = "aa"; string s2 = "aab";
    // bool res = s.canConstruct(s1,s2);
    // cout<< res <<endl;
    // return 0;
        int a = 43 ^ 97;
        cout << a << endl;
        return 1;
}