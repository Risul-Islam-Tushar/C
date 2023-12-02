#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    printf("Enter value of x =");
    scanf("%d",&x);
    printf("Enter value of y=");
    scanf("%d",&y);

    double result = pow(x,y);
    printf("power value is = %lf",result);
}
