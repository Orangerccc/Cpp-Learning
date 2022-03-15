#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
bool cmp(const pair<int,int> &a,const pair<int,int> &b){
    return a.first > b.first;
}
int get_minimum_stop(int L, int P,vector<pair<int,int>> &stop){
    priority_queue<int> Q;
    int result = 0;
    stop.push_back(make_pair(0,0));
    // sort(stop.begin(),stop.end(),cmp);
    sort(stop.begin(),stop.end(),[](const pair<int,int> &A,const pair<int,int> &B)\
    {return A.first > B.first;});
    for(int i = 0; i < stop.size(); i++){
        int dis = L - stop[i].first;
        while(!Q.empty() && dis > P){
            P += Q.top();
            Q.pop();
            result++;
        }
        if(Q.empty() && dis > P){
            return -1;
        }
        P -= dis;
        L = stop[i].first;
        Q.push(stop[i].second);
    }
    return result;
}
int main(){

    vector<pair<int,int>> stop;
    int N;
    int L;
    int P;
    int distance;
    int fuel;
    scanf("%d",&N);
    for(int i =0; i< N;i++){
        scanf("%d %d",&distance,&fuel);
        stop.push_back(make_pair(distance,fuel));
    }
    scanf("%d %d",&L,&P);
    printf("%d\n",get_minimum_stop(L,P,stop));
    // cout << get_minimum_stop(L,P,stop) <<endl;
    return 0;
}

// sort(stop.begin(),stop.end(),[](const pair<int,int> &A,const pair<int,int> &B)\
//     {return A.first > B.first;});