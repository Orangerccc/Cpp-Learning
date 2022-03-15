#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<algorithm>
using namespace std;
// class meeting{
// public:
//     bool operator() (const vector<int>& a,  const vector<int>& b){
//         return a[2] > b[2];
//     }
// };
// class Solution {
// public:
//     vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int firstPerson) {
//         //sort 自定义规则
//         vector<pair<int,int>> s;
//         sort(s.begin(),s.end(),[](const pair<int,int> x,const pair<int,int> y)\
//           {return x.first * y.second < y.first * x.second;});
//         //priority_queue 自定义规则
//         //priority_queue<vector<int>,vector<vector<int>>,meeting> pq;
//         auto cmp = [](const vector<int> &a,const vector<int> &b){return a[2] > b [2];};
//         priority_queue<vector<int>,vector<vector<int>>,decltype(cmp)> pq(cmp);
//         for(auto v:meetings){
//             pq.push(v);
//         }
//         while(!pq.empty()){
//             cout << pq.top()[2] << endl;
//             pq.pop();
//         }
//         vector<int> res;
//         return res;
//     }
// };

int main(){
    vector<int> s1{1,2,5};
    vector<int> s2{2,3,8};
    vector<int> s3{1,5,10};
     vector<int> s4{1,5,10};
    vector<vector<int>> meetings;
    meetings.push_back(s1);
    meetings.push_back(s2);
    meetings.push_back(s3);
    meetings.push_back(s4);
    // Solution s;
    // vector<int> res = s.findAllPeople(6,meetings,1);

    map<int,vector<vector<int>>> cnt;
        for(auto v:meetings){
            // auto ss = (cnt.find(v[2])!=cnt.end()?cnt[v[2]]:"default");
            // ss.push_back(v);
            if(cnt.find(v[2])!=cnt.end()){
                cout << 1 << endl;
                cnt[v[2]].push_back(v);
            }else{
                vector<vector<int>> temp(1,vector<int>(v)); 
                temp.push_back(v);
                cnt[v[2]] = temp;
            }
        }
    return 0;
}