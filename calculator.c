#include <stdio.h>

int main(){
    
    char operator;
    double num1;
    double num2;
    double result;

    printf("\nPlease enter an operator you want to use('/' '*' '+' '-')\n");
    scanf("%c",&operator);

    printf("Please enter number one:");
    scanf("%lf",&num1);

    printf("Please enter number two:");
    scanf("%lf",&num2);

    switch (operator)
    {
    case '/':
        result = num1/num2;
        printf("Your answer is %.1lf",result);
        break;
    case '*':
        result = num1*num2;
        printf("Your answer is %lf",result);
        break;
    case '+':
        result = num1+num2;
        printf("Your answer is %lf",result);
        break;
    case '-':
        result = num1-num2;
        printf("Your answer is %lf",result);
        break;
    
    default:
        printf("Please enter the corect operator, %c is not accepted", operator);
        break;
    }

    return 0;
}

