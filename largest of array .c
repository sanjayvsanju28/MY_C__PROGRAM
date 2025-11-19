#include<stdio.h>
int main(){
int ar[5]={1,2,3,5,8};
int max =ar[0];
for(int i=0;i<5;i++){
    if(ar[i>max]){
        max=ar[i];
    }
}
printf("%d\n",max);
}
