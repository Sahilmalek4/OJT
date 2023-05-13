#include<stdio.h>
int main(){
    int a,hour,minute,second;
    
    printf("Enter the seconds:");
    scanf("%d", &a);
    second=a%60;
    minute=a/60;
    hour=minute/60;
    minute=minute%60;

printf("hour:%d\n",hour);
printf("minute%d\n",minute);
printf("second%d\n",second);
return 0;
}