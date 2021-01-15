/*

sumber of all numbers present in string
INPUT:1abc23
OUTPUT:24
*/
#include<iostream>
using namespace std;
class Demo{
    public:
   int findSum(string str);
};
int Demo:: findSum(string str)
{
	string temp="";
	int isum=0;
	for(char ch:str)
	{
	    if(isdigit(ch))
	        temp+=ch;
	    else
	   {
	       isum+=atoi(temp.c_str());
	       temp="";
	   }    
	  
	}
	// Your code here
	 return isum+atoi(temp.c_str());
}

int main()
{
    string str="";
    cout<<"Enter String\n";
    //getchar();
    cin>>str;
    Demo dobj;
    cout<<dobj.findSum(str)<<endl;
    return 0;
}