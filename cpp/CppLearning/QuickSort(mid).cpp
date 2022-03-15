#include<iostream>
#include<vector>
using namespace std;

//整个快排的思想不许变，只是给Low取一个合适的值
int partition(vector<int> &L,int low,int high){
    int a = L[low]; int b = L[low+(high-low)/2];
    int c = L[high];
    int pivotkey = a>=b?(b>=c?b:(a>=c?c:a)):(a>=c?a:(b>=c?c:b));
    // cout << pivotkey;
    int mid = pivotkey==a?low:(pivotkey==c?high:(low+(high-low)/2));
    L[low] = pivotkey;
    L[mid] = a;
    // cout << pivotkey <<endl;
    while(low<high){
        while(low<high && L[high] >= pivotkey) --high;
        // cout << L[high] <<" "<< L[low] << ' ';

        int temp_1 = L[high];
        L[high] = L[low];
        L[low] = temp_1;
        while(low<high && L[low] <= pivotkey) ++low;
        int temp_2 = L[high];
        L[high] = L[low];
        L[low] = temp_2;
    }
    // cout << low;
    return low;
}
void Qsort(vector<int> &L,int low,int high){
    if (low < high){
        int pivotkey = partition(L,low,high);
        // cout << pivotkey <<" ";
        Qsort(L,low,pivotkey-1);
        Qsort(L,pivotkey+1,high);
    }
}
int main(){
    vector<int> L;
    for(int i = 10; i > 0; i--){
        L.push_back(i);
    }
    Qsort(L,0,9);
    for(int i =0; i < 10; i++){
        cout << L[i] <<endl;
    }
    return 0;
}