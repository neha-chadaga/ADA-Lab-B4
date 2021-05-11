#include<stdio.h>
#include<process.h>

int a[10][10], visited[10];
int n;

void dfs(int nt){
int i;
visited[nt]=1;
printf("%d\t",nt);
for(i=1;i<=n;i++){
  if(a[nt][i]==1 && visited[i]==0)
   dfs(i);
 }
}

int main(){
int i,j,source;
printf("Enter number of Vertices:\n");
scanf("%d",&n);
printf("Enter the Adjacency Matrix:\n");
for(i=1;i<=n;i++){
 for(j=1;j<=n;j++)
  scanf("%d",&a[i][j]);
}
for(i=1;i<n;i++)
 visited[i]=0;
printf("Enter Source Vertex:\n");
scanf("%d",&source);
printf("Nodes reachable from vertex %d are: ",source);
dfs(source);
}
