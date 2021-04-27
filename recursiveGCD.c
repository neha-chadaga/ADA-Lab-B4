#include<stdio.h>
#include<process.h>

int recursiveGCD(int m,int n)
{
 if(n==0)
  return m;
 return recursiveGCD(n,m%n);
}

int main()
{
int ch,a,b,gcd;
for(;;){
printf("1.Recursive GCD\n2.Exit\n");
printf("Enter Choice:\n");
scanf("%d",&ch);
if(ch!=1)
 exit(0);
printf("Enter the two numbers:\n");
scanf("%d%d",&a,&b);
switch(ch){
case 1: gcd=recursiveGCD(a,b);
        printf("GCD=%d\n",gcd);
        break;
}
}
}
