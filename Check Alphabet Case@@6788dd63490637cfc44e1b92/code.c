#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if( 65<ch<97)
    {
        printf("Uppercase");
    }
    else
    {
        printf("Lowercase");
    }
}