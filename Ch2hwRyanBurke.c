/*
 * Ch2 Homework
 * Ryan Burke - August 22,2023
 * Version - 3.00
 */
#include <stdio.h>   //header file for input/output - Include at the top of EACH FILE in this project.
int menu(void);   //prototype definition section
void hello(void);
void mpg(void);
int main(void)
{
    int selection = menu();
    while(selection != 99) {
        switch(selection) {
        case 1:
           hello();
           break;
        case 2:
            mpg();
           break;
        case 3:
           break;
        case 4:
           break;
         default:
            printf("Please enter a valid selection.\n");
        }
    selection = menu();
    }
   return 0;
}
int menu(void) {
    int choice;
    printf("***************************\n");
    printf(" 1. Hello \n");
    printf(" 2. Miles Per Gallon calculator\n");
    printf(" 3. \n");
    printf(" 4. \n");
    printf("99. Exit\n");
    printf("Please select number and press enter:\n");
    printf("***************************\n");
    scanf("%d", &choice);
        getchar();
    return choice;
}
// The function type indicates what is returned from the function
// The contents of the () indicates what the function receives
void hello(void) {   // NEVER return 0 from type void functions
    printf("Hello, World!!!\n");
}
void mpg(void) {
    double milesDriven, gallonsUsed, mpg; // defines the variables
    printf("Please enter the miles driven: ");   //request miles driven as input.
    scanf("%lf", &milesDriven);       //scans input and stores input as a variable.
    printf("Please enter the gallons used: ");  //request gallons used as input.
    scanf("%lf", &gallonsUsed);      //scans input and stores input as a variable.
    mpg = milesDriven / gallonsUsed;  //divides miles driven by gallons used which will equal the MPG.
    printf("Your calculated MPG is: %.1f\n",mpg );  // Prints out MPG and rounds to nearest decimal
}