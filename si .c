#include<stdio.h>
int sicalculater(){
    int p,r,t,si;
    printf("enter the principle amount\n");
    scanf("%d",&p);
    printf("enter  no.s of years\n");
    scanf("%d",&t);
    printf("enter the rate of interest\n");
    scanf("%d",&r);
    si=(p*t*r)/100;
    printf("%d",si);
}
int main()
{
    sicalculater();
}
