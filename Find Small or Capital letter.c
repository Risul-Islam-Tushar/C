#include<stdio.h>
int main()
{
    char ch;
    printf("Enter Any Character:");
    scanf("%c",&ch);

    if(ch >='a' && ch <= 'z')
        printf("Small Letter");
    else if(ch >= 'A' && ch <= 'z')
        printf("Capital Letter");
    else
        printf("Not a Letter");
    getch();

}
