#include <stdio.h>



int main() {
    int choice;

    do {
        // Display menu
        printf("\nBinary Calculator Menu:\n");
        printf("1. Binary Addition\n");
        printf("2. Binary Subtraction\n");
        printf("3. Binary Multiplication\n");
        printf("4. Binary Division\n");
        printf("5. Binary AND\n");
        printf("6. Binary OR\n");
        printf("7. Binary XOR\n");
        printf("8. Exit\n");

        // User input
        printf("Enter your choice (1-8): ");
        scanf("%d", &choice);

        // Perform the selected operation
        switch (choice) {
            case 1:
                binaryAddition();
                break;
            case 2:
                binarySubtraction();
                break;
            case 3:
                binaryMultiplication();
                break;
            case 4:
                binaryDivision();
                break;
            case 5:
                binaryAND();
                break;
            case 6:
                binaryOR();
                break;
            case 7:
                binaryXOR();
                break;
            case 8:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 8.\n");
        }

    } while (choice != 8);

    return 0;
}

// Function to perform binary addition
void binaryAddition() {
    unsigned long long int binary1, binary2;

    printf("Enter the first binary number: ");
    scanf("%llu", &binary1);

    printf("Enter the second binary number: ");
    scanf("%llu", &binary2);

    printf("Binary Addition: %llu\n", binary1 + binary2);
}

// Function to perform binary subtraction
void binarySubtraction() {
    unsigned long long int binary1, binary2;

    printf("Enter the first binary number: ");
    scanf("%llu", &binary1);

    printf("Enter the second binary number: ");
    scanf("%llu", &binary2);

    printf("Binary Subtraction: %llu\n", binary1 - binary2);
}

// Function to perform binary multiplication
void binaryMultiplication() {
    unsigned long long int binary1, binary2;

    printf("Enter the first binary number: ");
    scanf("%llu", &binary1);

    printf("Enter the second binary number: ");
    scanf("%llu", &binary2);

    printf("Binary Multiplication: %llu\n", binary1 * binary2);
}

// Function to perform binary division
void binaryDivision() {
    unsigned long long int binary1, binary2;

    printf("Enter the first binary number: ");
    scanf("%llu", &binary1);

    printf("Enter the second binary number: ");
    scanf("%llu", &binary2);

    if (binary2 != 0) {
        printf("Binary Division: %llu\n", binary1 / binary2);
    } else {
        printf("Error: Division by zero.\n");
    }
}

// Function to perform binary AND
void binaryAND() {
    unsigned long long int binary1, binary2;

    printf("Enter the first binary number: ");
    scanf("%llu", &binary1);

    printf("Enter the second binary number: ");
    scanf("%llu", &binary2);

    printf("Binary AND: %llu\n", binary1 & binary2);
}

// Function to perform binary OR
void binaryOR() {
    unsigned long long int binary1, binary2;

    printf("Enter the first binary number: ");
    scanf("%llu", &binary1);

    printf("Enter the second binary number: ");
    scanf("%llu", &binary2);

    printf("Binary OR: %llu\n", binary1 | binary2);
}

// Function to perform binary XOR
void binaryXOR() {
    unsigned long long int binary1, binary2;

    printf("Enter the first binary number: ");
    scanf("%llu", &binary1);

    printf("Enter the second binary number: ");
    scanf("%llu", &binary2);

    printf("Binary XOR: %llu\n", binary1 ^ binary2);
}
