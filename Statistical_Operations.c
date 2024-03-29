
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function declarations
float mean(float data[], int n);
float median(float data[], int n);
int mode(int data[], int n);
float standardDeviation(float data[], int n);
float variance(float data[], int n);
unsigned long long factorial(int n);

int main() {
    int choice;
    int n;
    
    printf("Enter the number of data points: ");
    scanf("%d", &n);
    
    float data[n];
    
    printf("Enter %d data points:\n", n);
    for (int i = 0; i < n; ++i) {
        printf("Data point %d: ", i + 1);
        scanf("%f", &data[i]);
    }

    printf("\nSelect an operation:\n");
    printf("1. Mean\n");
    printf("2. Median\n");
    printf("3. Mode\n");
    printf("4. Standard Deviation\n");
    printf("5. Variance\n");
    printf("6. Factorial\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Mean: %f\n", mean(data, n));
            break;
        case 2:
            printf("Median: %f\n", median(data, n));
            break;
        case 3:
            printf("Mode: %d\n", mode(data, n));
            break;
        case 4:
            printf("Standard Deviation: %f\n", standardDeviation(data, n));
            break;
        case 5:
            printf("Variance: %f\n", variance(data, n));
            break;
        case 6:
            printf("Factorial: %llu\n", factorial((int)data[0]));
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}

// Function to calculate the mean of the data
float mean(float data[], int n) {
    float sum = 0;

    for (int i = 0; i < n; ++i) {
        sum += data[i];
    }

    return sum / n;
}

// Function to calculate the median of the data
float median(float data[], int n) {
    // Sort the data
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (data[j] > data[j + 1]) {
                float temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }

    // Calculate the median
    if (n % 2 == 0) {
        return (data[n / 2 - 1] + data[n / 2]) / 2.0;
    } else {
        return data[n / 2];
    }
}

// Function to calculate the mode of the data
int mode(int data[], int n) {
    // Find the mode
    int maxCount = 0, modeValue = 0;

    for (int i = 0; i < n; ++i) {
        int count = 0;

        for (int j = 0; j < n; ++j) {
            if (data[j] == data[i]) {
                ++count;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            modeValue = data[i];
        }
    }

    return modeValue;
}

// Function to calculate the standard deviation of the data
float standardDeviation(float data[], int n) {
    float meanValue = mean(data, n);
    float sum = 0;

    for (int i = 0; i < n; ++i) {
        sum += pow(data[i] - meanValue, 2);
    }

    return sqrt(sum / n);
}

// Function to calculate the variance of the data
float variance(float data[], int n) {
    float meanValue = mean(data, n);
    float sum = 0;

    for (int i = 0; i < n; ++i) {
        sum += pow(data[i] - meanValue, 2);
    }

    return sum / n;
}

// Function to calculate the factorial of a number
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
