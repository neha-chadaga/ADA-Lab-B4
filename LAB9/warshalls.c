#include<stdio.h>
#include<process.h>
int a[10][10], p[10][10], i,j,k,n;

void warshalls(){
 for(i=1;i<=n;i++){
  for(j=1;j<=n;j++){
    p[i][j] = a[i][j];
  }
 }
 for(k=1;k<=n;k++){
  for(i=1;i<=n;i++){
   for(j=1;j<=n;j++){
    if((p[i][j]!=1) && (p[i][k]==1 && p[k][j]==1))
     p[i][j]=1;
   }
  }
 }
}

int main(){
 printf("Enter number of vertices:\n");
 scanf("%d",&n);
 printf("Enter the Adjacency matrix:\n");
 for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
   scanf("%d",&a[i][j]);
 warshalls();
 printf("PATH MATRIX:\n");
 for(i=1;i<=n;i++){
  for(j=1;j<=n;j++)
    printf("%d", p[i][j]);
  printf("\n");
    }
}
