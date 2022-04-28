#include <stdio.h>
#include <regex.h>

int main(){
    // variables
    float number1;
    float number2;
    float result;
    char operation;

    // initialize input
    printf("Welcome to my very first c program!\n");
    printf("This program calculates basic math operations.\n");
    printf("Examples are: 2+2 or 5-3, and so on.\n");
    printf("Why don't you give it a try?\n");
    printf("What operation do you want to perform? (+, -, *, /)\n");
    scanf("%c", &operation);
    printf("The first operand, please.\n");
    scanf("%f", &number1);
    printf("The second operand, please.\n");
    scanf("%f", &number2);
    printf("Performing the calculations...\n");

    // initiate the operations
    switch(operation){
        case '+':
            result = number1 + number2;
            printf("%f + %f = %f", number1, number2, result);
            break;
        case '-':
            result = number1 - number2;
            printf("%f - %f = %f", number1, number2, result);
            break;
        case '*':
            result = number1 * number2;
            printf("%f * %f = %f", number1, number2, result);
            break;
        case '/':
            if (number2 == 0){
                printf("Cannot perform division by zero! Please, try again.\n");
                break;
            } else {
                result = number1 / number2;
                printf("%f / %f = %f", number1, number2, result);
                break;
            }
        default:
            printf("Something really strange happened. :(\n");
    }
}
