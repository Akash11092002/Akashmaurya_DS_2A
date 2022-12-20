


#include<stdio.h>

void main()
{int a[30],b[30],c[60],i,n,m,j,k;
    printf("enter the number of elements of a");
    scanf("%d",&n);
    printf("enter the set A elements");
for (i=0;i<n;i++)
    {scanf("%d",&a[i]);}
    printf("enter the  no elements of set b");
    scanf("%d",&m);
printf("enter the set B elements ");
for(i=0;i<m;i++)
{scanf("%d",&b[i]);}
for (i=0;i<n;i++)
{c[i]=a[i];}
for (i=0;i<m;i++)
{c[n+i]=b[i];}
printf("the merging  of two sets is \n");
for (i=0;i<m+n;i++)

    {printf("%d\t",c[i]);
                          }}
