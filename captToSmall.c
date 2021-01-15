#include<stdio.h>
//#include<>

void StrCpyCap(char *src, char *dest)
{

    while(*src != '\0')
    {
        if((*src >= 'A') && (*src<='Z'))
        {
            *dest= *src+32;
            dest++;
        }
        else if ((*src >= 'a') && (*src<='z'))
        {
            *dest= *src-32;
            dest++;
        }
        else
        {
            *dest=*src;
            dest++;
        }
        
        src++;
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
    StrCpyCap(arr,brr);
    printf("%s\n",brr);
    
    return 0;
}