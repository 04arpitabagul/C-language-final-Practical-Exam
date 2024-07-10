//Que 7:print a below pattern using nested for loop in C language

//1
//4 4
//9 9 9
//16 16 16 16 
//25 25 25 25 25

#include<stdio.h>
#include<conio.h>

int main() {
    int i, j, num = 1;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", num * num);
        }
        num++;
        printf("\n");
    }

    getch();
}




