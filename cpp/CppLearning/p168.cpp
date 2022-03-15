#include<iostream>

using namespace std;


void swapInt(int &a, int &b){
    int temp = a;
    a = b;
    b =temp;
}
//交换两个浮点型
template<typename T>
void mySwap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
template<typename T>
void printArray(T arr[], int len){
    for(int i = 0; i< len ; i++){
        cout <<arr[i] <<" ";
    }
    cout <<endl;
}
template<typename T>
void mySort(T arr[],int len){
    for(int i = 0; i < len; i++){
        int max = i;
        for(int j = i+1; j < len; j++){
            if(arr[max]<arr[j]){
                T temp = arr [max];
                // arr[max] = arr[j];
                // arr[j] = temp;
                // max = j;
                mySwap(arr[max],arr[j]);
            }
        }
    }
}
void myprint(int a,int b){
    cout << "调用普通" <<endl;
}
template <class T>
void myprint(T a,T b){
    cout << "调用模板" <<endl;
}
//函数模板重载
template <class T>
void myprint(T a,T b,T c){
    cout << "模板重载" <<endl;
}

int main(){
    int a =1 , b=2, c= 3;
    //函数重载 更好匹配 优先函数模板
    char cc = 'c', d = 'd';
    // char c ='c';
    // mySwap<int>(a,b);
    // mySwap<int>(a,b);
    // cout << a <<b <<endl;
    // char arr[] = "dsadsadasf";
    // int len = sizeof(arr)/sizeof(char);
    // mySort(arr,len);
    // printArray(arr,len);
    // int ss[] = {1,3,45,56,7,74,22,43};
    // int len1 = sizeof(ss)/sizeof(int);
    // mySort(ss,len1);
    // printArray(ss,len1);
    myprint<>( a, b);
    myprint( a, b,c);
    myprint( cc,d);
    system("pause");

    return 0;
}