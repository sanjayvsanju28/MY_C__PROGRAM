#include <stdio.h>
enum week{
    sunday,
    mon,
    tue,
    wed,
    thur,
    fri,
    sat
};
int main(){
    enum week t;
    t=fri;
    printf("%d",t);
}
