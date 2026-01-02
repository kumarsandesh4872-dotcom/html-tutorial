#include <stdio.h>

int main()
{
    int choice;
    int num1, num2;
    int result;

    printf("Bitwise Operations Menu:\n");
    printf("1. AND (&)\n");
    printf("2. OR (|)\n");
    printf("3. XOR (^)\n");
    printf("4. Left Shift (<<)\n");
    printf("5. Right Shift (>>)\n");

    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);

    switch (choice)
    {
        case 1:
            result = num1 & num2;
            printf("Result of AND (&): %d\n", result);
            break;

        case 2:
            result = num1 | num2;
            printf("Result of OR (|): %d\n", result);
            break;

        case 3:
            result = num1 ^ num2;
            printf("Result of XOR (^): %d\n", result);
            break;

        case 4:
            result = num1 << num2;
            printf("Result of Left Shift (<<): %d\n", result);
            break;

        case 5:
            result = num1 >> num2;
            printf("Result of Right Shift (>>): %d\n", result);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
