//Que 3: write a c program that defines a function to reverse string without using any library function

#include<stdio.h>
#include<conio.h>

void reverse_string(char str[]) {
    int i, j;
    char temp;

    for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%99s", str);

    reverse_string(str);

    printf("Reverse of the string: %s\n", str);

    getch();
}

