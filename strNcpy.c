#include<stdio.h>
//#include<>

void StrNCpy(char *src, char *dest,int icnt)
{

while((*src != '\0') && (icnt != 0) ){
*dest = *src;
src++;
dest++;
icnt--;
}
*dest='\0';
}
int main()
{
    char arr[30] ;
    char brr[30];
    
    printf("ENTER FIRST STRING\n");
    scanf("%[^\n]s",arr);
getchar();


    // Empty string
    StrNCpy(arr,brr,10);
    printf("%s\n",brr);
    
    return 0;
}