/*
Print first letter of every word in the string
Given a string S, the task is to create a string with the first letter of every word in the string.
INPUT:helllo shivali how are you
OUTPUT:hshay
*/

#include<iostream>
using namespace std;
class Demo{
    public:
    string firstAlphabet(string str);
};

string Demo:: firstAlphabet(string S)
	{
	    // Your code goes here
	    //S=S.c_str();
	    string str="";
	    for(int icnt=0;icnt<S.length();icnt++)
	    {
	        if(icnt==0 || S[icnt-1]==' ')
	            str+=S[icnt];
	    }
	    return str;
	}
int main()
{
    string str="";
    cout<<"Enter String\n";
    //getchar();
    getline(cin,str);
    Demo dobj;
    //cout<<str;
    cout<<dobj.firstAlphabet(str)<<endl;
    return 0;
}