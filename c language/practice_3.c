#include<stdio.h>
#include<conio.h>
int main(){
    int day;
    printf("enter the value in 1 to 7 :");
    scanf("%d",&day);
   
    switch (day)
    {
    case 1:printf("Sunday");
        break;                //program for switch case studies
        case 2:printf("Monday");
        break;
        case 3:printf("Tueday");
        break;
        case 4:printf("Wedday");
        break;
        case 5:printf("Thursday");
        break;
        case 6:printf("Friday");
        break;
        case 7:printf("Saturday");
        break;
    
    default:printf("Enter valid value");
        break;
    }
     
    return 0;
}