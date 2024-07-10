//Que 2: Create a program to find the largest element in an 1D array.

#include<stdio.h>
#include<conio.h>

int main() {
    int arr[100];
    int i, n, max;

    printf("Enter the number of elements (1 to 100): ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Largest element = %d\n", max);

    getch();
}

