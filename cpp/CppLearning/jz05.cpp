#include<iostream>
#include<string>
using namespace std;

int main(){

string s = "We are happy.";
string res;
string a = "%20";

for(string::iterator it =s.begin(); it != s.end(); it++)
{
	if (*it == ' ')  {
        it--;    
        s.erase(it+1);
        s.insert(it,a.begin(),a.end());
    }else{
        res += *it;
        }
}
cout << res <<endl;  
}