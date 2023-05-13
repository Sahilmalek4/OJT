#include<stdio.h>
int main()  //This is the program of odd and even by if and else cnditions 
{
    int number;
    printf("Enter the number :");
    scanf("%d", &number);
    if(number %2 == 0){
        printf("The number is even\n");
    }
    else{
        printf("The number is odd\n");

    }
    
    return 0;
}