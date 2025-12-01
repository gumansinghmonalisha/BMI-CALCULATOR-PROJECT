#include <stdio.h>

int main() {
    float weight, height, bmi;

    // Taking input
    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);

    printf("Enter your height in meters: ");
    scanf("%f", &height);

    // BMI Formula: BMI = weight / (height * height)
    bmi = weight / (height * height);

    // Display BMI
    printf("\nYour BMI is: %.2f\n", bmi);

    // Category
    if (bmi < 18.5)
        printf("Category: Underweight\n");
    else if (bmi >= 18.5 && bmi < 24.9)
        printf("Category: Normal weight\n");
    else if (bmi >= 25 && bmi < 29.9)
        printf("Category: Overweight\n");
    else
        printf("Category: Obesity\n");

    return 0;
}
