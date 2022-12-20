
#include<stdio.h>
void main()
{
    int a[10],b[10],i,j,n,k;
    printf("enter the no of elements of the array");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
   int it=0;
    printf("the non repeated element is ");
    for(i=0;i<n;i++)
    { k=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {

                 b[it]=a[i];
                it++;
                k=0;

            }

        }
        if(k!=0)
        {
            printf("%d",a[i]);
        }

    }
    printf("the  repeated element are");
    for(i=0;i<it;i++)
    {
        printf("%d",b[i]);
    }
    }

