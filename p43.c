//1,1,2,3,5,8,13
#include <stdio.h>
int main(){
  int a=0,b=1,c,i;
  for(i=1;i<=7;i++){
    c=a+b;
    printf("%d,",c);
    a=b;
    b=c;
  }
  return 0;
  
}
