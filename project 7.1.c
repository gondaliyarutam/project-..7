#include <stdio.h>


int main()
 {
    char choice;
    double num1, num2;

    do {
        
        printf("\nMenu:\n");
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press q to exit\n");

       
        printf("Enter your choice: ");
        scanf(" %c", &choice); 

       
        if (choice == 'q') 
		{
            printf("Exiting the program.\n");
            break;
        }

        
        if (choice < '1' || choice > '5') 
		{
            printf("Invalid choice. Please enter a number between 1 and 5, or 'q' to exit.\n");
            continue;
        }

        
        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);

        
        switch (choice)
		 {
            case '1':
                add(num1, num2);
                break;
            case '2':
                subtract(num1, num2);
                break;
            case '3':
                multiply(num1, num2);
                break;
            case '4':
                divide(num1, num2);
                break;
            case '5':
                // Casting to int for modulus operation
                modulus((int)num1, (int)num2);
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 5, or 'q' to exit.\n");
                break;
        }
    } while (choice != 'q');

    return 0;
}


void add(double a, double b)
 {
    printf("Result: %.2lf\n", a + b);
}


void subtract(double a, double b)
 {
    printf("Result: %.2lf\n", a - b);
}


void multiply(double a, double b)
 {
    printf("Result: %.2lf\n", a * b);
}


void divide(double a, double b)
 {
    if (b != 0) 
	{
        printf("Result: %.2lf\n", a / b);
    } else 
	{
        printf("Error: Division by zero is not allowed.\n");
    }
}


void modulus(int a, int b) 
{
    if (b != 0) {
        printf("Result: %d\n", a % b);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}
