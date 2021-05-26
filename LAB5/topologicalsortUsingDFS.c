#include<stdio.h>
#include<process.h>

int a[10][10], visited[10], explore[10];
int n,m,j=0;

void dfs(int nt){
int i;
visited[nt]=1;
for(i=1;i<=n;i++){
  if(a[nt][i]==1 && visited[i]==0)
   dfs(i);
 }
  explore[j++]=nt;
}

int main(){
int i,k,u,v,source;
printf("Enter number of Vertices:\n");
scanf("%d",&n);
for(i=1;i<=n;i++){
 for(k=1;k<=n;k++)
   a[i][k]=0;
}
printf("Enter the number of Edges:\n");
scanf("%d",&m);
for(i=1;i<=m;i++){
 printf("Enter an edge:\n");
 scanf("%d%d",&u,&v);
 a[u][v]=1;
}
for(i=1;i<=n;i++)
 visited[i]=0;
for(i=1;i<=n;i++){
 if(visited[i]==0)
  dfs(i);
}
printf("TOPOLOGICAL ORDER USING DFS METHOD:\n");
for(i=n-1;i>=0;i--)
 printf("\t%d",explore[i]);
}
