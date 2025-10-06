//week7

//

//testing how functions and arguments work

#include <stdio.h>

void message(char x[], int y)
{
    printf("this is a test message. you input %d and %s", x, y);
}

int main()
{
        int test1;
        char test2[20];

    printf("input int:\n");
    scanf("%d", &test1);

    printf("input char:\n");
    scanf("%s", &test2);


    message(test1, test2);

    return 0;
}

//q1

#include <stdio.h>

void print_top();
void print_middle();
void print_bottom();

int main() {
    int repeats;

    printf("How many middle parts?\n");
    scanf("%d", &repeats);

    print_top();
    for (int i = 0; i < repeats; i++) {
        print_middle();
    }
    print_bottom();

    return 0;
}

void print_top() {
    printf("/\\/\\/\\/\\/\\\n");
}

void print_middle() {
    printf("\\        /\n/        \\\n");
}

void print_bottom() {
    printf("\\/\\/\\/\\/\\/\n");
}

//q2

#include <stdio.h>

void print_quadratic(int a, int b, int c)
{
    printf("%dx^2 ", a);
    
    if (b >= 0)
        printf("+ %dx ", b);
    else
        printf("- %dx ", -b);
    
    if (c >= 0)
        printf("+ %d\n", c);
    else
        printf("- %d\n", -c);
}

int main() {
    int a, b, c;
    
    printf("Enter a:\n");
    scanf("%d", &a);
    
    printf("Enter b:\n");
    scanf("%d", &b);
    
    printf("Enter c:\n");
    scanf("%d", &c);
    
    print_quadratic(a, b, c);
    
    return 0;
}

//q3

#include <stdio.h>

void print_colour(int input)
{
    if (input <= 700 && input >= 635) {
        printf("%dnm is Red", input);
    }    
    else if (input <= 634 && input >= 590) {
        printf("%dnm is Orange", input);   
    }
    
    else if (input <= 589 && input >= 565) {
        printf("%dnm is Yellow", input);   
    }
    else if (input <= 564 && input >= 520) {
        printf("%dnm is Green", input);   
    }
    else if (input <= 519 && input >= 450) {
        printf("%dnm is Cyan", input);   
    }
    else if (input <= 449 && input >= 380) {
        printf("%dnm is Violet", input);   
    }
    else if (input > 700 || input < 380) {
        printf("%dnm is invisible", input);
    }
    
}

int main() {
    int input;
    
    printf("Enter a wavelength in nanometers:\n");
    scanf("%d", &input);
    
    print_colour(input);


    return 0;
}

//q4

#include <stdio.h>

void print_assessments(int input)
{
    if (input <= 6 && input >= 1) {
        printf("\nReporting Journal\n");
        printf("Practical Test 1\n");
        printf("Practical Test 2\n");
        printf("Practical Test 3\n");
        printf("Final Practical Exam\n");    }    
    else if (input <= 8 && input >= 1) {
        printf("\nReporting Journal\n");
        printf("Practical Test 2\n");
        printf("Practical Test 3\n");
        printf("Final Practical Exam\n");   
    }
    
    else if (input <= 9 && input >= 1) {
        printf("\nReporting Journal\n");
        printf("Practical Test 3\n");
        printf("Final Practical Exam\n");   
    }
    
    else if (input == 10){
        printf("\nReporting Journal\n");
        printf("Final Practical Exam\n");
    }
    
    else if (input >= 0 || input < 10) {
        printf("Invalid Learning Outcome.");
    }
}

int main() {
    int input;
    
    printf("Learning Outcome?\n");
    scanf("%d", &input);
    
    
    print_assessments(input);
    

    return 0;
}

//q5

#include <stdio.h>

void print_equal(int num1, int num2);
void print_largest();
void print_smallest();

int main() {
    int num1, num2;
    
    printf("Please enter the first number:\n");
    scanf("%d", &num1);
    
    printf("Please enter the second number:\n");
    scanf("%d", &num2);

    
    print_equal(num1, num2);
    print_largest(num1, num2);
    print_smallest(num1, num2);
    
    return 0;
}

void print_equal(int num1, int num2)
{
    if (num1 == num2){
        printf("Equal [%d vs %d]\n", num1, num2);
        }
    else if (num1 != num2)
        {
        printf("Not Equal [%d vs %d]\n", num1, num2);
        }
}
    
void print_largest(int num1, int num2)
{
        if (num1 >= num2){
        printf("%d is largest [%d vs %d]\n", num1, num1, num2);
        }
    else if (num1 <= num2)
        {
        printf("%d is largest [%d vs %d]\n", num2, num1, num2);
        }
}
    
void print_smallest(int num1, int num2)
{
        if (num1 <= num2){
        printf("%d is smallest [%d vs %d]\n", num1, num1, num2);
        }
    else if (num1 >= num2)
        {
        printf("%d is smallest [%d vs %d]\n", num2, num1, num2);
        }
}



//q6

#include <stdio.h>
#include <math.h>


int calculate_cube(int num);

int main() {
	int num;

	printf("Please input a whole number: \n\n");
    scanf("%d", &num);

	printf("%d^3 = %d\n", num, calculate_cube(num));

	return 0;
}

int calculate_cube(int num)
{
    return pow(num, 3);
}


//q7
#include <stdio.h>

float find_maximum(float num1, float num2, float num3);

int main()
{
    float num1, num2, num3;

    printf("Please input the first number: \n");
    scanf("%f", &num1);

    printf("Please input the second number: \n");
    scanf("%f", &num2);

    printf("Please input the third number: \n");
    scanf("%f", &num3);

    float max_result = find_maximum(num1, num2, num3);
    printf("The maximum number is %f\n", max_result);

    return 0;
}

float find_maximum(float num1, float num2, float num3) {
    float max = num1;              // assume num1 is the largest
    if (num2 > max) max = num2;    // if num2 is larger, update max
    if (num3 > max) max = num3;    // if num3 is larger, update max
    return max;
}

//q8




