/* STARTING C
 - ctrl + O: save to a file
 - ctrl + x: exit
 - ctrl + l: clean screen terminal
 - ctrl + c: terminate terminal
 - Main is the starting point of the code: 
 -> int main: means that the function returns an integer
 - Printing: printf 
 - return 0
 - Execute: ./a.out 
 - %d integer 
 - %f double, float 
 - % .3f -> floating number with 3 decimal places
 - warning: code still runs 
 - error: problem in the code
 - scanf: input
 - & (Ampersand Symbol): address of the operand in the memory

 - scanf("%d", &number) -> store value in number
 - Constants: #define SCALE 25 -> capslock, nosemi-collon
*/

include <stdio.h>;

#include <stdio.h>

int main() {
    double hourly_rate = 21.50;
    int hours = 14;
    printf("Enter number of hours:")
    scanf ("%d", &hours);
    double pay = hourly_rate * hours;
    printf("Pay is %.2f",pay);
    return 0;
}