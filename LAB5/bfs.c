#include<stdio.h>
#include<process.h>
int a[10][10],visited[10],n;

void bfs(int nt){
int q[10],f=0,r=0,i,u;
visited[nt]=1;
q[r]=nt;
while(f<=r){
 u=q[f];
 printf("\t%d",u);
 for(i=1;i<=n;i++){
  if(a[u][i]==1 && visited[i]==0){
    visited[i]=1;
    r=r+1;
    q[r]=i;
  }
 }
 f=f+1;
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
printf("Nodes Reachable from %d: ",source);
bfs(source);
printf("\n");

}
