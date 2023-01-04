#include<stdio.h>
int sum(int a, int b)
{
    return a+b;
}
int main()
{
    int x,y;
    printf("enter any two number:");
    scanf("%d%d",&x,&y);
    printf("%d",sum(x,y));
    return 0;
}
output
enter any two number:2 8
10