#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter 1st Number=");
    scanf("%d",&num1);
    printf("Enter 2nd Number=");
    scanf("%d",&num2);

    if(num1>num2)
        printf("%d is a Large Number",num1);
    else if(num1<num2)
        printf("%d is a Large Number",num2);
    else
        printf("Numbers are Equal");
    getch();
}
