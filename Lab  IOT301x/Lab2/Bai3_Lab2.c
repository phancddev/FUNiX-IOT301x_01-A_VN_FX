#include <stdio.h>
int main() {
/*
    - This is lab 2.3, created by phancd.dev
    - Date of creation: 21/07/2022
    - Date of modified: 21/07/2022
    - Goal of this project: Input and output data using scanf and printf
    */
char ten[32];
printf("What is your name:");
scanf("%s", &ten);
printf(" Hello %s. How are you? \n", ten);
}
