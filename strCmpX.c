#include<stdio.h>
#define BOOL int
#define TRUE 1
#define FALSE 0
#include<string.h>
BOOL StrNCmpX(char *src, char * dest)
{
    int flag=0;
    if((strlen(src)>strlen(dest))||(strlen(src)<strlen(dest)) )
        flag=-1;
    else
    {
        
        while((*src !='\0'))
        {
            
            if(*src==*dest)
                flag++;
            else
            {
                flag=-1;
                break;
            }
            src++;
            dest++;
        
        }
    }
    
   
    if(flag!=-1)
        return TRUE;
    else 
        return FALSE;
}
int main()
{
    BOOL bret = TRUE;
    char arr[50] ;
    char brr[30] ;

    printf("ENTER FIRST STRING\n");
    scanf("%[^\n]s",arr);
    getchar();
    printf("ENTER Second STRING\n");
    scanf("%[^\n]s",brr);
    //getchar();
    bret = StrNCmpX(arr,brr);
        
    if(bret == TRUE)
    {
        printf("Both strings are equal\n");
    }
    else
    {
        printf("Both strings are not equal\n");
    }
    return 0;
}