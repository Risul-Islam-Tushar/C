#include<stdio.h>
int main(){

char lower,upper;

printf("Enter any lower case character:");

scanf("%c",&lower);

upper = toupper(lower);

printf("%c",upper);

}
