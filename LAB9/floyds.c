#include<stdio.h>
#include<process.h>
#include<stdlib.h>
int a[10][10], d[10][10], i,j,k,n;
int min(int a, int b){
 if(a<b)
    return a;
 else
    return b;
}
void floyds(){
 for(i=1;i<=n;i++){
  for(j=1;j<=n;j++){
    d[i][j] = a[i][j];
  }
 }
 for(k=1;k<=n;k++){
  for(i=1;i<=n;i++){
   for(j=1;j<=n;j++){
    d[i][j]=min(d[i][j], d[i][k]+d[k][j]);
   }
  }
 }
}

int main(){
 printf("Enter number of vertices:\n");
 scanf("%d",&n);
 printf("Enter the Cost Adjacency matrix:\n");
 for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
   scanf("%d",&a[i][j]);
 floyds();
 printf("DISTANCE MATRIX:\n");
 for(i=1;i<=n;i++){
  for(j=1;j<=n;j++)
    printf("%d", d[i][j]);
  printf("\n");
    }
}
