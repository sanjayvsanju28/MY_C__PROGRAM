#include <stdio.h>
 enum team{
     rcb=1,
     rr,
     csk
 };
int main() {
    enum team i;
    printf("enter the team(1-4)");
    scanf("%d",&i);
    if(i==rcb){
        printf("rcb won");
    }else if(i==rr){
        printf("rr lose");
    }else {
        printf("csk ban");
    }

    return 0;
}
