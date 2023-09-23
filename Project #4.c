/*
 * Ch 4 Homework
 * Ryan Burke - September 7,2023
 * Version: 4.256
 */
#include <stdio.h>   //header file for input/output - Include at the top of EACH FILE in this project.
#include <string.h>
#define FICA_RATE 0.0765
int menu(void);   //prototype definition section
void hello(void);
void calculatePay(void);
void downloadCalc(void);
void names (void);
int main(void)
{
    int selection = menu();
    while(selection != 99) {
        switch(selection) {
        case 1:
           hello();
           break;
        case 2:
           calculatePay();
           break;
        case 3:
            downloadCalc();
           break;
        case 4:
            names();
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
    printf(" 2. Employee Pay \n");
    printf(" 3. Download Calculator \n");
    printf(" 4. Numbers For Your Name \n");
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
void calculatePay(){
    char employeeID[10];
    double hoursWorked, hourlyPay, grossPay, fica, netIncome;
    printf("Enter your employee ID (up to 9 characters): ");  // Get employee ID number
    scanf("%9s", employeeID);
    printf("Enter hours worked: ");                          //Get employee hours worked
    scanf("%lf", &hoursWorked);
    printf("Enter hourly pay: ");                           //Get hourly wage
    scanf("%lf", &hourlyPay);
    grossPay = hoursWorked * hourlyPay;                     // Calculate gross pay
    fica = grossPay * FICA_RATE;                            // Calculate FICA deduction
    netIncome = grossPay - fica;                           // Calculate net income
    printf("%-9s    Employee ID\n", employeeID);          // Display the information with formatting
    printf("%9.2lf    Gross \n", grossPay);
    printf("%9.2lf    FICA\n", fica);
    printf("%9.2lf    Net Pay\n", netIncome);
}
void downloadCalc() {
    float download_speed, file_size;
    printf("Enter download speed in megabits per second (Mbs): ");                                   // Prompt the user for download speed in Mbs
    scanf("%f", &download_speed);
    printf("Enter the size of the file in megabytes (MB): ");                                        // Prompt the user for file size in MB
    scanf("%f", &file_size);
    float download_speed_MBps = download_speed / 8.0;                                                // Convert download speed to megabytes per second (MBps)
    float download_time_seconds = file_size / download_speed_MBps;                                   // Calculate download time in seconds
    printf("At %.2f megabits per second, a file of %.2f megabytes\n", download_speed, file_size);   // Display the results
    printf("downloads in %.2f seconds.\n", download_time_seconds);}

void names() {
    char first_name[50];
    char last_name[50];
    printf("Enter your first name: ");                    // Prompt the user for their first name
    scanf("%s", first_name);
    printf("Enter your last name: ");                     // Prompt the user for their last name
    scanf("%s", last_name);
    int first_name_length = strlen(first_name);            // Calculate the length of the first and last names
    int last_name_length = strlen(last_name);
    printf("%s %s\n", first_name, last_name);              // Print the names with counts aligned with the end
    printf("%*d %*d\n", first_name_length, first_name_length, last_name_length, last_name_length);
    printf("\n%s %s\n", first_name, last_name);             // Print the names with counts aligned with the beginning
    printf("%-*d %-*d\n", first_name_length, first_name_length, last_name_length, last_name_length);
}