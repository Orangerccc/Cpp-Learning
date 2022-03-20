/*** 
 * @Author: zqc
 * @Date: 2022-03-19 10:41:46
 * @LastEditTime: 2022-03-19 21:29:42
 * @LastEditors: zqc
 * @Description: zqc's file configuration
 * @FilePath: \vscodecpp\cpp\Leetcode\queue.cpp
 * @version: 1.0
 */
#include<iostream>
#include<cstring>
#include<algorithm>
#include<queue>
using namespace std;

int main()
{
    // queue<int> q;
    // q.push(1);
    // q.push(2);
    // cout << q.front() << endl;
    int i[3][4];   
    int s = 1; 
    for(int  k = 1; k <= 3 ; k++ ) 
        for(int j = 1; j <= 4; j++) 
            {
                i[k][j] = s;
                s++;
            }
    int(*p) [4]=i;
    p=&i[2];
    cout << *p[0] << endl;
    cout << *p[1] << endl;
    cout << *p[2] << endl;
    cout << *p[3] << endl;
    return 0;
}