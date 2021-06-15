#include<stdio.h>
#include<process.h>
#include<time.h>
#include<stdlib.h>
double time_spent = 0.0;

int partition(int a[],int low, int high){
    int i,j,temp,pivot;
    pivot=a[low];
    i=low+1;
    j=high;
 while(i<=j){
   while(a[i]<=pivot)
    i++;
   while(a[j]>pivot)
    j--;
   if(i<j){
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
   }
 }
  temp=a[low];
  a[low]=a[j];
  a[j]=temp;
  return j;
}

void quickSort(int a[], int low, int high){
    int mid;
    if(low<high){
        mid=partition(a, low, high);
        quickSort(a,low,mid-1);
        quickSort(a, mid+1, high);
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
quickSort(a, 0, n-1);
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
 quickSort(a, 0, n-1);
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
