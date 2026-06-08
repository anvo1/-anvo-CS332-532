#include <stdio.h>

int main() {
    int given_number;
    int i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &given_number);

    if (given_number < 2) {
        isPrime = 0;
    } else {
        for (i = 2; i * i <= given_number; i++) {
            if (given_number % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime)
        printf("The number is prime\n");
    else
        printf("The number is not prime\n");
    return 0;
}