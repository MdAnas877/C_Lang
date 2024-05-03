#include <stdio.h>

int main() {
    //Declare Three Variables
    int hght, i, j;

    // Print Message on Console
    printf("Enter the Height of the Triangle: ");
    //Taking Input from User for Height of Right Triangle
    scanf("%d", &hght);

    // For Loop for row
    for (i = 0; i < hght; i++) {
        // For Loop for Column
        for (j = 0; j <= i; j++) {
            //print * on console
            printf("*");
        }
        //When Condition is false then curson will on next line by using \n
        printf("\n");
    }

    return 0;//return to compiler
}