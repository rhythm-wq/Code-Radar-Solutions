#include<stdio.h>
int main()
{
    int a;
    scanf("%d",a);
    if(a>0)
    {
        printf("Positive");
    }
    elseif(a==0)
    {
        printf("Zero");
    }
    else{
        printf("Negative");
    }
}