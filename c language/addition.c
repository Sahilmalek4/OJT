#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,add,sub;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    add = a + b;
    sub = a - b;
    printf("The addition of a and b is:%d\n",add);
    printf("The subtraction of a and b is:%d",sub);
  
    return 0;
}