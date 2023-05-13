#include<stdio.h>
int main(){
    // char ch;
    // printf("Enter the alphabet:");
    // scanf("%c",& ch);
    // if(ch>='a'&& ch<='z'){
    //     printf("Charecter is in lower case");
    // }
    // else if(ch>='A'&& ch<='Z'){
    //     printf("Charecter is in Upper case");
    // }
    // else
    // printf(" This is not a carecter value");
int N;
printf("Enter the number:");
scanf("%d",&N);
if(N>=1){
    printf("The Number is Natural");
}
else{
    printf("The number is not a natural");
}
return 0;
}