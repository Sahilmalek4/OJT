#include<stdio.h>
#include<conio.h>    //This program is to write the table 
int main(){
int table;
    printf("Enter the number  of the table:");
    scanf("%d",&table);
    for (int i=1;i<=10;i++){
        printf("%d*%d = %d\n",table,i,table*i);
    }
    return 0;
}
