#include<stdio.h>

void StrRevTogX(char *str)
{
    // Filter

    char temp;
    char *first,*last;
    first = str;
    last = str;
    while(*last != '\0')
    {
    last++;
    }
    last--;
    while(first <= last)
    {
        if(*first>='a' && *first<='z')
            temp=*first-32;
        else if(*first>='A' && *first<='Z')
        {
            temp=*first+32;
        }
        else
        {
            temp=*first;
        }
        
        if(*last>='a' && *last<='z')
            *first=*last-32;
        else if(*last>='A' && *last<='Z')
        {
            *first=*last+32;
        }
        else
        {
            *first=*last;
        }
        *last=temp;
        first++;
        last--;
    // Swapping logic with case toggle
    }
}
int main()
{
    char arr[50];
    printf("ENTER  STRING\n");
    scanf("%[^\n]s",arr);
    StrRevTogX(arr);
    printf("%s",arr);
    // SUOLLEVRAm
    return 0;
}