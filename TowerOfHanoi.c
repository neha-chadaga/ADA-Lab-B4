#include<stdio.h>
#include<process.h>

void tower(int n, int source, int temp, int dest){
if(n==1)
{
 printf("Move disk %d from %c to %c\n",n,source,dest);
 return;
}
tower(n-1,source, dest, temp);
printf("Move disk %d from %c to %c\n",n,source,dest);
tower(n-1, temp, source, dest);
}

int main(){
int n;
printf("Enter the number of disks:\n");
scanf("%d",&n);
tower(n,'S','T','D');
}
