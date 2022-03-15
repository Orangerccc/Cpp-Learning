#include<iostream>
#include <string>
using namespace std;
int main ()
{
//   std::string str ("There are two needles in this haystack with needles.");
//   std::string str2 ("needle");

//   // different member versions of find in the same order as above:
//   std::string::size_type found = str.find(str2);
//   if (found!=std::string::npos)
//     std::cout << "first 'needle' found at: " << found << '\n';

//   found=str.find("needles are small",found+1);
//   if (found!=std::string::npos)
//     std::cout << "second 'needle' found at: " << found << '\n';

//   found=str.find("haystack");
//   if (found!=std::string::npos)
//     std::cout << "'haystack' also found at: " << found << '\n';

//   found=str.find('.');
//   if (found!=std::string::npos)
//     std::cout << "Period found at: " << found << '\n';

//   // let's replace the first needle:
//   str.replace(str.find(str2),str2.length(),"preposition");
//   std::cout << str << '\n';
  std::string str="to be question";
  std::string str2="the ";
  std::string str3="or not to be";
  std::string::iterator it;
    string str4(str.rbegin(),str.rend());
    cout << str4 <<endl;
  // used in the same order as described above:
  str.insert(6,str2);                 // to be (the )question
  str.insert(6,str3,3,4);             // to be (not )the question
  str.insert(10,"that is cool",8);    // to be not (that is )the question
  str.insert(10,"to be ");            // to be not (to be )that is the question
  str.insert(15,1,':');               // to be not to be(:) that is the question
  it = str.insert(str.begin()+5,','); // to be(,) not to be: that is the question
  str.insert (str.end(),3,'.');       // to be, not to be: that is the question(...)
  str.insert (it+2,str3.begin(),str3.begin()+3); // (or )

  std::cout << str << '\n';

  return 0;
}
