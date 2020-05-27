#include <stdio.h>
#include <cs50.h>
#include <math.h>


int main(void)
    {
    int conversion; // variable to store the conversion of float to integer.
    float changeOwed;
    int q = 25;
    int d = 10;
    int n = 5;
    int p = 1;
    int count = 0;
    int numQ = 0, numD = 0, numN = 0, numP = 0; // the variables for the coins

    do{
        changeOwed = get_float("Change Owed: ");
        }while(changeOwed < 0);

    conversion = round(changeOwed * 100.00); //converts the float of user input to an integer.

    int c = conversion; //shortened variable for efficiency
       while(c > 0){
            while(c >= q){
                count++;
                numQ++;
                c = c - q;

            }
            while(c >= d){
                count++;
               numD++;
                c = c - d;

            }
            while(c >= n){
                count++;
                numN++;
                c = c - n;
            }
            while(c >= p){
                count++;
                numP++;
                c = c - p;
            }
        }
        printf("Quarters: %d, Dimes: %d, Nickels: %d, Pennies: %d, Coins: %d\n",numQ, numD, numN, numP, count);
    }

