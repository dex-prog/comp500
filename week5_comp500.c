//q1
#include <stdio.h>
#include <string.h>

int main() {
    char num[100] ;
    
    printf("Input a number between 0 and 9:\n") ; 
        scanf("%2s", num) ;
    
        if (strlen(num) != 1 || num[0] < '0' || num[0] > '9') {
        printf("Invalid input!\n");
        return 1;
    }
    
    switch (num[0]) {
        case '0':
            printf("zero\n");
            break;
        case '1':
            printf("one\n");
            break;        
        case '2':
            printf("two\n");
            break;       
        case '3':
            printf("three\n");
            break;        
        case '4':
            printf("four\n");
            break;       
        case '5':
            printf("five\n");
            break;        
        case '6':
            printf("six\n");
            break;        
        case '7':
            printf("seven\n");
            break;       
        case '8':
            printf("eight\n");
            break;        
        case '9':
            printf("nine\n");
            break;
    }
    
    return 0;
}

//q2 
#include <stdio.h>

int main() {
    int month;

    printf("Enter a month (Jan is 1, Dec is 12):\n") ; 
    scanf(" %d", &month);
    /*{
        printf("Invalid input!\n");
        return 1;
    }*/

   /* if (month< 1 || month> 12) {
        printf("Invalid month!\n");
        return 1;
    }*/

    switch (month) {
        case 1:
            printf("That month has 31 days in it.\n");
            break;
        case 2:         
            printf("That month has 28 or 29 days in it.\n");
            break;
        case 3:
            printf("That month has 31 days in it.\n");
            break;
        case 4:
            printf("That month has 30 days in it.\n");
            break;
        case 5:
            printf("That month has 31 days in it.\n");
            break;
        case 6:
            printf("That month has 30 days in it.\n");
            break;
        case 7:
            printf("That month has 31 days in it.\n");
            break;
        case 8:
            printf("That month has 31 days in it.\n");
            break;
        case 9:
            printf("That month has 30 days in it.\n");
            break;
        case 10:
            printf("That month has 31 days in it.\n");
            break;
        case 11:
            printf("That month has 30 days in it.\n");
            break;
        case 12:
            printf("That month has 31 days in it.\n");
            break;

        default:
            printf("Invalid month!\n");
    }

                //if (scanf("%f", month) != 1) {
        //printf("Invalid month!\n");
        //}
    
        //if (month< '1' || month > '12') {
        //printf("Invalid month!\n");
        //return 1;
            
        

    
    return 0;
}
//q2 
#include <stdio.h>

int main() {
    int month;

    printf("Enter a month (Jan is 1, Dec is 12):\n") ; 
    scanf(" %d", &month);
    /*{
        printf("Invalid input!\n");
        return 1;
    }*/

   /* if (month< 1 || month> 12) {
        printf("Invalid month!\n");
        return 1;
    }*/

    switch (month) {
        case 1:
            printf("That month has 31 days in it.\n");
            break;
        case 2:         
            printf("That month has 28 or 29 days in it.\n");
            break;
        case 3:
            printf("That month has 31 days in it.\n");
            break;
        case 4:
            printf("That month has 30 days in it.\n");
            break;
        case 5:
            printf("That month has 31 days in it.\n");
            break;
        case 6:
            printf("That month has 30 days in it.\n");
            break;
        case 7:
            printf("That month has 31 days in it.\n");
            break;
        case 8:
            printf("That month has 31 days in it.\n");
            break;
        case 9:
            printf("That month has 30 days in it.\n");
            break;
        case 10:
            printf("That month has 31 days in it.\n");
            break;
        case 11:
            printf("That month has 30 days in it.\n");
            break;
        case 12:
            printf("That month has 31 days in it.\n");
            break;

        default:
            printf("Invalid month!\n");
    }

                //if (scanf("%f", month) != 1) {
        //printf("Invalid month!\n");
        //}
    
        //if (month< '1' || month > '12') {
        //printf("Invalid month!\n");
        //return 1;
            
        

    
    return 0;
}


//q3
#include <stdio.h>
#include <ctype.h>

int main() {
    char suit ;
    char rank ;

    printf("Suit (d/h/s/c):\n") ; 
    scanf(" %c", &suit) ;
    suit = toupper(suit);
    
    printf("Rank (A/2/3/4/5/6/7/8/9/T/J/Q/K):\n");
    scanf(" %c", &rank);
    rank = toupper(rank); 

    if (suit != 'D' && suit != 'H' && suit != 'S' && suit != 'C') {
        printf("Invalid Suit\n");
        return 1;
    }
    if (!(rank == 'A' || (rank >= '2' && rank <= '9') || rank == 'T' || 
          rank == 'J' || rank == 'Q' || rank == 'K')) {
        printf("Invalid Rank\n");
        return 1;
    }

    switch (rank) {
        case 'A': printf("Ace"); break;
        case '2': printf("Two"); break;
        case '3': printf("Three"); break;
        case '4': printf("Four"); break;
        case '5': printf("Five"); break;
        case '6': printf("Six"); break;
        case '7': printf("Seven"); break;
        case '8': printf("Eight"); break;
        case '9': printf("Nine"); break;
        case 'T': printf("Ten"); break;
        case 'J': printf("Jack"); break;
        case 'Q': printf("Queen"); break;
        case 'K': printf("King"); break;
    }

    printf(" of ");

    if (suit == 'H') printf("Heart\n");
    else if (suit == 'D') printf("Diamonds\n");
    else if (suit == 'C') printf("Clubs\n");
    else if (suit == 'S') printf("Spades\n");

    return 0;
}

//q4
#include <stdio.h>

int main() {
    char op;
    float num1, num2;
    float result;

    printf("Operator? Left Operand? Right Operand?\n") ; 
    scanf(" %c %f %f", &op, &num1, &num2);
        
    if(op == '/' && num2 == 0){
        printf("Unable to compute divide by zero!\n");
        return 1;
    }
    
    printf("Computing: %.0f %c %.0f\n", num1, op, num2);
    

    
    if (op == '+'){
        result = num1 + num2 ;
    }
    if (op == '-'){
        result = num1 - num2 ;
    }
    if (op == '*'){
        result = num1 * num2 ;
    }
    
    else if (op == '/' ){
        result = num1 / num2 ;
    }
    
    printf("Result: %.0f\n", result);
    

    return 0;
}

//q5
#include <stdio.h>

int main() {
    int num;

    printf("Please enter a whole number:\n") ; 
    scanf("%d", &num);
        
    if(num % 2 == 0){
        printf("%d is even.\n", num);
        return 1;
    }
    
    else {
        printf("%d is odd.\n", num);
    }

    return 0;
}

//q6
#include <stdio.h>

int main() {
    int i;

    for (i = 40; i <= 400; i += 10) {
        if (i == 400) {
            printf("%d", i); 
        } else {
            printf("%d, ", i);
        }
    }

    printf("\n");
    return 0;
}

//q7
#include <stdio.h>

int main() {
    int i;

    for (i = 70; i >= 0; i -= 2) {
        if (i == 0) {
            printf("%d", i); 
        } else {
            printf("%d, ", i);
        }
    }

    printf("\n");
    return 0;
}

//q8
#include <stdio.h>

int main() {
    int n, i;

    printf("n?\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i == n) {
            printf("[%d]", i); 
        } else {
            printf("[%d] ", i);
        }
    }

    printf("\n");
    return 0;
}

//q9
#include <stdio.h>

int main() {
    int start, end, size;

    printf("Count down start?\n");
    scanf("%d", &start);
    printf("Count down end?\n");
    scanf("%d", &end);
    printf("Step size?\n");
    scanf("%d", &size);
    
    int i = start;

    for (; i >= end+size; i-=size)
    {
    //if (i == end) 
    printf("%d, ", i); 
    }// else 
    printf("%d", i);

    printf("\n");
    return 0;
}

// q10
#include <stdio.h>

int main() {
    char ch;
    int count, i;

    // Input a single ASCII character
    printf("ASCII Symbol?\n");
    scanf(" %c", &ch); 
    // input a number
    printf("Repeat Count?\n");
    scanf("%d", &count);

    // Loop to display the char repeated 'n' times
    for (i = 1; i <= count; i++) {
        if (i == count) {
            printf("%c", ch); // end
        } else {
            printf("%c ", ch); // onto next
        }
    }

    printf("\n"); 
    return 0;
}

// q11
#include <stdio.h>

int main() {
    int num;

    printf("Enter a whole number:\n");
    scanf("%d", &num); 

    printf("The %d Times Table:\n", num);
    printf("------------------\n\n");

int i, result;

    for (i = 0; i <= 14; i++) {
        result = i * num;
            printf("%d x %d = %d\n", i, num, result); 
    }

    printf("\n"); 
    return 0;
}

// q12
#include <stdio.h>

int main() {
    int start, end, size;

    printf("Starting number:\n");
    scanf("%d", &start);
    printf("Stopping number:\n");
    scanf("%d", &end);
    printf("Step size:\n");
    scanf("%d", &size);
    printf("Using a for loop:\n\n");
    
    printf("Starting at %d...\n\n", start);
    
    int i = start;
    //start = 7;
    //size = 3;
    //end = 34;
    int iter = 0;

    for (i = start; i <= end; i+=size)
    {
        iter++;
    printf("In loop: %d...\n", i); 
}
    printf("\nStopping at %d...\n\n", end);
    
    
    
    printf("This loop did %d iterations.\n", iter);
    return 0;
}

// q13
#include <stdio.h>

int main() {
    int num ;

    printf("Please enter a positive whole number:\n");
    scanf("%d", &num);

   float i, result;
    for (i = 1; i <= num; i+= 1)
    {
        result = 1/i ;
    printf("1 / %.0f is %.3f\n", i, result); 
}
    
    return 0;
}

// q14
#include <stdio.h>

int main() {
    int base, power, result=1;

    printf("Enter the base:\n");
    scanf("%d", &base);
    printf("Enter the power:\n");
    scanf("%d", &power);
    
    
    if (power == 0) {
    printf("%d ^ %d which is 1\n", base, power);
        return 1;
    }
     
    else {
    printf("%d ^ %d is the same as...\n\n", base, power);

    printf("%d", base);

    for (int i = 1; i <= power-1; i++) {
        printf(" * %d", base);
        result *= base;
    }
    
    printf(" which is %d\n", result);
    }
    return 0;
}

// q15
#include <stdio.h>

int main() {
    int num;
    long result = 1; 
    
    printf("Enter a non-negative whole number:\n");
    scanf("%d", &num);

    if (num < 0) {
        printf("Bad Input! %d is negative...\n", num);
        return 1;
    }

    for (int i = 1; i <= num; i++) {
        result *= i;
    }

    printf("%d! is %li\n", num, result);
    return 0;
}

// q16
#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a non-negative whole number:\n");
    scanf("%d", &num);

    if (num < 0) {
        printf("Bad Input! %d is negative...\n", num);
        return 1;
    }

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    
    printf("The sum of the digits entered is %d\n", sum);
    
    return 0;
}

// q17
#include <stdio.h>

int main() {
    int num, count = 0, sum = 0, average;

    while (1) {
        printf("Number (-1 to stop)?\n");
        scanf("%d", &num);

        if (num == -1) {
            break; // Exit the loop when -1 is entered
        }

        if (num < 0) {
            printf("Invalid input! Only non-negative numbers are allowed.\n");
            continue; // Skip invalid input
        }

        sum += num; // Add the number to the sum
        count++;    // Increment the count of numbers
    }

    if (count == 0) {
        printf("No numbers input.\n");
    } else {
        average = sum / count; // Calculate the average
        printf("\nThe average of the %d numbers input is %d\n", count, average);
    }

    return 0;
}

// q18
#include <stdio.h>

int main() {
    int num, i;
    int array[500];

    printf("Enter the required number of elements (Max 500):\n\n");
    scanf("%d", &num);

    if (num <= 0 || num > 500) {
        printf("get fukd");
        return 0;
    }
        
    printf("Now enter the %d elements of the array...\n\n", num);
    for (i = 0; i < num; i++) {
        printf("Set [%d] to:\n", i);
        scanf("%d", &array[i]);
    }
        
    printf("\nThe elements in the array are:\n\n");
    printf("{ ");
    for (i = 0; i < num; i++) {
    
    if (i == num - 1) {
        printf("%d ", array[i]);
    }
    else {
        printf("%d, ", array[i]);
    }
    
    }

    printf("}");

    return 0;
}

// q19
#include <stdio.h>

int main() {
    int num[7], i, mult;

    printf("Input seven whole numbers:\n");
    printf("--------------------------\n\n");

    for (int i = 0; i < 7; i++) {
        printf("Enter number %d:\n", i + 1);
        scanf("%d", &num[i]);
    }
        
    printf("\nThe seven numbers are: { ");
    for (i = 0; i < 7; i++) {
        if (i == 6) {
        printf("%d ", num[i]);
        }
        
        else {
        printf("%d, ", num[i]);
        }
    }

    printf("}\n\n");
    
    printf("Multiplier?\n\n");
    scanf("%d", &mult);
    
    for (int i = 0; i < 7; i++) {
        num[i] *= mult;
    }
    
    printf("The seven numbers are now: { ");
    for (int i = 0; i < 7; i++) {
        if (i == 6) {
        printf("%d ", num[i]);
        }
        
        else {
        printf("%d, ", num[i]);
        }
    }
    printf("}");
    
    return 0;
}

// q20
#include <stdio.h>

int main() {
    int total, i, newval, where;
    int array[100];

    printf("Input total number of elements required:\n");
    scanf("%d", &total);

    if (total <= 0 || total > 100) {
        printf("bro why, read the rules man");
        return 0;
    }
    
    //input 1    
    for (i = 0; i < total; i++) {
        printf("Input element [%d]:\n", i);
        scanf("%d", &array[i]);
    }
    
    //display before 
    printf("\nBefore insertion:\n");
    for (i = 0; i < total; i++) {
        printf("Element [%d] is %d\n", i, array[i]);
    }
    
    //new val
    printf("\nInput a new value to insert:\n");
    scanf("%d", &newval);
    
    //position
    printf("Input where to insert the value %d:\n", newval);
    scanf("%d", &where);
    
    //outliers
    if (where < 0 || where > total) {
        printf("brother... enter a position between 0 and %d.\n", total);
        return 1;
    }
    
 // move elements to the right
    for (int i = total; i > where; i--) {
        array[i] = array[i - 1];
    }

    // insert newval into position given
    array[where] = newval;
    total++; 

    // display after insertion
    printf("After insertion:\n");
    for (int i = 0; i < total; i++) {
        printf("Element [%d] is %d\n", i, array[i]);
    }


    return 0;
}

// q21
#include <stdio.h>

int main() {
    int num[5], i;
    char op;
    int sum = 0, prod = 1;

    printf("Input five whole numbers:\n");
    printf("--------------------------\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Enter number %d:\n", i + 1);
        scanf("%d", &num[i]);
    }
        
    printf("\nThe five numbers are: { ");
    for (i = 0; i < 5; i++) {
        if (i == 4) {
        printf("%d ", num[i]);
        }
        else {
        printf("%d, ", num[i]);
        }
    }
    printf("}\n\n");
    
    printf("Would you like to sum or multiply the elements (s/m)?\n");
    scanf(" %c", &op);
    
    //sum
    if (op == 's') {
        printf("The sum of  ");
    for (int i = 0; i < 5; i++) {
        sum += num[i];
        if (i == 4) {
                printf("%d ", num[i]); 
        }
        else {
                printf("%d + ", num[i]);
            }
        }
        printf("is %d\n", sum);
    }
    
    //multiply
    else if (op == 'm') {
        printf("The multiplication of  ");
        for (i = 0; i < 5; i++) {
            prod *= num[i];
            if (i == 4) {
                printf("%d ", num[i]); 
            } else {
                printf("%d * ", num[i]);
            }
        }
        printf("is %d\n", prod);
    }
    
    //outliers
    else {
        printf("dumbass");
    }
    
    return 0;
}

// q23