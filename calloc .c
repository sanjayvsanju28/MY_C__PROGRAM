#include <stdio.h>
#include <stdlib.h>
int main() {
    int *p;
     p=(int*)calloc(5,sizeof(int));
    printf("enter the value");
    scanf("%d",&*p);
    printf(" %d",p);
    free(p);
    printf("  after free %d",p);}
