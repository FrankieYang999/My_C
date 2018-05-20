#include <stdio.h>
#include <string.h>

char* reverseStr(char* str);

int main()
{
    char str[1000];
    printf("Please enter a string: ");
    scanf("%s", str);
    printf("The original string is :%s\n",str);
    printf("The reversed string is :%s",reverseStr(str));
    return 0;
}

char* reverseStr(char* str)
{
    int i=0;
    int j=strlen(str)-1;
    char temp;
    while (i<j)
    {
        temp=*(str+i);
        *(str+i)=*(str+j);
        *(str+j)=temp;
        i++;
        j--;
    }
    return str;
}
