//Que 5:develop a c program that defines a structure representing a car
//(with attributes like model,year,price). list n number of car details using array of object

#include<stdio.h>
#include<conio.h>

struct Car {
    char model[50];
    int year;
    float price;
};

int main() {
    int n,i;
    printf("Enter the number of cars: ");
    scanf("%d", &n);

    struct Car cars[n];

    for ( i = 0; i < n; i++) {
        printf("Enter car %d details:\n", i+1);
        printf("Model: ");
        scanf("%49s", cars[i].model);  
        printf("Year: ");
        scanf("%d", &cars[i].year);
        printf("Price: ");
        scanf("%f", &cars[i].price);
    }

    printf("\nCar Details:\n");
    for ( i = 0; i < n; i++) {
        printf("Car %d:\n", i+1);
        printf("Model: %s\n", cars[i].model);
        printf("Year: %d\n", cars[i].year);
        printf("Price: %.2f\n\n", cars[i].price);
    }

    getch();
}


