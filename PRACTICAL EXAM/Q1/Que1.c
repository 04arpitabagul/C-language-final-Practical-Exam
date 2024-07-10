//Que 1: create a c program to check if a character entered by the user is a vowel or consonant using a switch statement.

#include<stdio.h>
#include<conio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    switch(ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            printf("%c is a consonant.\n", ch);
            break;
    }

    getch();
}


