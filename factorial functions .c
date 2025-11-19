#include<stdio.h>
int fact(int n){
    if(n=0)
    return 1;
     int fact =1;
    for(int i =1;i<=n;i++){
         int fact  = fact*1;
    }
    return fact;
}
int main(){
   int result= fact(7);
   printf("%d",result);
}
