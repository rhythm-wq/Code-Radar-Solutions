#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>=65 && ch<=96)
    {
        printf("Uppercase");
    }
    else if(ch>=97 && ch<=126)
    {
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
}