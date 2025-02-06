#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=90)
    {
        printf("A");
    }
    else if(n>=80 & n<90)
    {
        printf("B");
    }
    else if (80>n>=70)
    {
        printf("C");
    }
    else if(70>n>=60)
    {
        printf("D");
    }
    else
    {
        printf("F");

    }

    

}