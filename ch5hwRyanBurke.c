/*
 * Ch.5 Homework
 * Ryan Burke - September 22, 2023
 * Version: 4.213
 */


#include <stdio.h>   //header file for input/output - Include at the top of EACH FILE in this project.

int menu(void);      //prototype definition section
void hello(void);
void time(void);
void numbers(void);
void addemup(void);
int count,sum,n;
#define Minutes_Per_Hour 60    // Defines a constant value for the number of minutes in an hour.
int main(void)
{
    int selection = menu();

    while(selection != 99) {

        switch(selection) {

        case 1:
           hello();
           break;

        case 2:
            time();
           break;

        case 3:
            numbers();
           break;

        case 4:
            addemup();
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
    printf(" 2. Minutes to Hours & Minutes\n");
    printf(" 3. Counting integers \n");
    printf(" 4. Add Em Up \n");
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

void time(void){
int minutes;

   while(1){
    printf("Enter time in minutes (0 or less to exit): ");      // Request user to input time in minutes.
    scanf("%d", &minutes);                                      // Scans for input from user then added it to the variable.

    if (minutes <=0){
        printf("Exiting program.\n");                           // If input is equal to or less then 0, it exits the program.
        break;
        }
    int hours = minutes/Minutes_Per_Hour;                      // Calculate the number of hours by dividing minutes by Minutes_Per_Hour.
    int remainingMinutes = minutes % Minutes_Per_Hour;         // Calculate the remaining minutes after converting hours.

    printf("%d minutes is equal to %d hours and %d minutes.\n", minutes, hours, remainingMinutes);  //Prints output in hours and minutes remaining.
   }

}

void numbers(void) {

    int start_value;

    printf("Enter an integer: ");         // Ask the user for an integer input
    scanf("%d", &start_value);


    int end_value = start_value + 10;     // Calculate the end value which in this case is 10 greater then the input.

    int current_value = start_value;      // Initialize a variable for iteration.

    while(current_value <= end_value){    // Start of the while loop to print out the integers.
        printf("%d\n", current_value);    // Prints out integers from the start value to end value.
        current_value++;
    }
}


void addemup(void) {

printf("Enter the number of integers you want to calculate the sum for:  ");   // Ask the user to enter the number of integers they want to calculate the sum for.
scanf("%d", &n);                                                               // Read the user's input and initialize the variable to 'n'.

count = 0;                                                                     // Initialize variables 'count' & 'sum'.
sum = 0;
   while(count <n)                                                             // Starts the while loop while 'count' is less then 'n'.
{
    count++;                                                                   // Increment 'count' by 1 in each iteration
    sum = sum +count;                                                          // Adds the current value of 'count' to 'sum'
   }
printf("sum = %d\n", sum);                                                     // Prints out calculated sum.

}
