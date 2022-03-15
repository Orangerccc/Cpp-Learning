#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
class Solution {
public:
    int max(int a, int b){
        if(a >= b) return a;
        else return b;
    }
    int maximumInvitations(vector<int>& favorite) {
        int ans = 0;
        int n = favorite.size();
        if(n == 0) return 0;
        vector<unordered_set<int>> repeat;
        vector<unordered_set<int>> anss;
        for(int i = 0 ;i < n ; i++){
            unordered_set<int> temp;
            temp.insert(i);
            auto it = temp.begin();
            while(favorite[*temp.begin()] != i && favorite[*temp.begin()] != *(it)){
                if(temp.count(favorite[*temp.begin()])){
                    temp.clear();
                    break;
                }
                temp.insert(favorite[*temp.begin()]);
                it = ++temp.begin();
            }
            // cout << temp.size() <<endl;
            if(!temp.empty()  && favorite[*temp.begin()] == *(it)) {
                repeat.push_back(temp);
                continue;
            }
            if(!temp.empty()) {
                anss.push_back(temp);
            }
            // cout << temp.size() <<endl;
        }

        if(repeat.empty() && anss.empty()) return 0;
        cout << repeat.size() <<endl;
        cout << anss.size() <<endl;
        for(int i = 1; i < repeat.size();i++){
            auto it = repeat[0].begin();
            for(it = repeat[0].begin(); it!= repeat[0].end(); it++){
                    if(repeat[i].count(*it)) break;
            }
            if(it == repeat[0].end()) repeat[0].insert(repeat[i].begin(),repeat[i].end());
        }
        int res = 0;
        
        for(int i = 0; i < anss.size();i++){
            res = max(res,anss[i].size());
        }
        // cout << 0 <<endl;
        res = max(res,repeat[0].size());
        
        return res;
    }
};

int main(){
    Solution s;
    vector<int> fav{1,2,3,4,5,6,3,8,9,10,11,8};
    int res = s.maximumInvitations(fav);
    cout << res <<endl;
    return 0;
}