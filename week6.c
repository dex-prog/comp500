//week6comp500
//q1
#include <stdio.h>

    int main() {
        int X;
        printf("Enter a number X: \n");
        scanf("%d", &X);
    
        for (int n = 0; n < X; n++) {
            if (n > 4) printf("%d\n", n);
            else printf("%d\n", 9 - n);
        }
        return 0;
    }
//q2


#include <stdio.h>

int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) printf("%d is even.\n", i);
        else printf("%d is odd.\n", i);
    }
    return 0;
}
//q3
#include <stdio.h>

int main() {
    char word[100];
    int count = 0;

    printf("Input a word: \n");
    scanf("%s", word);

    while (word[count] != '\0') count++;

    printf("%s is %d characters in length.\n", word, count);
    return 0;
}

//q4
#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];
    
    printf("Input a word:\n"); 
        scanf("%s", a);
    printf("Input another word: \n"); 
        scanf("%s", b);

    if (strcmp(a, b) == 0) 
        printf("The words are identical!\n");
    
    else 
        printf("The words are different!\n");
    
    return 0;
}

//q5
#include <stdio.h>

int main() {
    int arr[5], key, found = -1;

    for (int i = 0; i < 5; i++) {
        printf("Input %d? \n", i);
        scanf("%d", &arr[i]);
    }

    printf("Search for? \n");
    scanf("%d", &key);

    for (int i = 0; i < 5; i++) {
        if (arr[i] == key) {
            found = i;
            break;
        }
    }
    if (found == -1) printf("Not found\n");
    else printf("%d found at element %d\n", key, found);
    return 0;
}

//q6
#include <stdio.h>

int main() {
    int number;
    printf("Enter a whole number:\n"); 
        scanf("%d", &number);
    for (int i = 1; i <= number; i++) {
        if (i % 15 == 0) printf("FizzBuzz\n");
        else if (i % 5 == 0) printf("Buzz\n");
        else if (i % 3 == 0) printf("Fizz\n");
        else printf("%d\n", i);
    }
    return 0;
}

//q7
#include <stdio.h>

int main() {
    int rows;
    printf("Rows? \n");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 8; j++) {
            if ((i + j) % 2 == 0) printf("black ");
            else printf("white ");
        }
        printf("\n");
    }
    return 0;
}

//q8
#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Enter a whole number: \n");
    scanf("%d", &n);

    int start = (n > 0) ? 1 : n;
    int end = (n > 0) ? n : 1;

    for (int i = start; i <= end; i++) {
        if (i % 7 == 0) count++;
    }

    if (n > 0) {
        printf("%d numbers between %d and %d are \ndivisible by seven with no remainder.\n", count, start, end);
    } else {
        printf("%d numbers between %d and %d are \ndivisible by seven with no remainder.\n", count, end, start);
    }

    return 0;
}

//q9
#include <stdio.h>

int main() {
    char ch;
    do {
        printf("Type any key (~ to quit)...\n");
        scanf(" %c", &ch);

        if (ch >= '0' && ch <= '9') {
            printf("> That was a digit.\n\n");
        }
        else if (ch >= 'a' && ch <= 'z') {
            printf("> That was a lowercase letter.\n\n");
        }
        else if (ch >= 'A' && ch <= 'Z') {
            printf("> That was a uppercase letter.\n\n");
        }
        else 
        {printf("> That was something else!\n\n");
            
        }

    } while (ch != '~');
    

    printf("All done! Goodbye!\n");
    return 0;
}

//q10
 
#include <stdio.h>

int main() {
    int num, max = -9999, entered = 0;

    do {
        printf("Enter a number (0 to quit):\n");

        scanf("%d", &num); 
        if (num == 0) break; 
        
        if (num > max) max = num;
        
        entered = 1; 

    } while (1); 

    if (entered == 1) {
        printf("\nThe highest number was %d.\n", max);
    } 
    
    else {
        printf("\nNo numbers entered!\n");
    }

    return 0;
}

//q11
#include <stdio.h>

int main() {
    int num, entered = 0, sum = 0;

    do {
        printf("Enter a number (0 to quit):\n");

        scanf("%d", &num); 
        if (num == 0) break; 
        
        sum += num; 
        
        entered = 1; 

    } while (1); 

    if (entered == 1) {
        printf("\nThe tally is: %d\n", sum);
    } 
    else {
        printf("\nThe tally is: 0\n");
    }
    return 0;
}

//q12
#include <stdio.h>

int main() {
    char str[80];
    printf("> \n");
    fgets(str, sizeof(str), stdin); 

    for (int i = 0; str[i] != '\0'; i++) { 
        switch (str[i]) {
            case 'A': case 'a': str[i] = '$'; break;
            case 'E': case 'e': str[i] = '#'; break;
            case 'I': case 'i': str[i] = '@'; break;
            case 'O': case 'o': str[i] = '*'; break;
            case 'U': case 'u': str[i] = '='; break;
        }
    }
    printf("%s", str); 
    return 0;
}

//q13

#include <stdio.h>

int main() {
    char word[21];
    printf("Please enter your name:\n");
    fgets(word, sizeof(word), stdin);

    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] >= 'a' && word[i] <= 'z') {
            word[i] = word[i] - (32);
        }
    }

    printf("%s\n", word);
    return 0;
}

//q14
#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];
    int count1[26] = {0}, count2[26] = {0};

    printf("Word 1: \n"); scanf("%s", a);
    printf("Word 2: \n\n"); scanf("%s", b);

    for (int i = 0; a[i]; i++) count1[a[i]-'a']++;
    for (int i = 0; b[i]; i++) count2[b[i]-'a']++;

    int match = 1;
    for (int i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) match = 0;
    }
    if (match) printf("YES! %s and %s\n", a, b);
    else printf("NO!\n");
    return 0;
}

//q15
#include <stdio.h>

int main() {
    char text[100], ch;
    int count = 0;

    printf("Enter some text: \n");
    scanf(" %[^\n]", text);

    printf("Count which character? \n");
    scanf(" %c", &ch);

    for (int i = 0; text[i]; i++) {
        if (text[i] == ch) count++;
    }
    if (count >= 2 || count < 1) {
    printf("'%c' appears %d times in \"%s\"\n", ch, count, text);
    }
    else if (count == 1) {
    printf("'%c' appears %d time in \"%s\"\n", ch, count, text);
    }
    return 0;
}

//q16
#include <stdio.h>

int main() {
    int w, h;
    printf("Width? \n"); 
    scanf("%d", &w);
    
    printf("Height? \n"); 
    scanf("%d", &h);

    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }
    return 0;
}

//q17
#include <stdio.h>

int main() {
    int h;
    printf("Height? \n\n");
    scanf("%d", &h);

    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}

//q18
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: \n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n-i; j++) printf(" ");
        for (int k = 1; k <= i; k++) printf("#");
        printf("\n");
    }
    return 0;
}

//q19
#include <stdio.h>

int main() {
    int n;
    printf("Height?\n\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n-i; j++) printf(" ");
        for (int k = 1; k <= i; k++) printf("%d", i);
        printf("\n");
    }
    return 0;
}

//q20
#include <stdio.h>

int main() {
    int n;
    printf(">\n");
    scanf("%d", &n);

    int mid = (n + 1) / 2;
    
    if (n == 0) {
        printf("Too small!");
    }
    
    else {
    for (int i = 1; i <= n; i++) {
        int stars = i <= mid ? (2 * i - 1) : (2 * (n - i + 1) - 1);
        int spaces = (n - stars) / 2;
        for (int j = 0; j < spaces; j++) printf(" ");
        for (int k = 0; k < stars; k++) printf("*");
        printf("\n");
    }
    }
    return 0;
}

//q21
#include <stdio.h>

int main() {
    char word[50];
    int valid;

    do {
        valid = 1;
        printf("What is your first name?\n\n");
        fgets(word, sizeof(word), stdin);
        
        int len = 0;
        while (word[len] != '\0') {
            if (word[len] == '\n') word[len] = '\0';
            len++;
        }

        if (!(word[0] >= 'A' && word[0] <= 'Z')) {
            printf("Invalid input!\n");
            valid = 0;
            continue;
        }

        for (int i = 1; word[i] != '\0'; i++) {
            if (!((word[i] >= 'a' && word[i] <= 'z'))) {
                printf("Invalid input!\n");
                valid = 0;
                break;
            }
        }
    } while (!valid);

    printf("%s is a valid first name.\n", word);
    return 0;
}


//q22
#include <stdio.h>
#include <string.h>

int main() {
    char input[50];
    int valid;

    printf("Please input the item to identify:\n");
    scanf("%49s", input);

    do {

        valid = 1;
        if (strcmp(input, "apple") == 0 ||
            strcmp(input, "banana") == 0 ||
            strcmp(input, "orange") == 0 ||
            strcmp(input, "melon") == 0 ||
            strcmp(input, "tomato") == 0) {
            printf("%s is fruit.\n", input);
        }
        else if (strcmp(input, "carrot") == 0 ||
                 strcmp(input, "potato") == 0 ||
                 strcmp(input, "spinach") == 0 ||
                 strcmp(input, "onion") == 0 ||
                 strcmp(input, "broccoli") == 0) {
            printf("%s is vegetable.\n", input);
        }
        else {
            printf("%s is not a fruit or vegetable, try again: \n", input);
            scanf("%49s", input);
            valid = 0;
        }
    } while (!valid);

    return 0;
}

//q23
#include <stdio.h>
#include <string.h>

int is_primary(const char *color) {
    return (strcmp(color, "Red") == 0 ||
            strcmp(color, "Blue") == 0 ||
            strcmp(color, "Yellow") == 0);
}

int main() {
    char c1[50], c2[50];

    // Get first valid primary colour
    do {
        printf("First colour?\n");
        scanf("%49s", c1);
        if (!is_primary(c1)) {
            printf("\n%s is not a valid primary colour!!!\n\n", c1);
        }
    } while (!is_primary(c1));

    // Get second valid primary colour
    do {
        printf("Second colour?\n\n");
        scanf("%49s", c2);
        if (!is_primary(c2)) {
            printf("%s is not a valid primary colour!!!\n\n", c2);
        }
    } while (!is_primary(c2));

    // Output result (example: just print the mix)
    if ((strcmp(c1, "Red") == 0 && strcmp(c2, "Blue") == 0) ||
        (strcmp(c1, "Blue") == 0 && strcmp(c2, "Red") == 0)) {
        printf("%s and %s mix to make Violet\n", c1, c2);
    } else if ((strcmp(c1, "Red") == 0 && strcmp(c2, "Yellow") == 0) ||
               (strcmp(c1, "Yellow") == 0 && strcmp(c2, "Red") == 0)) {
        printf("%s and %s mix to make Orange\n", c1, c2);
    } else if ((strcmp(c1, "Blue") == 0 && strcmp(c2, "Yellow") == 0) ||
               (strcmp(c1, "Yellow") == 0 && strcmp(c2, "Blue") == 0)) {
        printf("%s and %s mix to make Green\n", c1, c2);
    } else {
        printf("%s and %s mix to make %s\n", c1, c2, c1);
    }

    return 0;
}

//q24

