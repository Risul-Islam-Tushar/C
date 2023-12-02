//  round , trunc , ceil , floor

#include<stdio.h>
#include<math.h>
int main()
{
    double x = 5.55545;

    double result = trunc(x);

    printf("trunc(%lf) = %lf",x,result);
}
