#include<stdio.h>
#include<conio.h>
int fact();
int main()
{
    int n,f;
    printf("Enter the number :");
    scanf("%d",&n);
    int fact( int n);
    f=fact(n);
    printf("The factirial of %d is %d",n,f);
    return 0;
}

int fact(int number)

{
    if(number==0 || number==1)
    return 1;
    else
    return number*fact(number-1);


}