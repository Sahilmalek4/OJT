#include<stdio.h>
#include<conio.h>
int main()
{
  
    // int a,b,c;
    // printf("Enter the two number:");
    // scanf("%d %d",&a,&b);
    // printf("\nBefore the swapping: a=%d   b=%d\n",a,b);
    // c=a;
    // a=b;
    // b=c;
    // printf("\nAfter the  swaping : a=%d   b=%d\n",a,b);





    int a,b;
    printf("Enter  two variable:");    
    scanf("%d %d",&a,&b);
    printf("\nBefore the swapping: a=%d  b=%d\n",a,b);
    
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After the swapping : a=%d   b=%d",a,b);

   return 0;
}