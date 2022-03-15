#include<iostream>
#include<stack>
#include<queue>

using namespace std;

bool check_is_valid_order(queue<int> order){
    stack<int> s;
    int n = order.size();
    for(int i = 1;i <= n;i++){
        s.push(i);
        while(!s.empty()&&order.front()==s.top()){
            s.pop();
            order.pop();
        }
    }
    if(s.empty()){
        return true;
    }else{
        return false;
    }
}

int main(){
    queue<int> q;
    q.push(5);q.push(4);q.push(3);q.push(2);q.push(1);
    bool w = check_is_valid_order(q);
    cout << w << endl;
    return 0;
}