/*
LeetCode :917. Reverse Only Letters
Given a string S, return the "reversed" string where all characters that are not a letter stay in the same place, and all letters reverse their positions.

 

Example 1:
Input: "ab-cd"
Output: "dc-ba"

Example 2:
Input: "a-bC-dEf-ghIj"
Output: "j-Ih-gfE-dCba"

Example 3:
Input: "Test1ng-Leet=code-Q!"
Output: "Qedo1ct-eeLg=ntse-T!"

Note:
S.length <= 100
33 <= S[i].ASCIIcode <= 122 
S doesn't contain \ or "
*/
#include<string.h>

char * reverseOnlyLetters(char * S){
int start=0,end=NULL;
    end=strlen(S)-1;
char temp;
    while(start<end)
    {
         if(!isalpha(S[start]))
                start++;
           else if(!isalpha(S[end]))
                end--;
        else
        {
            temp=S[start];
            S[start]=S[end];
            S[end]=temp;
            start++;
            end--;
            
        }       
    }
    return S;
}
