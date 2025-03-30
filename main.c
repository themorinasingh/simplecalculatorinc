//Creating a calculator in calculator
#include <stdio.h>
#include <math.h>

double add(double a, double b) { return a + b;}
double subtract(double a, double b) {return a - b;}
double multiply(double a, double b) {return a * b;}
double divide(double a, double b) {return a / b;}
double modulo(double a, double b) {return fmod(a,b);}
double power(double a, double b) { return pow(a,b); }

double solve(double a, double b, double (*f) (double a, double b)) {
    return f(a,b);
}

int main() {
    double a, b;
    double result;
    int funcChoice;
    do {
        printf("____________________________\n");
        printf("Welcome to Simple calculator\n");
        printf("\nChoose one of the following operators:\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Modulas\n");
        printf("6. Power\n");
        printf("7. Exit\n");
        printf("Now enter your choice: ");
        scanf("%d", &funcChoice);
        if (funcChoice != 7) {
            printf("Now enter 2 numbers: ");
            scanf("%lf %lf", &a, &b);
        }
        switch (funcChoice) {
            case 1:
                result = solve(a,b,add);
                printf("The Out come is %.2f\n", result );
                break;
            case 2:
                result = solve(a,b,subtract);
                printf("The Out come is %.2f\n", result );
                break;
            case 3:
                result = solve(a,b,multiply);
                printf("The Out come is %.2f\n", result );
                break;
            case 4:
                result = solve(a,b,divide);
                printf("The Out come is %.2f\n", result );
                break;
            case 5:
                result = solve(a,b,modulo);
                printf("The Out come is %.2f\n", result );
                break;
            case 6:
                result = solve(a,b,power);
                printf("The Out come is %.2f\n", result );
                break;
            case 7:
                break;
            default :
                printf("Please enter correct choice.\n");
                break;
        }
        
        
    } while (funcChoice != 7 );
    printf("Thank You for using my Calculator\n");
    printf("Created By Morina Singh");
    return 0;
    
}
    
    
    
    
    
    
    
    
    
    
    
    
