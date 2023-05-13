#include<stdio.h>
int main(){
    int marks;
    printf("Enter the marks:");
    scanf("%d",&marks);


    if(marks <= 30 && marks>=0){
        printf("You are Fail!!\n Batter luck next time\n");
    } else if(marks >=30 && marks<= 100){ printf(" Congretulations!!\nYou are passd.\n");

    } else {printf("Please enter valid marks\n");

    }
    return 0;
// marks <= 30? printf("Fail\n") : printf("Passed\n");
// return 0;

    }

   