#include<iostream>
#include<vector>
using namespace std;
int binary_search(const vector<int> &vec,int num){
    int left = 0;
    int right = vec.size()-1;
    while(left <= right){
        int mid = left + (right - left)/2;
        // cout << mid <<endl;
        if(vec[mid] == num) return num;
        else if(vec[mid] > num)  right = mid - 1;
        else left = mid + 1;
    }
    return -1;
}
int main(){
    vector<int> vec{1,2,3,4,5};
    int num = 6;
    int num1 = binary_search(vec,num);
    cout << num1 <<endl;
    return 0;
}