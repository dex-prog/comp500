// Q2

#include <stdio.h>
#include <string.h>

int main() {
    char birthMonth[15] ;
    char season[10] ;
    
    printf("What month were you born in?\n"); 
    scanf(" %14s", birthMonth);
    
    if (strcmp(birthMonth, "December") == 0 ||
        strcmp(birthMonth, "January") == 0 ||
        strcmp(birthMonth, "February") == 0) {
        strcpy(season, "Summer") ;
        }
    else if (strcmp(birthMonth, "March") == 0 ||
        strcmp(birthMonth, "April") == 0 ||
        strcmp(birthMonth, "May") == 0) {
        strcpy(season, "Autumn") ;
        }
    else if (strcmp(birthMonth, "June") == 0 ||
        strcmp(birthMonth, "July") == 0 ||
        strcmp(birthMonth, "August") == 0) {
        strcpy(season, "Winter") ;
        }
    else if (strcmp(birthMonth, "September") == 0 ||
        strcmp(birthMonth, "October") == 0 ||
        strcmp(birthMonth, "November") == 0) {
        strcpy(season, "Spring") ;
        }
    else {
        printf("%s is not a month!\n", birthMonth) ;
        return 0; // Exit if the input is invalid
    }
    
    printf("%s in New Zealand is in %s.\n", birthMonth, season) ; 
    
    return 0;
}

//q3
#include <stdio.h>
#include <string.h>

int main() {
    int income ;

    printf("What is your income?\n"); 
    scanf("%d", &income);
    
    if (income >= 0 && income <= 14000) {
        printf("Tax rate: 10.5%%\n");
    }

    // needs to be if --> else if  --> else to avoid bug

    else if (income >= 14001 && income <= 48000) {
        printf("Tax rate: 17.5%%\n");
    }
    else if (income >= 48001 && income <= 70000) {
        printf("Tax rate: 30.0%%\n");
    }
    else if (income >= 70001) {
        printf("Tax rate: 33.0%%\n");
    }

    else {
        printf("Invalid Input!\n") ;
    }
    
    return 0;
}

//q4
#include <stdio.h>
#include <string.h>

int main() {
    int hours ;

    printf("How many hours did you spend studying for the test?\n"); 
    scanf("%d", &hours);
    
    if (hours >= 0 && hours <= 25) {
        printf("%d hours is probably not enough!\n", hours);
    }

    else if (hours >= 26 && hours <= 39) {
        printf("Good, but was it enough...\n");
    }
    
    else if (hours >= 40) {
        printf("Excellent, you should be well prepared for the test!\n");
    }

    else if (hours < 0) {
        printf("Invalid, you cannot have studied a negative number of hours!\n") ;
    }
    
    return 0;
}

// q5
#include <stdio.h>
#include <string.h>

int main() {
    char temp, humidity ;

    printf("Is the temperature warm or cold (w/c)?\n"); 
    scanf(" %c", &temp);
    printf("Is it dry or humid (d/h)?\n\n"); 
    scanf(" %c", &humidity);
    
    if (temp == 'w' && humidity == 'd') {
        printf("You should play tennis.\n") ;
    }

    else if (temp =='w' && humidity == 'h') {
        printf("You should go swimming.\n");
    }
    
    else if (temp == 'c' && humidity == 'd') {
        printf("You should study Programming 1.\n");
    }
    
    else if (temp == 'c' && humidity == 'h') {
        printf("You should read a book.\n");
    }
    
    else {
        printf("invalid\n");
    }
    
    return 0;
}

// q6
#include <stdio.h>
#include <string.h>

int main() {
    int x, y, z, a, b, c, sum;

    printf("x:\n") ; 
    scanf("%d", &x) ;

    printf("y:\n") ; 
    scanf("%d", &y) ;

    printf("z:\n") ; 
    scanf("%d", &z) ;

    a = x * x ;
    b = y * y ;
    c = z * z ;
    sum = a + b + c ;

    printf("Computed: %d\n", sum) ;
    return 0;
}

// q7
#include <stdio.h>
#include <string.h>

int main() {
    float score;
    char submit; 

    printf("What did you score in Practical Test 1?\n") ; 
    scanf("%f", &score) ;

    printf("Did you submit Reporting Journal - Stage 1 (y/n)?\n\n") ; 
    scanf(" %c", &submit) ;

    if (score < 50 && submit == 'y') {
        printf("Practice more programming exercises!\n");
    }

    else if (score < 50 && submit == 'n') {
        printf("More practice and keep a journal!!!\n");
    }

    else if (score >= 50 && submit == 'y') {
        printf("Well done! Keep studying well...\n");
    }
    
    else if (score >= 50 && submit == 'n') {
        printf("Oh no, you should keep a journal!\n");
    }

    return 0;
}

// q8
#include <stdio.h>
#include <string.h>

int main() {
    float price, discountRate, discountAmount, payable ;

    printf("Input the total purchase price:\n"); 
    scanf("%f", &price);
    
    if (price < 2500) {
        discountRate = 0.0;
    }

    else if (price >= 2500 && price <= 6499) {
        discountRate = 0.05 ;
    }
    
    else if (price >= 6500 && price <= 10000) {
        discountRate = 0.1 ;
    }
    else if (price > 10000) {
        discountRate = 0.125 ;
    }

    else {
        printf("Invalid Input!\n") ;
    }
    
    discountAmount = price * discountRate ; 
    payable = price - discountAmount ;
    
    printf("Discount is: %.2f\n", discountAmount) ;
    printf("Payable Total is: %.2f\n", payable) ;
    
    return 0;
}

// q9
#include <stdio.h>
#include <string.h>

int main() {
    char health, where ;

    printf("Is the player's health low or high (l/h)?\n"); 
    scanf(" %c", &health);
    printf("Where is the player, close or far (c/f)?\n\n"); 
    scanf(" %c", &where);
    
    if (health == 'l' && where == 'c') {
        printf("The AI should attack.\n") ;
    }

    else if (health =='l' && where == 'f') {
        printf("The AI should start searching.\n");
    }
    
    else if (health == 'h' && where == 'c') {
        printf("The AI should call for reinforcements.\n");
    }
    
    else if (health == 'h' && where == 'f') {
        printf("The AI should go to sleep.\n");
    }
    
    else {
        printf("invalid\n");
    }
    
    return 0;
}

// q10
#include <stdio.h>

int main() {
    char c ;

    printf("Input a character:\n"); 
    scanf(" %c", &c);
    
    if ((c >= 'A' && c <= 'Z')||(c >= 'a' && c <= 'z'))  {
        printf("The input was alphabetic.\n") ;
    }

    else {
        printf("The input was not alphabetic.\n");
    }
    
    return 0;
}
// q11
#include <stdio.h>

int main() {
    char crs ;

    printf("Which course are you enrolled in, COMP500 (C) or ENSE501 (E)?\n"); 
    scanf(" %c", &crs);
    
    if ((crs == 'c') || (crs == 'C'))  {
        printf("The user is enrolled in COMP500\n") ;
        return 0 ;
    }
    
    else if ((crs == 'e') || (crs == 'E'))  {
        printf("The user is enrolled in ENSE501\n") ;
        return 0 ;
    }

    else {
        printf("Invalid response!\n");
    }
    
    return 0;
}

// q12
#include <stdio.h> // lazy

int main() {
    float score ;

    printf("Enter your Practical Test percentage score:\n"); 
    scanf("%f", &score);
    
    if (score >= 89.50 && score <= 100) {
        printf("Your grade is: A+\n");
    }
    else if (score  >= 79.50) {
        printf("Your grade is: A\n");
    }
    else if (score >= 74.50) {
        printf("Your grade is: B+\n");
    }
    else if (score >= 69.5) {
        printf("Your grade is: B\n");
    }
    else if (score >= 64.50) {
        printf("Your grade is: B-\n");
    }
    else if (score >= 59.50) {
        printf("Your grade is: C+\n");
    }
    else if (score >= 0.00) {
        printf("Your grade is: D\n");
    }

    else {
        printf("Invalid response!\n");
    }
    return 0;
}

//q 13
#include <stdio.h>

int main() {
    char score ;

    printf("Did you score more than 50%% in Practical Test 1 (y/n)?\n"); 
    scanf(" %c", &score);
    
    if ((score == 'y') || (score == 'Y'))  {
        printf("Great! Hope you score well in Practical Test 2!\n") ;
        return 0 ;
    }
    
    else if ((score == 'n') || (score == 'N'))  {
        printf("Oh no! Hopefully your Practical Test 2 result is better!\n") ;
        return 0 ;
    }

    else {
        printf("Your response makes no sense!\n");
    }
    
    return 0;
}

//q14
#include <stdio.h>

int main() {
    char ans ;

    printf("Are you enjoying your studies in New Zealand so far? (y/n):\n"); 
    scanf(" %c", &ans);
    
    if ((ans == 'y') || (ans == 'Y'))  {
        printf("Awesome! Aotearoa has so much to offer!\n") ;
        return 0 ;
    }
    
    else if ((ans == 'n') || (ans == 'N'))  {
        printf("Kia kaha! It gets better once you find your rhythm!\n") ;
        return 0 ;
    }

    else {
        printf("Hmm, that response doesn't quite make sense!\n");
    }
    
    return 0;
}

//q15
#include <stdio.h>
#include <math.h>

int main() {
    float x, y, z, sqrleg, leg ;

    printf("Enter the x component:\n") ; 
    scanf("%f", &x) ;

    printf("Enter the y component:\n") ; 
    scanf("%f", &y) ;

    printf("Enter the z component:\n") ; 
    scanf("%f", &z) ;

    sqrleg = x*x + y*y + z*z ;
    leg = sqrtf(sqrleg) ;
    
    float  nx, ny, nz ;

    nx = x / leg ;
    ny = y / leg ;
    nz = z / leg ;
    
    printf("Normalized vector components:\n") ;
    printf("nx = %.2f\n", nx) ;
    printf("ny = %.2f\n", ny) ;
    printf("nz = %.2f\n", nz) ;
    
    return 0;
}

//q16
#include <stdio.h>

int main() {
    int first, second, third ;
    int smallest, biggest ; 
    
    printf("Enter the first number:\n") ; 
    scanf("%d", &first) ;

    printf("Enter the second number:\n") ; 
    scanf("%d", &second) ;

    printf("Enter the third number:\n") ; 
    scanf("%d", &third) ;

        biggest = smallest = first;

    if (second > biggest) {
        biggest = second;
    }
    if (second < smallest) {
        smallest = second;
    }
    if (third > biggest) {
        biggest = third;
    }
    if (third < smallest) {
        smallest = third;
    }

    printf("Biggest number was: %d\n", biggest) ;
    printf("Smallest number was: %d\n", smallest) ;

    return 0;
}

//q17
#include <stdio.h>

int main() {
    float left, right, result;
    char op ; 
    
    printf("Input left operand?\n") ;
    scanf("%f", &left) ;
    printf("Input right operand?\n") ;
    scanf("%f", &right) ;
    printf("Operation (+,-,*,/)?\n") ;
    scanf(" %c", &op) ;
    
    if (op == '+' ) {
        result = left + right ;
    }
    if (op == '-' ) {
        result = left - right ;
    }
    if (op == '*' ) {
        result = left * right ; 
    }
    if (op == '/' ) {
        result = left / right ;
    }
    
    printf("The result is\n") ;
    printf("%.0f\n", result) ;
    return 0;
}

// q18
#include <stdio.h>

int main() {
    int fa, sa, ta;
    
    printf("Enter the first angle (in degrees):\n");
    scanf("%d", &fa);
    
    printf("Enter the second angle (in degrees):\n");
    scanf("%d", &sa);
    
    printf("Enter the third angle (in degrees):\n\n");
    scanf("%d", &ta);

    if (fa == 0 || sa == 0 || ta == 0 || fa <= 0 || sa <= 0 || ta <=0) {
        printf("%d, %d, and %d is not a valid triangle.\n", fa, sa, ta);
    }
    else if ((fa + sa + ta) == 180) {
        if (fa == 90 || sa == 90 || ta == 90) {
            printf("%d, %d, and %d is a valid right-angle triangle.\n", fa, sa, ta);
        } else {
            printf("%d, %d, and %d is a valid triangle.\n", fa, sa, ta);
        }
    }
    else {
        printf("%d, %d, and %d is not a valid triangle.\n", fa, sa, ta);
    }

    return 0;
}

// q19
#include <stdio.h>

int main() {
    char attend, final, overall ;  

    printf("Did the student attend at least 80%% of lab tutorials? (y/n)\n");
        scanf(" %c", &attend) ; 
    printf("Did the student score at least 40%% in the Final Practical Exam? (y/n)\n");
        scanf(" %c", &final) ;
    printf("Did the student earn at least a C- grade overall? (y/n)\n");
        scanf(" %c", &overall) ;
    
    
    if (attend == 'y' && final == 'y' && overall == 'y') {
        printf("Student passes the paper.\n");
    }
    else {
        printf("Student fails the paper.\n") ;
    }

    return 0;
}

//q20
#include <stdio.h>

int main() {
    int num1, num2 ;

    printf("Enter the first whole number:\n") ;
        scanf("%d", &num1) ; 
    printf("Enter the second whole number:\n") ;
        scanf("%d", &num2) ;

    if (num1 == num2) {
        printf("The same number (%d) was entered twice.\n", num1) ; 
    }

    else if (num1 > num2) {
        printf("%d is bigger than %d.\n", num1, num2) ;
    }
    else if (num2 > num1) {
        printf("%d is bigger than %d.\n", num2, num1) ;
    }
    

    return 0;
}

// q21
#include <stdio.h>

int main() {
    float x, y, b, a, result ;

    printf("Enter a number for x:\n") ; 
    scanf("%f", &x) ;

    printf("Enter a number for y:\n") ; 
    scanf("%f", &y) ;

    a = x * y ; 
    b = x + y ; 
    result = (b*b) + a * (b - x) * (a + y) ; 

    printf("Result: %.2f\n", result) ;
    return 0;
}

// q22
#include <stdio.h>

int main() {
    char ans ;

    printf("Which hero is your favourite, Superman (S) or Batman (B)?\n"); 
    scanf(" %c", &ans);
    
    if ((ans == 's') || (ans == 'S'))  {
        printf("The user's favourite super hero is Superman\n") ;
        return 0 ;
    }
    
    else if ((ans == 'b') || (ans == 'B'))  {
        printf("The user's favourite super hero is Batman\n") ;
        return 0 ;
    }

    else {
        printf("Invalid response!\n");
    }
    
    return 0;
}

// q23
#include <stdio.h>

int main() {
    int fL, sL, tL ;
    
    printf("Enter the first side length:\n") ;
    scanf("%d", &fL) ;
    
    printf("Enter the second side length:\n") ;
    scanf("%d", &sL) ;
    
    printf("Enter the third side length:\n\n") ;
    scanf("%d", &tL) ;

    
    
    if (fL == sL && sL == tL) {
        printf("This is an equilateral triangle.\n") ;
    }
    else if (fL == sL || sL == tL || fL == tL ) {
        printf("This is an isosceles triangle.\n") ;
    }
    else if (fL != sL && sL != tL && fL != tL) {
        printf("This is a scalene triangle. \n");
    }
    else {
        printf("Not a valid triangle.\n");
    }

    return 0;
}

//q24
#include <stdio.h>

int main() {
    int year ;
    
    printf("Year?\n") ;
    scanf("%d", &year) ;
    
    if (year % 4 == 0) {
        if (year % 100 != 0) {
            printf("%d is a leap year.\n", year) ; 
        }
        else if (year % 400 == 0) {
            printf("%d is a leap year.\n", year) ; 
        }
        else {
            printf("%d is not a leap year.\n", year) ; 
        }
    }
    else {
            printf("%d is not a leap year.\n", year) ; 
    }

    return 0;
}

// q25
#include <stdio.h> // lazy

int main() {
    char c ;

    printf("Input a character:\n"); 
    scanf(" %c", &c);
    
    if ((c >= 0 && c <= 31) || c == 127) {
        printf("Input is non-printable.\n");
    }
    else if (c == 32) {
        printf("Input is Space.\n");
    }
    else if ((c >= 33 && c <= 47) || (c >= 58 && c <= 64) || (c >= 91 && c <= 96) || (c >= 123 && c <= 126)) {
        printf("Input is Symbol.\n");
    }
    else if (c >= 48 && c <= 57) {
        printf("Input is Digit.\n");
    }
    else if (c >= 62 && c <= 90) {
        printf("Input is Uppercase.\n");
    }
    else if (c >= 97 && c <= 122) {
        printf("Input is Lowercase.\n");
    }
    return 0;
}
