#include<stdio.h>
int main()
{
    double num1,num2;
    char ope;

    printf("Enter an Operator------(+,-,*,/) :\n");
    scanf("%c",&ope);

    printf("Enter Two Numbers : ");
    scanf("%lf %lf",&num1,&num2);


    switch(ope)
    {
    case '+':
    {
        printf("%lf + %lf = %lf\n",num1,num2,num1+num2);
        break;
    }
    case '-':
    {
        printf("%lf - %lf = %lf\n",num1,num2,num1-num2);
        break;
    }
    case '*':
    {
        printf("%lf * %lf = %lf\n",num1,num2,num1*num2);
        break;
    }
    case '/':
    {
        printf("%lf / %lf = %lf\n",num1,num2,num1/num2);
        break;
    }

    default:
        printf("Entered Wrong operator.");
    }
    getch();
}
