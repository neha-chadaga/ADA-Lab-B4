#include<stdio.h>
#include<process.h>
#include<time.h>
double time_spent = 0.0;

void heap_cons(int a[], int n){
 int i,j,k,item;
 for(k=1;k<n;k++){
  item=a[k];
  i=k;
  j=(i-1)/2;
  while(i>0 && item>a[j]){
  a[i]=a[j];
  i=j;
  j=(i-1)/2;
  }
  a[i]=item;
 }
}

void heap_adj(int a[], int n){
 int i,j,item;
 j=0;
 item=a[j];
 i=2*j+1;
 while(i<=n-1){
  if(i+1<=n-1){
    if(a[i]<a[i+1])
      i++;
  }
  if(item<a[i]){
  a[j]=a[i];
  j=i;
  i=2*j+1;
  }
  else
   break;
 }
 a[j]=item;
}

void heap_sort(int a[], int n){
 int i=n-1,temp;
 int j;
 heap_cons(a, n);
 for(i=n-1;i>0;i--){
  temp=a[0];
  a[0]=a[i];
  a[i]=temp;
  heap_adj(a, i);
 }
}

int main(){
int n,a[10],i;
double difference;

printf("Enter number of elements:\n");
scanf("%d",&n);
clock_t begin = clock();
printf("Enter array elements:\n");
for(i=0;i<n;i++)
 scanf("%d",&a[i]);
heap_sort(a,n);
clock_t end = clock();
printf("**********************************************\n");
printf("Sorted Array:\n");
for(i=0;i<n;i++)
 printf("%d\t",a[i]);

difference= end-begin;
time_spent += (double)(difference)/CLOCKS_PER_SEC;
printf("\nTHE ELAPSED TIME IS %f SECONDS\n", time_spent);
}
