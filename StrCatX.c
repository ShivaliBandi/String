#include<stdio.h>
void StrCatX(char *src, char * dest)
{
// Filter
while(*src !='\0')
// Traverse first string till end
{
src++;
}
*src=' ';
src++;
while(* dest != '\0')
// Copy contents of destination in source
{
*src=*dest;
src++;
dest++;
}
*src = '\0';
}
int main()
{
    char arr[50] ;
    char brr[30] ;

    printf("ENTER FIRST STRING\n");
    scanf("%[^\n]s",arr);
    getchar();
    printf("ENTER Second STRING\n");
    scanf("%[^\n]s",brr);
    StrCatX(arr,brr);
    printf("%s\n",arr);
    return 0;
}