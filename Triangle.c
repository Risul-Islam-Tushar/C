#include<stdio.h>
int main()
{
    float base,height,triangle;

    printf("Enter Base : ");
    scanf("%f",&base);

    printf("Enter Height :");
    scanf("%f",&height);

    triangle = 0.5 * base * height;

    printf("Triangle value is = %.2f",triangle);
   getch();

}
