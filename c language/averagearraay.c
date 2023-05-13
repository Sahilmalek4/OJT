#include<stdio.h>
 void main()  {
    int marks[10],n,average,sum=0,i;
    printf("Enter the number of Elemrnts!");
    scanf("%d",&n);
for(i=0;i<n;i++) 
 {
printf("Enter the marks %d :",i+1);
scanf("%d",&marks[i]);
sum=sum+marks[i];
}
average=sum/n;
printf("Avarage of all Entered marks is %d",average);

return 0;
}