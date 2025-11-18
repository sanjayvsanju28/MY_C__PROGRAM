#include<stdio.h>
int userdetails(){
    int age;
    char name,department;
    printf("enter the name\n ");
    scanf("%s",&name);
    printf("enter the age\n");
    scanf("%d",&age);
    printf("enter the department\n");
    scanf("%s",&department);
}
int main()
{
    userdetails();
    
}
