#include<stdio.h>
float cost[10][10];
int vis[10], vt[10], et[10][10];
int i,j,k,u,v,n,m,e=0;
float sum=0;

void prims(){
 int x=1,min;
 vt[x]=1;
 vis[x]=1;
 for(i=1;i<n;i++){
    j=x;
    min=999;
    while(j>0){
        k=vt[j];
        for(m=2;m<=n;m++){
          if(cost[k][m]<min && vis[m]==0){
            min=cost[k][m];
            u=k;
            v=m;
          }
        }
        j--;
    }
    vt[++x]=v;
    et[i][1]=u;
    et[i][2]=v;
    e++;
    vis[v]=1;
    sum=sum+cost[u][v];
 }
}

int main(){
printf("Enter the number of vertices\n");
scanf("%d", &n);

printf("Enter the cost of adjacency matrix\n");
for(i=1;i<=n;i++){
 for(j=1;j<=n;j++){
   scanf("%f", &cost[i][j]);
  }
 }
prims();
printf("Minimum Spanning Tree:\n");
for(i=1;i<=e;i++)
  printf("%d-->%d\t", et[i][1],et[i][2]);
printf("\nTotal Cost= %f\n", sum);
}

