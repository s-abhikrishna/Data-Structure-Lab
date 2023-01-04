#include <stdio.h>  
  void  main()  
{
    int a1[16],a2[16],a3[2],m,n,i,j,k=0;
    printf("enter the first array size\n");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("enter the second array size\n");
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        scanf("%d",&a2[j]);
    }
    i=0;
    j=0;
    while(i<m&&j<n)
    {
        if(a1[i]<a2[j])
    {
        a3[k]=a1[i];
        i++;
    }
    else
    {
        a3[k]=a2[j];
        j++;
    }
    k++;
    }
    if(i>=m)
    {
        while(j<n)
        {
            a3[k]=a2[j];
            j++;
            k++;
        }
    }
    if(j>=n)
    {
        while(i<m)
        {
            a3[k]=a1[i];
            i++;
            k++;
        }
    }
    printf("the merged array elements in \n");
    for(k=0;k<m+n;k++)
    {
        printf("%d",a3[k]);
    }

    }
output
enter the first array size 3
  1
  2
  3
  enter the second array size 3
  4
  5
  6
  after merge 1
  2
  3
  4
  5
  6
  