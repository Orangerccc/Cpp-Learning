#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        vector<int> month_v{31,28,31,30,31,30,31,31,30,31,30,31};
        vector<string> week_v{"Sunday", "Monday", "Tuesday", "Wednesday",\
         "Thursday", "Friday", "Saturday"};

        int res = 365 * (year-1971);
        if((year%4 == 0  && year %100 !=0) || year %400 == 0){
            month_v[1]++;
        }
        for(int i = 0 ;i < month-1; i++){
            res += month_v[i];
        }
        res += day;
        return week_v[(res+4) % 7];
    }
};
int main(){
    Solution s;
    cout << s.dayOfTheWeek(4,1,1972) <<endl;
    return 0;
}
/**
 * @File    :     1185.cpp
 * @Time    :     2022/01/21 10:38:45
 * @Author  :     zqc99
 * @Version :     1.0
 * @Contact :     zzzz_2021@163.com
 * @LastEditTime: 
 * @Desc    :     
 */