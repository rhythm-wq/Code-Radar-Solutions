#include<stdio.h>
int main()
{
    int cp,sp;
    scanf("%d%d",&cp,&sp);
    if(sp>cp)
    {
        printf("Profit");
    }
    else if(sp=cp)
    {
        printf("no profit/no loss");
    }
    else
    {
       printf("Loss");
    }
}