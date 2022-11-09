#include<stdio.h>
void main()
{
int a[10],i,l;
printf("enter the limit");
scanf("%d",&l);
printf("enter the numbers");
for(i=1;i<=l;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=l;i++)
{
printf("\n");
printf("%d",a[i]);
}
}

