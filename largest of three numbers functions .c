// largest of three numbers
#include<stdio.h>
    int largest ( int a, int b,int c) {
        if (a>=b && a>=c){
        printf("%d",a);
        }
        else if(b>=a && b>=c) {
            printf("%d",b);
        }else {
            printf("%d",c);
        }
    }
int main() {
    largest (3,6,4);
}
