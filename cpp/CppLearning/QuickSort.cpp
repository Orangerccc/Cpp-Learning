#include<iostream>
#include<vector>
using namespace std;


int partition(vector<int> &L,int low,int high){
    int pivotkey = L[low];
    while(low<high){
        while(low<high && L[high] >= pivotkey) --high;

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