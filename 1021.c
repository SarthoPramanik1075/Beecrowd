#include <stdio.h>

int main() {
    double N;
    scanf("%lf", &N);

    int value = N * 100; 

    printf("NOTAS:\n");

    int arr[] = {10000, 5000, 2000, 1000, 500, 200};

    for (int i = 0; i < 6; i++) {
        int count = value / arr[i];
        printf("%d nota(s) de R$ %d.00\n", count, arr[i] / 100);
        value -= count * arr[i];
    }

    printf("MOEDAS:\n");
    int coins[] = {100, 50, 25, 10, 5, 1};

    double arr2[] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};

    for (int i = 0; i < 6; i++) {
        int count = value / coins[i];
        printf("%d moeda(s) de R$ %.2lf\n", count, arr2[i]);
        value -= count * coins[i];
    }

    return 0;
}