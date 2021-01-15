//User function Template for C++
//string reverse using reverse method
#include <algorithm>

#include<iostream>
#include<string>
using namespace std;
class Demo{
    public:
    string reverseWord(string str);
};
string Demo::reverseWord(string str){
    reverse(str.begin(), str.end());
    return str;
   // return reverse;
  //Your code here
}
int main()
{
    string str="";
    cout<<"Enter String\n";
    //getchar();
    cin>>str;
    Demo dobj;
    cout<<dobj.reverseWord(str)<<endl;
    return 0;
}