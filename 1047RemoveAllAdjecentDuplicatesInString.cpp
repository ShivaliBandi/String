/*
LEETCODE:1047. Remove All Adjacent Duplicates In String
Given a string S of lowercase letters, a duplicate removal consists of choosing two adjacent and equal letters, and removing them.

We repeatedly make duplicate removals on S until we no longer can.

Return the final string after all such duplicate removals have been made.  It is guaranteed the answer is unique.

 

Example 1:

Input: "abbaca"
Output: "ca"
Explanation: 
For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".
 

Note:

1 <= S.length <= 20000
S consists only of English lowercase letters.



*/
#include <string>
#include <cstring>

class Solution {
public:
    string removeDuplicates(string S) {
        auto j=0;
        string str;
        bool flag;
        
        flag=false;
       label: for(auto i=0;i<S.length();)
        {
            if(S[i]!=S[i+1])
            {
                str+=S[i];
                i++;
                
            }
            else
            {
                i=i+2;
                flag=true;
            }
                
        }
        if(flag==true)
        {
            
            S=str;
            str.clear();
            flag=false;
            goto label;
            
        }
        else
            
        return str;
    }
};
