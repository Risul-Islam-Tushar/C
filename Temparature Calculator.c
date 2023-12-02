#include<stdio.h>
int main()
{
    int choice;
    float temp,convertedTemp;

    printf("Temperature Conversion menu\n");
    printf("1. Fahrenheit to Celsius.\n");
    printf("2. Celsius to Fahrenheit.\n");
    printf("Enter Your Choice:");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        {
          printf("Enter Fahrenheit temp:");
          scanf("%f",&temp);
           convertedTemp = (temp-32)/1.8;
           printf("Temp in Celsius : %f ",convertedTemp);
           break;
        }

    case 2:

   {
          printf("Enter Celsius temp:");
          scanf("%f",&temp);
           convertedTemp = (1.8*temp)+32;
           printf("Temp in Fahrenheit : %f ",convertedTemp);
           break;
        }
    default:
        printf("Entered Incorrect option.");
    }
    getch();
}
