#include <stdio.h>
int main() {
    int marks;
    printf("enter the marks");
    scanf("%d",&marks);
    if(marks>75)
    {
        printf("distiction");
    }                                       
    if(75<=marks>=40)
    {
        printf("pass");
    }
    else {
        printf("fail");
    }

    return 0;
}
