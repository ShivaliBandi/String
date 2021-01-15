#include<stdio.h>

void StrCpyRev(char *src, char *dest)
{   int icnt=0;
    while(*src!='\0')
    {
        src++;
        icnt++;
    }
    src--;
    while(icnt!=0)
    {
        *dest=*src;
        src--;
        dest++;
        icnt--;
    }
    *dest='\0';
}
int main()
{
char arr[30] = "Shivali Raju Bandi";
char brr[30];
// Empty string
StrCpyRev(arr,brr);
printf("%s\n",brr);

return 0;
}