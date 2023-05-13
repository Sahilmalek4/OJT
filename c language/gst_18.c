#include<stdio.h>//Give the  enterd price  with GST
 float main(){
 float price[3];
 for(int i=0;i<=2;i++){
 printf("Enter the price of %d:",i);
 scanf("%f",&price[i]);
 }

 printf("Total price1 with GST is : %f\n",(0.18*price[0])+price[0]);
printf("Total price2 with GST is : %f\n",(0.18*price[1])+price[1]);
printf("Total price3 with GST is : %f\n",(0.18*price[2])+price[2]);
return 0;
}
