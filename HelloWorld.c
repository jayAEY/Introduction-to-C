// #include <stdbool.h>
// #include <stdio.h>
// // #include <string.h> //lets you use string
// #include <math.h>

// int main() {

//   // basic printf
//   // this is a comment
//   /*this is a
//   multi line comment*/

//   /* escape sequences:
//   \m = newling
//   \t = tab
//   \" \" - double quotes
//   \\ \\ print backslash
//   */

//   printf("I \t like\t pizza\n");
//   printf("\\Is very nice!!\\ \n \"-Sun Tzu probably\" \n");
//   printf("1\t2\t3\n4\t5\t6\n7\t8\t9");

//   // variables
//   //   int x;
//   //   x = 123;
//   //   int y = 321;

//   // int age =
//   // 2147483647; // integer whole number (-2,147,483,648 to 2,147,483,647) %d
//   unsigned int age2 = 4294967295; // integer whole number (- 4,294,967,295)
//   %U

//   float gpa =
//       3.141592; // floating point 4 bytes (32bits of precision) 6-7 digits %f
//   double d = 3.141592653589793; // double (long float) 8 bytes (64bits of
//                                 // precision) 15 - 16 digits %1f 6-7 digits
//                                 %lf
//   char grade = 'C';             // single character %c
//   // char name[] = "Bro";          // array of characters %s
//   bool e = true;         // boolean 1 byte 0 = false 1 = true %d
//   char f = 100;          // chars can display -128 to +127 as %d or %c
//   unsigned char g = 255; // 0 to +255 no negatives as %d or %c

//   //   short int h = 32768;          // (-32,768 to +32,767) %d
//   //   unsigned short int i = 65535; // (0 to +65,535) %d
//   short h = 32768;          // decleration without int
//   unsigned short i = 65535; // decleration without int

//   long long int l = 9223372036854775807;            // lld%
//   unsigned long long int m = 18446744073709551610U; // llu% U bypasses
//   warning

//   // extra format specifiers:
//   //%.1 = decimal precision
//   //%11 = minimum field width
//   //%- = left align

//   float item1 = 5.75;
//   float item2 = 10.00;
//   float item3 = 100.99;

//   // constants
//   const float PI = 3.14159; // UPPERCASE is convention but not required

//   // arithmetic
//   //   int x = 5; // note that arithmetic with ints will lose precision
//   //   int y = 2;
//   //   float z = x / (float)y; // convert ints to floats of doubles to keep
//   //   // precision (only needs to be divisor when dividing)
//   //   int zz = x % y;
//   //   x++;
//   //   y--;

//   // augmented assignment operators
//   //   int x = 1;
//   //   x += 1;
//   //   x %= 1;

//   // user input
//   // compile with cmd: gcc <Filename.c> , the run exe
//   char name[25]; // [25] = 25 bytes max. Cant be changed once program is
//   running
//                  // %s
//   int age;

//   // more math #include <math.h>
//   double A = sqrt(9);
//   double B = pow(2, 4);
//   int F = fabs(-100);
//   double G = log(3);
//   double H = tan(45);

//   printf("Hello %s \n", name);
//   // printf("You are %i years old\n", age);
//   printf("Your average grade is %c\n", grade);
//   printf("Your gpa is %0.15f \n", gpa);
//   printf("your real gpa is %0.15lf \n", d);

//   printf("True or false? %d \n", e);
//   printf(" %d \n", f); // char as `numeric;
//   printf(" %c \n", f); // char as ascii;
//   printf(" %d \n", g); // unsigned char;

//   printf(" %d \n", h);    // short int (this one is overflowing);
//   printf(" %d \n", i);    // unsigned short int;
//   printf(" %d \n", age);  // signed int
//   printf(" %u \n", age2); // unsigned int
//   printf(" %lld \n", l);  // signed int
//   printf(" %llu \n", m);  // unsigned int

//   printf("Item 1: $%-8.2f\n", item1); // display 2 digit float
//   printf("Item 2: $%-8.2f\n", item2);
//   printf("Item 3: $%-8.2f\n", item3);

//   //   printf("%f\n", z);
//   //   printf("%d", zz);
//   // printf("%d", x);

//   // printf("\nWhat is your name?");
//   // scanf("\n%s", &name); // reads to whitespace
//   // fgets(name, 25,
//   // stdin); // var name DOES NOT need &. fgets will read whitepaces \n are
//   // automatically included
//   // name[strlen(name) - 1] = '\0'; // removes \n

//   // printf("\nNice to meet you %s", name);

//   // printf("\nhow old are you?");
//   // scanf(" %d", &age); // & = address of operator
//   // printf("You are %d years old", age);

//   printf("\n%lf", A);
//   printf("\n%lf", B);
//   printf("\n%d", F);
//   printf("\n%lf", G);
//   printf("\n%lf", H);

//   return 0;
// }

// TIME :58.04

// // function for returning circumference
// #include <stdio.h>
// int main() {

//   const double PI = 3.14159;
//   double radius;
//   double circumference;
//   double area;

//   printf("\nEnter the radius of a circle: ");
//   scanf("%lf", &radius);

//   circumference = 2 * PI * radius;
//   area = PI * radius * radius;

//   printf("\ncircumference: %lf", circumference);
//   printf("\narea: %lf", area);

//   return 0;
// }

// // function for returning hypotenuse
// #include <math.h>
// #include <stdio.h>

// int main() {
//   double A;
//   double B;
//   double C;

//   printf("Enter side A:");
//   scanf("%lf", &A);

//   printf("Enter side B:");
//   scanf("%lf", &B);

//   C = sqrt(A * A + B * B);

//   printf("Side C: %lf", C);

//   return 0;
// }

// #include <stdio.h>
// int main() {
// // if example
// int age;
// printf("\nEnter your age: ");
// scanf("%d", &age);

// if (age >= 18) {
//   printf("You are now signed up!");
// } else if (age < 0) {
//   printf("You haven't been born yet!");
// } else if (age == 0) {
//   printf("You were just born!");
// } else {
//   printf("You are too young to sign up!");
// }
// return 0;

//   // switch statement example
//   char grade;
//   printf("\n Enter a letter grade: ");
//   scanf("%c", &grade);

//   switch (grade) {
//   case 'A': // NOTE single commas are needed
//     printf("Perfect!\n");
//     break;
//   case 'B':
//     printf("You did good!\n");
//     break;
//   case 'C':
//     printf("You did okay!\n");
//     break;
//   case 'D':
//     printf("At least it's not an F!\n");
//     break;
//   case 'F':
//     printf("YOU FAILED!\n");
//     break;
//   default:
//     printf("Please enter only valid grades");
//   }
//   return 0;
// }

// // temperature conversion
// #include <ctype.h> //for string functions
// #include <stdio.h>

// int main() {
//   char unit;
//   float temp;

//   printf("\nIs the temperature in (F) or (C)?");
//   scanf("%c", &unit);

//   unit = toupper(unit); // to take into account lower case

//   if (unit == 'C') {
//     printf("\nEnter the temp in Celsius: ");
//     scanf("%f", &temp);
//     temp = (temp * 9 / 5) + 32;
//     printf("The temp in Farenheit is %.1f", temp);
//   } else if (unit == 'F') {
//     printf("\nEnter the temp in Farenheit: ");
//     scanf("%f", &temp);
//     temp = ((temp - 32) * 5) / 9;
//     printf("The temp in Celsius is %.1f", temp);
//   } else {
//     printf("\n%cis not valid!", unit);
//   }

//   return 0;
// }

// // simple calculator
// #include <stdio.h>

// int main() {
//   char operator;
//   double num1;
//   double num2;
//   double result;

//   printf("\n Enter an operator (+ - * /): ");
//   scanf("%c", &operator);

//   printf("\nEnter the first number: ", num1);
//   scanf("%lf", &num1);

//   printf("\nEnter the second number: ", num2);
//   scanf("%lf", &num2);

//   switch (operator) {
//   case '+':
//     result = num1 + num2;
//     printf("\nresult: %.2lf", result);
//     break;
//   case '-':
//     result = num1 - num2;
//     printf("\nresult: %.2lf", result);
//     break;
//   case '/':
//     result = num1 / num2;
//     printf("\nresult: %.2lf", result);
//     break;
//   case '*':
//     result = num1 * num2;
//     printf("\nresult: %.2lf", result);
//     break;
//   default:
//     printf("\n%c is not valid", operator);
//   }
//   return 0;
// }
