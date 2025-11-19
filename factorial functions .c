#include<stdio.h>
int fact(){
    int n=8,i;
    int fact=1;
    for(int i =1;i<=n;i++){
         fact  = fact*i;
    }
    printf("%d",fact);
}
int main(){
  fact();
}
