#include <stdio.h>

int main() {
    int a,b,sum,diff,pro,quoi;
    printf("enter the values for a and b");
    scanf("%d%d\n",&a,&b);
    sum=a+b;
    diff=b-a;
    pro=a*b;
    quoi=b/a;
    printf("%d\n %d\n %d\n %d\n%",sum,diff,pro,quoi);

    return 0;
}
