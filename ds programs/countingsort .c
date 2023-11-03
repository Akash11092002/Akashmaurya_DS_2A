#include<stdio.h>
void countingsort(int arr[],int n){

int k=arr[0];
for(int i=0;i<n;i++){
    if(arr[i]>k){
        k=arr[i];
    }
}
int count[k+1];
for (int i=0;i<=k;i++){
    count[i]=0;

}

for (int i=0;i<n;i++){
    count[arr[i]]++;

}
printf("count array : \n");
for(int i=0;i<=k;i++){
    printf("%d",count[i]);
}
printf("\n");
int j=0;
for (int i=0;i<n;i++){
    while(count[i]>0){
        arr[j]=i;
        j++;
        count[i]--;

    }
}

printf("sorted array: \n");
for(int b=0;b<n;b++){
    printf("%d",arr[b]);
}




}


void main(){
int arr[50],n;
printf("enter the no of terms in the array");
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);

}

countingsort(arr,n);


}
