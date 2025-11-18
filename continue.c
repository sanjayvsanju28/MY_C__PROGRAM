#include <stdio.h>
int main(){
  int i=0;
  do {
      printf("%d\n",i);
      i++;
      i=10;
     continue;
  }while(i<=15);
}
