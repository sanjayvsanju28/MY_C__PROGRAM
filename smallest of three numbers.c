#include <stdio.h>
int main() {
    int a,b,c;
    printf("enter the values uf three numbers");
    scanf("%d %d %d\n",&a,&b,&c);
    if(a<=b && a<=c){
        printf("%d is smallest",a);
    }else if(b<=a && b<=c) {
        printf("%d is smallest",b);
    }else{
        printf("%d is smallest",c);
    }
} 
