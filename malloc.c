#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p;
    p=(int*)malloc(18*sizeof(int));
    printf("enter the value of p\n");
    scanf("%d",&*p);
    printf("%d",*p);
    free(p);
}
