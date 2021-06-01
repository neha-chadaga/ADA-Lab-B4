#include<stdio.h>
#include<process.h>
#include<time.h>
double time_spent = 0.0;

void insertionSort(int a[],int n){
    int i,y,j;
for(i=1;i<n;i++){
 y=a[i];
 j=i-1;
 while(j>=0 && a[j]>y){
   a[j+1]=a[j];
   j=j-1;
 }
 a[j+1]=y;
}
}

int main(){
clock_t begin = clock();
int a[10000],n,ch,k;
double difference;
for(;;){
printf("1.Sort Array\n2.Exit\n");
printf("Enter your choice:\n");
scanf("%d",&ch);
if(ch==1){
 printf("Enter array size:\n");
 scanf("%d",&n);
 printf("Enter array elements:\n");
 for(k=0;k<n;k++)
   scanf("%d",&a[k]);
 insertionSort(a,n);
 printf("*********************************\n");
 printf("Array elements after sorting:\n");
 for(k=0;k<n;k++)
  printf("%d\t",a[k]);
printf("\n");
clock_t end = clock();
difference= end-begin;
time_spent += (double)(difference)/CLOCKS_PER_SEC;
printf("THE ELAPSED TIME IS %f SECONDS\n", time_spent);
}
else
 exit(0);
}
}
