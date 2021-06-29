#include<stdio.h>
int i,j,m,n,p[10],w[10],v[10][10], x[10],op_soln;

int max(int a, int b){
 if(a>b)
  return a;
 else
  return b;
}

int knapsack(){
 int i,j;
 for(i=0;i<=n;i++){
  for(j=0;j<=m;j++){
    if(i==0||j==0)
     v[i][j]=0;
    else if(w[i]>j)
     v[i][j]=v[i-1][j];
    else
    v[i][j]=max(v[i-1][j], v[i-1][j-w[i]]+p[i]);
  }
 }
 return v[i-1][j-1];
 }

 void object_selected(){
  i=n;
  j=m;
  while(i!=0 && j!=0){
   if(v[i][j]!=v[i-1][j]){
    x[i]=1;
    j=j-w[i];
   }
   i--;
  }
  printf("Objects Selected:\n");
  for(i=1;i<=n;i++){
   if(x[i]==1)
    printf("%d",i);
  }
 }

int main(){
printf("Enter the number of objects\n");
scanf("%d", &n);

printf("Enter the weights of N objects\n");
for(i=1;i<=n;i++)
 scanf("%d", &w[i]);

printf("Enter the profits of N objects\n");
for(i=1;i<=n;i++)
 scanf("%d", &p[i]);

printf("Enter the capacity of Knapsack\n");
scanf("%d", &m);

op_soln=knapsack(n,w,m,v,p);
printf("The output is\n");
for(i=0;i<=n;i++){
 for(j=0;j<=m;j++){
   printf("%d\t", v[i][j]);
}
printf("\n");
}
printf("Optimal Solution=%d\n",op_soln);
object_selected();
}
