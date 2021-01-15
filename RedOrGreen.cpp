/*
Given a string of length N, made up of only uppercase characters 'R' and 'G',
where 'R' stands for Red and 'G' stands for Green.Find out the minimum number of characters 
you need to change to make the whole string of the same colour.
INPUT:GRRGRRR
OUTPUT:2
*/
#include<iostream>
using namespace std;
class Demo{
    public:
   int RedOrGreen(string S);
};
int Demo:: RedOrGreen(string S) {
           //code here
           int red=0,green=0;
           for(int icnt=0;icnt<S.length();icnt++)
           {
                if(S[icnt]=='R')
                    red++;
                else
                    green++;
                
           }
            if(red>green)
                return green;
            else
                return red;
           
    }

int main()
{
    string str="";
    cout<<"Enter String\n";
    //getchar();
    cin>>str;
    Demo dobj;
    cout<<dobj.RedOrGreen(str)<<endl;
    return 0;
}