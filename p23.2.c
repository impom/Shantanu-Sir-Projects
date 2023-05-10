#include <stdio.h>

int main()
{
  int a,b,c;
printf("Enter the value of the sights : ");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
  if(a+b>c || b+c>a || c+a>b){
    printf("\nThe triangle is possible.");
  }
  else
    printf("The triangle is not possible");
  getch();
}
