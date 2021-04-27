#include<stdio.h>
#include<process.h>

void selectionSort(int a[],int n){
int i,j,temp;
for(i=0;i<(n-1);i++){
  for(j=i+1;j<n;j++){
   if(a[j]<a[i]){
    temp=a[j];
    a[j]=a[i];
    a[i]=temp;
   }
  }
 }
}

int main(){
int a[50],n,ch,k;
for(;;){
printf("1.Sort array\n2.Exit\n");
printf("Enter your choice:\n");
scanf("%d",&ch);
if(ch==1){
 printf("Enter array size:\n");
 scanf("%d",&n);
 printf("Enter array elements:\n");
 for(k=0;k<n;k++)
   scanf("%d",&a[k]);
 selectionSort(a,n);
 printf("*********************************\n");
 printf("Array elements after sorting:\n");
 for(k=0;k<n;k++)
  printf("%d\t",a[k]);
printf("\n");
}
else
 exit(0);
}
}
