#include<stdio.h>
//#include<>

void StrCpyCap(char *src, char *dest)
{

while(*src != '\0')
{
if((*src >= 'a') && (*src<='z'))
{
*dest= *src;
dest++;
}
 src++;
}
*dest='\0';
}
int main()
{
    char arr[30] = "Shivali Raju Bandi";
    char brr[30];
    

    // Empty string
    StrCpyCap(arr,brr);
    printf("%s\n",brr);
    
    return 0;
}