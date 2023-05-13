#include<stdio.h> //program by pointers
void dowork(int a,int b,int *sum,int*prod,int*avg);
 
int main()
{
    int a,b,sum,prod,avg;
printf("Enter the a:");
scanf("%d",&a);
printf("Enter b:");
scanf("%d",&b);
dowork(a,b,&sum,&prod,&avg);
printf("sum is:%d\nproduct is:%d\navg is:%d",sum,prod,avg);


return 0;
}
void dowork(int a, int b,int*sum,int *prod,int*avg){
    *sum=a+b;
    *prod=a*b;
    *avg=(a+b)/2;
}