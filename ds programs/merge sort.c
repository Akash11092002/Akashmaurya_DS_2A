#include <stdio.h>
#define max 5
void merge( int a[],int low, int mid, int high) {
   int i,j,k;
   i=low;
   j=mid+1;
   k=low;
int b[max];

   while(i<=mid&&j<=high)
{
      if(a[i] <= a[j])
        {b[k] = a[i];
        i=i+1;
        k=k+1;}
      else
       { b[k] = a[j];
       j=j+1;
       k=k+1;}
   }while(i <= mid)
     {b[k] = a[i];
      i++;
      k++;}
 while(j <= high)
      {b[k] = a[j];
      j++;
      k++;}

   for(i = low; i <= high; i++)
      a[i] = b[i];
}

void mergesort(int a[],int low, int high) {
   int mid;

   if(low < high) {
      mid = (low + high) / 2;
     mergesort(a,low, mid);
      mergesort(a,mid+1, high);
      merge(a,low, mid, high);
   } else {
      return;
   }
}

int main() {
   int i;
   int a[max];
   printf("enter the array");
   for(i=0;i<=max;i++)
   {
       scanf("%d",&a[i]);}
       mergesort(a,0, max);

   printf("array after sorting\n");

   for(i = 0; i <= max; i++)
      printf("%d ", a[i]);
}
