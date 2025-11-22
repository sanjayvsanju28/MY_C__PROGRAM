#include <stdio.h>
enum cricket{
    runs=1,
    wicket=5,
    boundrues=10
};
int main(){
    enum cricket c=runs;
    printf("%d",c);
}
