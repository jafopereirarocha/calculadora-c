#include <stdio.h> 
#include <math.h>
#include <locale.h> 

void displayMenu();

void addition();
void subtraction();
void multiplication();
void division();
void squareRoot();
void square();
void factorial();

void clearBuffer();

int main()
{
    setlocale(LC_ALL, "en_US");
    int option;
    do
    {
        displayMenu();
        printf("Choose an option (1-8): ");
        if (scanf("%d", &option) != 1)
        {
            clearBuffer();
            printf("Invalid input! Please enter a number from 1 to 8.\n");
            continue;
        }
               switch (option)
        {
            case 1: addition(); break;
            case 2: subtraction(); break;
            case 3: multiplication(); break;
            case 4: division(); break;
            case 5: squareRoot(); break;
            case 6: square(); break;
            case 7: factorial(); break;
            case 8: printf("Exiting the calculator...\n"); break;
            default: printf("Invalid input! Please enter a number from 1 to 8.\n");
        }
    } while (option != 8);  
    return 0;
}

void displayMenu()
{
    printf("\n====== Calculator ======\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square root\n");
    printf("6. Square\n");
    printf("7. Factorial of any number\n");
    printf("8. Exit\n");
    printf("========================\n");
}


void addition()
{
    double num1, num2;
    printf("Enter two numbers to add: ");
    if (scanf("%lf %lf", &num1, &num2) != 2)
    {
        clearBuffer();
        printf("Invalid input! Try again.\n");
        return;
    }
    printf("Result: %.2lf\n", num1 + num2);
}

void subtraction()
{
    double num1, num2;
    printf("Enter two numbers to subtract: ");
    if (scanf("%lf %lf", &num1, &num2) != 2)
    {
        clearBuffer();
        printf("Invalid input! Try again.\n");
        return;
    }
    printf("Result: %.2lf\n", num1 - num2);
}

void multiplication()
{
    double num1, num2;
    printf("Enter two numbers to multiply: ");
    if (scanf("%lf %lf", &num1, &num2) != 2)
    {
        clearBuffer();
        printf("Invalid input! Try again.\n");
        return;
    }
    printf("Result: %.2lf\n", num1 * num2);
}

void division()
{
    double num1, num2;
    printf("Enter two numbers to divide: ");
    if (scanf("%lf %lf", &num1, &num2) != 2)
    {
        clearBuffer();
        printf("Invalid input! Try again.\n");
        return;
    }
    if (num2 == 0)
    {
        printf("Error: Division by zero is not allowed!\n");
        return;
    }
    printf("Result: %.2lf\n", num1 / num2);
}

void squareRoot()
{
    double num;
    printf("Enter a number to calculate its square root: ");
    if (scanf("%lf", &num) != 1)
    {
        clearBuffer();
        printf("Invalid input! Try again.\n");
        return;
    }
    if (num < 0)
    {
        printf("Error: Square root of a negative number is not allowed!\n");
        return;
    }
    printf("Result: %.2lf\n", sqrt(num));
}

void square()
{
    double num;
    printf("Enter a number to calculate its square: ");
    if (scanf("%lf", &num) != 1)
    {
        clearBuffer();
        printf("Invalid input! Try again.\n");
        return;
    }
    printf("Result: %.2lf\n", num * num);
}

void factorial()
{
    int num;
    printf("Enter a number to calculate its factorial: ");
    if (scanf("%d", &num) != 1)
    {
        clearBuffer();
        printf("Invalid input! Try again.\n");
        return;
    }
    if (num < 0)
    {
        printf("Error: Factorial of a negative number is not allowed!\n");
        return;
    }
    unsigned long long result = 1;
    for (int i = 1; i <= num; ++i)
    {
        result *= i;
    }
    printf("Result: %llu\n", result);
}

void clearBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { } 
}
