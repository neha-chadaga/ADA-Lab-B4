#include<stdio.h>
#include<process.h>

int recursiveLinSearch(int a[],int beg,int last,int se)
{
 if(beg==last)
   return -1;
 if(a[beg]==se)
   return beg+1;
 return recursiveLinSearch(a,beg+1,last,se);
}
int recursiveBinSearch(int a[],int beg,int last,int se)
{
 int mid;
 if(last>=beg){
   mid=(beg+last)/2;
   if(a[mid]==se)
     return mid+1;
   if(a[mid]>se)
     return recursiveBinSearch(a,beg,mid-1,se);
   else
     return recursiveBinSearch(a,mid+1,last,se);
 }
 return -1;
}
int main()
{
 int k,l,se,ch,linValue,binValue;
 int a[50];
 for(;;){
 printf("1.Linear Search\n2.Binary Search\n3.Exit\n");
 printf("Enter your choice:\n");
 scanf("%d",&ch);
 if(ch!=1 && ch!=2)
    exit(0);
 if(ch==2)
    printf("Enter the array elements in ascending order\n");
 printf("Enter array size:\n");
 scanf("%d",&l);
 printf("Enter array elements:\n");
 for(k=0;k<l;k++)
   scanf("%d",&a[k]);
 printf("Enter Search element:\n");
 scanf("%d",&se);

 switch(ch){
 case 1: linValue=recursiveLinSearch(a,0,l,se);
         if(linValue==-1)
            printf("Search element not found\n");
         else
            printf("Search element found at Position %d\n",linValue);
         break;
 case 2: binValue=recursiveBinSearch(a,0,l-1,se);
         if(binValue==-1)
            printf("Search element not found\n");
         else
            printf("Search element found at Position %d\n",binValue);
         break;
 }
}
}
