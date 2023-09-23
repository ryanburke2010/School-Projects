/*
 * Driver Menu for Homework
 * Ryan Burke - September 1, 2023
 * Version: 3.055
 * Question #8: The floating points enable you to represent a much greater range of numbers, including decimal fractions as compared to 
integer only shows whole numbers.
 */
#include <stdio.h>   //header file for input/output - Include at the top of EACH FILE in this project.
int menu(void);   //prototype definition section
void hello(void);
void ASCII(void);
void volumeMeasurements(void);
void kmtomiles (void);
int main(void)
{
    int selection = menu();
    while(selection != 99) {
        switch(selection) {
        case 1:
           hello();
           break;
        case 2:
            ASCII();
           break;
        case 3:
            volumeMeasurements();
           break;
        case 4:
            kmtomiles ();
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
    printf(" 2. Number to ASCII \n");
    printf(" 3. Volume Measurements \n");
    printf(" 4. Km to Miles conversion\n");
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
void ASCII(void) {
    int ascii_code;
    printf("Please enter an ASCII code value: ");  // Get the ASCII code value from the user
    scanf("%d", &ascii_code);
    printf("The character for ASCII code %d is: %c\n", ascii_code, ascii_code);   // Convert ASCII code to character and print it
}
void volumeMeasurements(void)  {
    float cups;
    printf("Enter the volume in cups: ");  // Request user input for volume in cups
    scanf("%f", &cups);                   // Scans for user input in cups
    float pints = cups * 0.5;        // Conversion factors
    float ounces = cups * 8;        // Conversion factors
    float tablespoons = cups * 16; // Conversion factors
    float teaspoons = cups * 48;  // Conversion factors
    printf("\nEquivalent Volumes:\n");
    printf("Pints: %.2f\n", pints);                // Display the equivalent volume in pints
    printf("Ounces: %.2f\n", ounces);             // Display the equivalent volume in ounces
    printf("Tablespoons: %.2f\n", tablespoons);  // Display the equivalent volumes in tablespoons
    printf("Teaspoons: %.2f\n", teaspoons);     // Display the equivalent volumes  in teaspoons
}
void kmtomiles (void){
float km, miles;
printf("Please enter the distance in km:  ");  // Request user input for distance in kilometers
scanf("%f", &km);                             // Scans for user input
miles = km/ 1.6;                             // Converts kilometers to miles
printf("%.2f Kilometers = % .2f Miles\n", km, miles);   // prints out to screen how many kilometers to miles that is requested to be converted
}