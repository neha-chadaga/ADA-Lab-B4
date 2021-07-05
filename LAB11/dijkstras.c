#include<stdio.h>

int src, dest[10], cost[10][10], n, vis[10];

void dijkstras(){
int i, count, min, u;
for(i=1;i<=n;i++)
  dest[i]=cost[src][i];
vis[src]=1;
count=1;
while(count<n)
{
min=999;
for(i=1;i<=n;i++)
  {
    if(dest[i]<min && vis[i]==0){
     min=dest[i];
     u=i;
    }
  }
vis[u]=1;
for(i=1;i<=n;i++)
  {
    if((dest[u]+cost[u][i])<dest[i] && vis[i]==0)
      dest[i]=dest[u]+cost[u][i];
  }
count++;
}
}

int main()
{
int i,j;
printf("Enter number of vertices:\n");
scanf("%d", &n);
printf("Enter cost adjacency matrix:\n");
for(i=1;i<=n;i++){
 for(j=1; j<=n; j++){
   scanf("%d",&cost[i][j]);
 }
}
printf("Enter source vertex:\n");
scanf("%d", &src);
dijkstras();
printf("Shortest path from:\n");
for(i=1; i<=n; i++)
printf("%d-->%d=%d\n",src,i,dest[i]);
}
