/*** 
 * @Author: zqc
 * @Date: 2022-03-19 22:08:39
 * @LastEditTime: 2022-03-19 22:11:25
 * @LastEditors: zqc
 * @Description: zqc's file configuration
 * @FilePath: \cpp\Cppthatthings\static.cpp
 * @version: 1.0
 */
#include<iostream> 
using namespace std; 

class Apple 
{ 
public: 
	static int i; 
	
	Apple() 
	{ 
		// Do nothing 
	}; 
}; 

int main() 
{ 
Apple obj1; 
Apple obj2; 
obj1.i =2; 
obj2.i = 3; 
	
// prints value of i 
cout << obj1.i<<" "<<obj2.i; 
} 