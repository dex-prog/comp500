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

#include <stdio.h>

char to_lowercase(char c);

int main()
{
    char c;

    printf("Please input a letter: \n");
    scanf(" %c", &c);

    char result = to_lowercase(c);

    if (result == '\x00') {
        printf("%c's lowercase is \\x00\n", c);
    } else {
        printf("%c's lowercase is %c\n", c, result);
    }

    return 0;
}

char to_lowercase(char c)
{
    if (c >= 'A' && c <= 'Z') {
        return c + 32;  
    } else if (c >= 'a' && c <= 'z') {
        return '\x00';      
    } else {
        return '\x00';  
    }
}


//q9

#include <stdio.h>

int identify_minimum_value(int num1, int num2);

int main()
{
    int num1, num2;

    printf("Please input number 1: \n");
    scanf("%d", &num1);
    
    printf("Please input number 2: \n");
    scanf("%d", &num2);
    
    int min_num = identify_minimum_value(num1, num2);
    
    printf("The minimum number of %d and %d is %d\n", num1, num2, min_num);
    
    return 0;
}

int identify_minimum_value(int num1, int num2) {
    if (num1 < num2) {
        return num1; 
    } else if (num2 < num1) {
        return num2; 
    } else {
        return num1; 
    }
}



//q10


//q11
#include <stdio.h>

// TODO: Declare compute_bill
float compute_bill(float starter_price, float main_price, float dessert_price);

// TODO: Declare print_bill
void print_bill(float starter_price, float main_price, float dessert_price);

int main(void)
{
	float starter_price = 0.0f;
	float main_price = 0.0f;
	float dessert_price = 0.0f;

	printf("Starter price? ");
	scanf("%f", &starter_price);

	printf("Main price? ");
	scanf("%f", &main_price);

	printf("Dessert price?");
	scanf("%f", &dessert_price);
    
	printf("\n");

	print_bill(starter_price, main_price, dessert_price);

	return 0;
}

// TODO: Define compute_bill
float compute_bill(float starter_price, float main_price, float dessert_price)
{
	return starter_price + main_price + dessert_price;
}
// TODO: Define print_bill
void print_bill(float starter_price, float main_price, float dessert_price)
{
    printf("Starter: $%.2f\n", starter_price);
    printf("Main:    $%.2f\n", main_price);
    printf("Dessert: $%.2f\n", dessert_price);
    
    printf("---------------\n");
    printf("Total:   $%.2f\n", compute_bill(starter_price, main_price, dessert_price));
}

//q12

#include <stdio.h>

// TODO: Declare compute_bill
float compute_bill(int num_nights, float room_rate, float mini_bar_total);

// TODO: Declare print_bill
void print_bill(int num_nights, float room_rate, float mini_bar_total);

int main(void)
{
	int num_nights;
	float room_rate = 0.0f;
	float mini_bar_total = 0.0f;

	printf("Number of nights?\n");
	scanf("%d", &num_nights);

	printf("Room rate?\n");
	scanf("%f", &room_rate);

	printf("Minibar?\n");
	scanf("%f", &mini_bar_total);
    
	printf("\n");

	print_bill(starter_price, room_rate, mini_bar_total);

	return 0;
}

// TODO: Define compute_bill
float compute_bill(int num_nights, float room_rate, float mini_bar_total)
{
	return (num_nights × room_rate) + mini_bar_total;
}
// TODO: Define print_bill
void print_bill(int num_nights, float room_rate, float mini_bar_total)
{
    printf("Starter: %d\n", num_nights);
    printf("Main:    $%.2f\n", room_rate);
    printf("Dessert: $%.2f\n", mini_bar_total);
    
    printf("---------------\n");
    printf("Total:   $%.2f\n", compute_bill(num_nights, room_rate, mini_bar_total));
}

//q13

#include <stdio.h>

char to_upper (char input);

int main() {
    
    char input; //cap = to_upper(input);
    
    printf("Please enter a letter: ");
    scanf(" %c", &input);
    
    printf("%c", to_upper(input));
    
    return 0;
}

char to_upper(char input) {
    if (input >= 'a' && input <= 'z') {
        return input - 32;
    }
    else {
        return '\x00';
    }
}

//q14

#include <stdio.h>

int nand_gate(int a, int b);
int nor_gate(int a, int b);
int xor_gate(int a, int b);
int xnor_gate(int a, int b);

int main(void)
{
    int a, b;

    printf("a b           a NAND b    a NOR b    a XOR b    a XNOR b\n");

    for (a = 0; a <= 1; a++) {
        for (b = 0; b <= 1; b++) {
            printf("%d %d           %d           %d          %d          %d\n",
                   a, b,
                   nand_gate(a, b),
                   nor_gate(a, b),
                   xor_gate(a, b),
                   xnor_gate(a, b));
        }
    }

    return 0;
}

int nand_gate(int a, int b) {
    return !(a && b);
}

int nor_gate(int a, int b) {
    return !(a || b);
}

int xor_gate(int a, int b) {
    return (a || b) && !(a && b);
}

int xnor_gate(int a, int b) {
    return !xor_gate(a, b);
}

//q15

#include <stdio.h>

char convert_percent_to_grade(float percent);

int main() {
    float percent;

    printf("What's the percentage:\n");
    scanf("%f", &percent);

    char grade = convert_percent_to_grade(percent);

        printf("%.2f%% is %c Grade\n", percent, grade);

    return 0;
}

char convert_percent_to_grade(float percent) {
    if (percent >= 80 && percent <= 100) {
        return 'A';
    } 
    else if (percent >= 65 && percent < 80) {
        return 'B';
    } 
    else if (percent >= 50 && percent < 65) {
        return 'C';
    } 
    else if (percent >= 0 && percent < 50) {
        return 'D';
    } 
    else {
        return 'X'; 
    }
}

//q16
#include <stdio.h>

    char is_vowel(char input);

int main() {

    char input;

    printf("Enter:\n");
    scanf("%c", &input);

    printf("Is it a vowel: %c", is_vowel(input));
    return 0;
}

char is_vowel(char input) {
    if (input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u' ||
        input == 'A' || input == 'E' || input == 'I' || input == 'O' || input == 'U') {
        return '1';
    } else {
        return '0';
    }
}

//q17

#include <stdio.h>

    char is_letter(char input);

int main() {

    char input;

    printf("Enter:\n");
    scanf("%c", &input);

    printf("Is it a letter: %c", is_letter(input));
    return 0;
}

char is_letter(char input) {
    if ((input >= 'A' && input <= 'Z') || (input >= 'a' && input <= 'z')) {
        return '1';
    } else {
        return '0';
    }
}

//q18

#include <stdio.h>

    char is_digit(char input);

int main() {

    char input;

    printf("Enter:\n");
    scanf("%c", &input);

    printf("Is it a digit: %c", is_digit(input));
    return 0;
}

char is_digit(char input) {
    if (input >= '0' && input <= '9') {
        return '1';
    } else {
        return '0';
    }
}

//q19

#include <stdio.h>

    char is_hex_digit(char input);

int main() {

    char input;

    printf("Enter:\n");
    scanf("%c", &input);

    printf("Is it a hex digit: %c", is_hex_digit(input));
    return 0;
}

char is_hex_digit(char input) {
    if ((input >= '0' && input <= '9') ||
        (input >= 'A' && input <= 'F') ||
        (input >= 'a' && input <= 'f')) {
        return '1';
    } else {
        return '0';
    }
}

//q20

#include <stdio.h>

    int is_positive(int input);

    int is_negative(int input);

    int is_zero(int input);

int main() {

    int input;

    printf("Enter:\n");
    scanf("%d", &input);

    printf("Calling is_positive: %d\n", is_positive(input));
    printf("Calling is_negative: %d\n", is_negative(input));
    printf("Calling is_zero: %d\n", is_zero(input));
    return 0;
}

int is_positive(int input) {
    if (input > 0) {
        return 1;
    } else {
        return 0;
    }
}

int is_negative(int input) {
    if (input < 0) {
        return 1;
    } else {
        return 0;
    }
}

int is_zero(int input) {
    if (input == 0) {
        return 1;
    } else {
        return 0;
    }
}

//q21

#include <stdio.h>

void draw_ascii_box(char horizontal_char, char vertical_char, char corner_char, int width, int height) {
    printf("%c", corner_char);
    for (int i = 0; i < width - 2; i++) {
        printf("%c", horizontal_char);
    }
    printf("%c\n", corner_char);

    for (int j = 0; j < height - 2; j++) {
        printf("%c", vertical_char);
        for (int i = 0; i < width - 2; i++) {
            printf(" ");
        }
        printf("%c\n", vertical_char);
    }

    printf("%c", corner_char);
    for (int i = 0; i < width - 2; i++) {
        printf("%c", horizontal_char);
    }
    printf("%c\n", corner_char);
}

int main() {
    char horizontal_char, vertical_char, corner_char;
    int width, height;

    // Just read them silently
    scanf(" %c %c %c %d %d", &horizontal_char, &vertical_char, &corner_char, &width, &height);

    draw_ascii_box(horizontal_char, vertical_char, corner_char, width, height);
    return 0;
}

//q22

#include <stdio.h>

void draw_triangle(int height) {
    for (int i = 1; i <= height; i++) {
        for (int j = 0; j < height - i; j++) {
            printf(" ");
        }

        if (i < height) {
            printf("/");  // Left edge
            if (i > 1) {
                for (int k = 0; k < (2 * i - 3); k++) {
                    printf(" ");
                }
                printf(" \\");  // Right edge — escaped properly
            } else {
                printf("\\");  // Top point
            }
            printf("\n");
        } else {
            printf("/");
            for (int k = 0; k < (2 * i - 3); k++) {
                printf("_");
            }
            if (height != 1) {
                printf("_");
                
            }
            printf("\\\n");
        }
    }
}

int main() {
    int height;
    printf("enter height: \n");
    scanf("%d", &height);
    draw_triangle(height);
    return 0;
}

//q23

#include <stdio.h>

void draw_inverted_triangle(int height) {
    for (int k = 0; k < (2 * height); k++) {
                printf("_");
            }
            printf("\n");
    for (int i = 1; i <= height; i++) {
    
        for (int j = 0; j < i - 1; j++) {
            printf(" ");
        }

        if (i < height) {
            printf("\\");  // Left edge
            if (i > 1) {
                for (int k = 0; k < (2 * (height - i)); k++) {
                    printf(" ");
                }
                printf("/");  // Right edge — escaped properly
            } else {
                for (int k = 0; k < (2 * (height - i) ); k++) {
                    printf(" ");
                }
                printf("/");  // Top point
            }
            printf("\n");
        } else {
            printf("\\");
            printf("/\n");
        }
    }
    
}

int main() {
    int height;
    printf("enter height: \n");
    scanf("%d", &height);
    draw_inverted_triangle(height);
    return 0;
}


//q24
#include <stdio.h>

void print_nozzle(int height);
void print_body(int height, int width);
void print_logo(int width);

int main(void)
{
	int body_width, body_height;

    // ask for and read the rocket body width, validating that it is at least 6
    printf("Rocket body width (minimum 6)? \n");
    scanf("%d", &body_width);
    while (body_width < 6) {
        printf("Width must be at least 6. Please enter a valid width: ");
        scanf("%d", &body_width);
    }
    
    // ask for and read the rocket body height, validating that it is non-negative
    printf("Rocket body height? \n");
    scanf("%d", &body_height);
    while (body_height < 0) { 
        printf("Height cannot be negative. Please enter a valid height: ");
        scanf("%d", &body_height);
    }
    
    int width = body_width;
	int height = body_height;
	
	print_nozzle(width/2);
	printf("+");
	for (int i = 0; i < width; i++) {
        printf("-");
        }
        printf("+\n");
	print_body(height, width);
	print_logo(width);
	printf("+");
	for (int i = 0; i < width; i++) {
        printf("-");
        }
        printf("+\n");
	print_body(height, width);

	print_nozzle(width/2);
	return 0;
}

void print_nozzle(int height){
    for (int i = 1; i <= height; i++) {
        for (int j = 0; j < height - i + 1; j++) {
            printf(" ");
        }

        if (i < height) {
            printf("/");
            if (i > 1) {
                for (int k = 0; k < (2 * i  - 3); k++) {
                    printf(" ");
                }
                printf(" \\");
            } else {
                printf("\\");
            }
            printf("\n");
        } else {
            printf("/");
            for (int k = 0; k < (2 * i - 3); k++) {
                printf(" ");
            }
            if (height != 1) {
                printf(" ");
                
            }
            printf("\\\n");
        }
    }
}
void print_body(int height, int width){
    for (int j = 0; j < height; j++) {
        printf("|");
        for (int i = 0; i < width; i++) {
            printf(" ");
        }
        printf("|\n");
    }
        printf("+");
    for (int i = 0; i < width; i++) {
        printf("-");
        }
        printf("+\n");
}
void print_logo(int width) {
    const char *line1 = "N";
    const char *line2 = "Z";
    const char *line3 = "Rocket";

    int len1 = 1;          
    int len2 = 1;     
    int len3 = 6;          

    int pad1 = (width - len1) / 2;
    int pad2 = (width - len2) / 2;
    int pad3 = (width - len3) / 2;

    // First line
    printf("|");
    for (int i = 0; i < pad1 - 1; i++) printf(" ");
    printf("%s", line1);
    for (int i = 0; i < width - pad1 - len1 + 1; i++) printf(" ");
    printf("|\n");

    // Second line
    printf("|");
    for (int i = 0; i < pad2 + 1; i++) printf(" ");
    printf(" %s", line2);
    for (int i = 0; i < width - pad2 - len2 - 2; i++) printf(" ");
    printf("|\n");

    // Third line
    printf("|");
    for (int i = 0; i < pad3; i++) printf(" ");
    printf("%s", line3);
    for (int i = 0; i < width - pad3 - len3; i++) printf(" ");
    printf("|\n");
}

//q25
#include <stdio.h>
