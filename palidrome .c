#include <stdio.h>
#include <string.h>
int main() {
    int num=252,org,rem,rev=0;
    num=org;
    while(num=!0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(org=rev){
        printf("palidrome");
    }else{
        printf("not palidrome");
    }
}
