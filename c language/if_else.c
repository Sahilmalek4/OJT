#include<stdio.h>

int main()
{
    int age;
    
    printf("Enter the age:");
    scanf("%d", &age);
 
    if(age >= 18 && age<=50){
    printf(" adult\n");
    }
    else if(age >12 && age<18) {
        printf("teenager\n");
    }
    else if(age>=50){
printf("senior citysen");}
return 0;
}