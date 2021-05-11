#include<stdio.h>
#include<process.h>
#include<string.h>

int bruteForceCheck(char word[],char pattern[], int n, int m){
    int i,j;
 for(i=0;i<=(n-m);i++){
        j=0;
    while(j<m && word[i+j]==pattern[j]){
        j++;
    }
 if(j==m)
    return i;
 }
 return -1;
}

int main(){
 int n,m,result;
 char word[50],pattern[50];
 printf("Enter Main String:\n");
 gets(word);
 printf("Enter Pattern of String to be detected:\n");
 gets(pattern);
 n = strlen(word);
 m = strlen(pattern);
 result= bruteForceCheck(word, pattern, n, m);
 if(result==-1)
    printf("NO MATCH FOUND.\n");
 else
    printf("MATCH FOUND STARTING AT %d POSITION OF MAIN STRING:\n", result+1);
}
