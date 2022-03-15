#include<iostream>
#include<string>
#include<regex>
#include<vector>
using namespace std;
std::string& trim(std::string &s)   
{  
    if (s.empty())   
    {  
        return s;  
    }  
  
    s.erase(0,s.find_first_not_of(" "));  
    s.erase(s.find_last_not_of(" ") + 1);  
    return s;  
}
int main(){
    string text = "    o6 x     ";
    size_t n = text.find_last_not_of(" ");
    cout << n <<endl;
    text.erase(0);
    cout << text.size() << endl;
    // trim(text);
    // regex ws_re("\\s+"); // whitespace
    // vector<string> v(sregex_token_iterator(text.begin(), text.end(), ws_re, -1), 
    //     sregex_token_iterator());
    // for(auto& s: v)
    //     cout<<s<<"\n";
    // cout<< trim(text) <<endl;
    return 0;
}