#include<stdio.h>
int main()
//even-->1
//odd-->0
{
    int X;

    printf("Enter the number :");
    scanf("%d",&X);
    printf("%d", X % 2 == 0);
    return 0;
    }