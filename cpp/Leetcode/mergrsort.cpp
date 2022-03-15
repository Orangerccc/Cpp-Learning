#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
# define NDEBUG
using namespace std;

// void mergesort_two_vec(vector<int> &vec1,vector<int> &vec2,vector<int> &vec){
//     size_t i = 0, j = 0;
//     while(i < vec1.size() && j < vec2.size()){
//         if( vec1[i] <= vec2[j]){
//             vec.push_back(vec1[i]);
//             i++;
//         }else{
//             vec.push_back(vec2[j]);
//             j++;
//         }
//     }
//     if(i == vec1.size()){
//         for(; j < vec2.size();j++){
//             vec.push_back(vec2[j]);
//         }
//     }else{
//         for(; i < vec1.size();i++){
//             vec.push_back(vec1[i]);
//         }
//     }
// }

// void mergesort(vector<int> &vec){
//     if(vec.size() == 1){
//         return;
//     }
//     int mid = vec.size()/2;
//     vector<int> vec1;
//     vector<int> vec2;
//     for(int i =0; i < mid; i++){
//         vec1.push_back(vec[i]);
//     }
//     for(size_t i =mid; i < vec.size(); i++){
//         vec2.push_back(vec[i]);
//     }
//     mergesort(vec1);
//     mergesort(vec2);
//     vec.clear();
//     mergesort_two_vec(vec1,vec2,vec);
// }
void merge_two_vec(vector<int> &vec1, vector<int> &vec2, vector<int> &vec );
void mergesort(vector<int> &vec);
int main(){
    // int x = 7;
    // assert (x == 2);
    vector<int> vec1;
    vector<int> vec2;
    // srand(time(3213));
    for(int i = 0; i <10; i++){
        int num = (rand() * rand()) % 100003;
        vec1.push_back(num);
        vec2.push_back(num);
    }
    mergesort(vec1);
    sort(vec2.begin(),vec2.end());
    assert(vec1.size() == vec2.size());
    for(int i = 0 ;i < vec1.size(); i++){
        assert(vec1[i] == vec2[i]);
        // cout << vec1[i] <<endl;
    }
    return 0;
}
void merge_two_vec(vector<int> &vec1, vector<int> &vec2, vector<int> &vec ){
    int i = 0 , j = 0;
    while(i < vec1.size() && j < vec2.size()){
        if(vec1[i] <= vec2[j]){
            vec.push_back(vec1[i]);
            i++;
        }else{
            vec.push_back(vec2[j]);
            j++;
        }
    }
    for(; i < vec1.size();i++){
        vec.push_back(vec1[i]);
    }
    for(; j < vec2.size();j++){
        vec.push_back(vec2[j]);
    }
}
void mergesort(vector<int> &vec){
    if(vec.size() == 1){
        return;
    }
    vector<int> vec1;
    vector<int> vec2;
    int n = vec.size();
    for(int i = 0; i < n/2; i++){
        vec1.push_back(vec[i]);
    }
    for(int i = n/2; i < n; i++){
        vec2.push_back(vec[i]);
    }
    mergesort(vec1);
    mergesort(vec2);
    vec.clear();
    merge_two_vec(vec1,vec2,vec);
}