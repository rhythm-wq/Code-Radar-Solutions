#includ<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(c=='R')
    {
        printf("Stop");
    }
    else if(c=='Y')
    {
        printf("Wait");
    }
    else{
        printf("Go");
    }
}