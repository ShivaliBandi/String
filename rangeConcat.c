#include<stdio.h>
void StrCatX(char *src, char * dest,int icnt)
{
    // Filter
    while(*src !='\0')
    // Traverse first string till end
    {
        src++;
    }
    *src=' ';
    src++;
    while(* dest != '\0' && icnt!=0)
    // Copy contents of destination in source
    {
        *src=*dest;
        src++;
        dest++;
        icnt--;
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

    StrCatX(arr,brr,10);
    printf("%s\n",arr);
    return 0;
}