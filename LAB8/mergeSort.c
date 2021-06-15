#include<stdio.h>
#include<process.h>
#include<time.h>
#include<stdlib.h>
double time_spent = 0.0;

void merge(int a[],int low, int mid, int high){
    int i,j,k,c[10000];
    i=low;
    k=low;
    j=mid+1;
 while(i<=mid && j<=high){
   if(a[i]<a[j])
    c[k++]=a[i++];
   else
    c[k++]=a[j++];
 }
 while(i<=mid)
    c[k++]=a[i++];
 while(j<=high)
    c[k++]=a[j++];
 for(i=low;i<=high;i++)
    a[i]=c[i];
}

void mergeSort(int a[], int low, int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        mergeSort(a,low,mid);
        mergeSort(a, mid+1, high);
        merge(a,low,mid,high);
    }
}

int main(){

int a[10000],n,ch,x;
double difference;
 printf("Enter array size:\n");
 scanf("%d",&n);
 clock_t begin = clock();
printf("Elements BEFORE sorting:\n");
for(x=0;x<n;x++){
    a[x]= rand();
    printf("%d\t",a[x]);
}
printf("\nElements AFTER sorting:\n");
mergeSort(a, 0, n-1);
clock_t end = clock();
for(x=0;x<n;x++){
    printf("%d\t",a[x]);
}
printf("\n");
difference= end-begin;
time_spent += (double)(difference)/CLOCKS_PER_SEC;
printf("THE ELAPSED TIME IS %f SECONDS\n", time_spent);
/*for(;;){
printf("1.Sort Array\n2.Exit\n");
printf("Enter your choice:\n");
scanf("%d",&ch);
if(ch==1){
 printf("Enter array size:\n");
 scanf("%d",&n);
 printf("Enter array elements:\n");
 for(x=0;x<n;x++)
   scanf("%d",&a[x]);
 mergeSort(a, 0, n-1);
 printf("*********************************\n");
 printf("Array elements after sorting:\n");
 for(x=0;x<n;x++)
  printf("%d\t",a[x]);
printf("\n");
clock_t end = clock();
difference= end-begin;
time_spent += (double)(difference)/CLOCKS_PER_SEC;
printf("THE ELAPSED TIME IS %f SECONDS\n", time_spent);
}
else
 exit(0);
}*/
}
