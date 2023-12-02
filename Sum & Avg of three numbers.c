#include<stdio.h>
int main()
{
    int num1,num2,num3,sum;
    float avg;

    printf("Enter 3 integer numbers:");

    scanf("%d %d %d",&num1,&num2,&num3);

    sum = num1 + num2 + num3;

    avg = (float)sum/3;

    printf("Sum of the numbers = %d\n",sum);

    printf("Average =%f",avg);
    getch();
}
