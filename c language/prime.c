#include<stdio.h>
#include<conio.h>
int main(){
  int n,i,flag;
   flag=0;
  printf("Enter the number:");
  scanf("%d",&n);
  for( i=2;i<=n/2;i++)


    if(n % i == 0){
    printf("Number is not prime!!");
    flag=1;
    break;
    }

  if(flag==0){
    printf("Number is prime..");
  }
  
  return 0;
}