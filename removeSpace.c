#include<stdio.h>
//#include<>

void removeSpace(char *src, char *dest)
{

while(*src != '\0')
{
    if(*src==' ')
        src++;
*dest = *src;
src++;
dest++;
}
*dest='\0';
}
int main()
{
    char arr[30] ;
    char brr[30];

    printf("ENTER FIRST STRING\n");
    scanf("%[^\n]s",arr);

    // Empty string
    removeSpace(arr,brr);
    printf("%s\n",brr);
    
    return 0;
}