//Que 4: Write a C program to find square of each elements of an 1D array using pointer.

#include<stdio.h>
#include<conio.h>

void square_array(int *arr, int n) {
	int i;
    for ( i = 0; i < n; i++) {
        arr[i] = arr[i] * arr[i];
    }
}

int main() {
    int arr[5];
    int n = 5;

    printf("Enter %d elements: ", n);
    int i;
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    square_array(arr, n);

    printf("Array with squared elements: ");
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    getch();
}

