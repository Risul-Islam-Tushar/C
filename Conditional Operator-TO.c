#include<stdio.h>
int main()
{
    int num1,num2,largeNumber;

    printf("Enter two numbers:");
    scanf("%d %d",&num1,&num2);

    largeNumber = (num1>num2) ? num1 : num2;
    printf("%d",largeNumber);
    getch();
}
