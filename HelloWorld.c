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

// #include <stdbool.h> // needed for booleans
// #include <stdio.h>

// int main() {
//   // logical operators
//   float temp = 16;
//   bool sunny = 1;

//   if ((temp >= 0 && temp <= 30 && sunny && temp != 16) ||
//       temp == 69) { // note var name, name == true and name = 1 are all true
//     printf("\nThe weather is good");
//   } else {
//     printf("\nThe weather is bad");
//   }

//   return 0;
// }

// // functions, args and parameters
// #include <stdio.h>
// void birthday(char name[], int age) {
//   // printf("!\nHappy Birthday to you");
//   // printf("!\nHappy Birthday to you");
//   // printf("!\nHappy Birthday dear ..... YOU!");
//   // printf("!\nHappy Birthday to you\n");
//   printf("\nHappy birthday dear %s!", name);
//   printf("\nYou are %d years old", age);
// }

// int main() {
//   char name[] = "Ren";
//   int age = 17;

//   birthday(name, age);

//   return 0;
// }

// // return statement
// #include <stdio.h>
// double square(double x) {
//   // double result = x * x;
//   // return result;
//   return x * x; // be sure to return same type as function
// }

// int main() {

//   double x = square(8);
//   printf("%lf", x);

//   return 0;
// }

// ternary operator
// #include <stdio.h>
// int findMax(int x, int y) { return (x > y) ? x : y; }

// int main() {
//   int max = findMax(10, 4);

//   printf("%d", max);
//   return 0;
// }

// function prototype - function declaration without body
// ensures calls are made with correct arguments
// #include <stdio.h>

// void hello(char[], int);

// int main() {
//   char name[] = "Bro";
//   int age = 21;

//   hello(name, age);

//   return 0;
// };

// void hello(char name[], int age) {
//   printf("\nHello %s", name);
//   printf("\nYou are %d years old", age);
// };

// string functions
// #include <stdio.h>
// #include <string.h>

// int main() {
//   char string1[] = "Bro";
//   char string2[] = "Code";

//   // strlwr(string1);
//   // strupr(string1);
//   // strcat(string1, string2);
//   // strncat(string1, string2, 2); //appends n characters from 2 to 1
//   // strcpy(string1, string2); //replaces 1 with 2
//   // strncpy(string1, string2, 1); // replaces n letters in 1 with 2

//   // strset(string1, '?');     // sets all characters to given character
//   // strnset(string1, '?', 2); // sets first n characters to given character
//   // strrev(string1);

//   // int result = strlen(string1); // returns strlength as int
//   // int result = strcmp(string1, string2); // compares all characters
//   // int result = strncmp(string1, string2, 1); // compares n characters
//   int result = strcmpi(string1, string2); // compares all ignoring case
//   // int result = strnicmp(string1, string2, 1); // compares all n ignoring
//   case

//   // printf("\n%s", string1);
//   // printf("\n%d", result);
//   printf("\n%d", result); // 0 = true

//   return 0;
// };

// // for loop
// #include <stdio.h>

// int main() {
//   for (int i = 1; i >= -100; i -= 20) {
//     printf("%d\n", i);
//   }

//   return 0;
// }

// // while loop
// #include <stdio.h>
// #include <string.h>

// int main() {
//   char name[25];

//   printf("\nWhat's your name?: ");
//   fgets(name, 25, stdin);        // scanf stops at white spaces
//   name[strlen(name) - 1] = '\0'; // gets rid of new line at end of input

//   while (strlen(name) == 0) {
//     printf("\nYou didn't enter your name");
//     printf("\nWhat's your name?: ");
//     fgets(name, 25, stdin); // scanf stops at white spaces
//     name[strlen(name) - 1] = '\0';
//   }

//   printf("hello %s", name);

//   return 0;
// }

// // dowhile loop
// // always executes once then checks condition
// // while checks condition then executes if condition is true
// #include <stdio.h>
// int main() {
//   int number = 0;
//   int sum = 0;

//   // while (number > 0) {
//   //   // will not execute because condition is false
//   //   printf("Enter a # above 0 : \n");
//   //   scanf("%d", &number);
//   //   if (number > 0) {
//   //     sum += number;
//   //   }
//   // }
//   do {
//     printf("Enter a # above 0 : \n");
//     scanf("%d", &number);
//     if (number > 0) {
//       sum += number;
//     }
//   } while (number > 0);

//   printf("sum: %d", sum);

//   return 0;
// }

// nested loops
// #include <stdio.h>
// int main() {

//   int rows;
//   int columns;
//   char symbol;

//   printf("\nEnter # of rows: ");
//   scanf("%d", &rows);
//   printf("\nEnter # of columns: ");
//   scanf("%d", &columns);
//   // scanf("%c"); // should prevent extra \n's after last scan f but doesent
//   // work
//   // getchar(); // prevents extra \n's after last scan f

//   printf("\nEnter a symbol to use: ");
//   scanf("\n%c", &symbol); //\n is needed here

//   for (int i = 1; i <= rows; i++) {
//     for (int j = 1; j <= columns; j++) {
//       printf("%c", symbol);
//     };
//     printf("\n");
//   };

//   return 0;
// }

// // continue vs break
// #include <stdio.h>
// int main() {
//   // continue skips and forces next part loop
//   // break exits loop/switch

//   for (int i = 1; i <= 20; i++) {
//     if (i == 13) {
//       continue;
//       // break;
//     }
//     printf("%d\n", i);
//   }

//   return 0;
// }

// // arrays
// #include <stdio.h>
// int main() {
//   double prices[] = {5.0, 2.0, 15, 150.23, 25.0, 123, 123,
//                      3,   4,   23, 53,     3.22, 222};

//   double newPrices[10]; // sets size without values
//   newPrices[2] = 3;

//   char name[] = "bro"; // strings are arrays of characters

//   // printf("$%lf\n$%.2lf\n$%.1lf", prices[2], prices[0], prices[4]);
//   // printf("$%.2lf\n", newPrices[1]);

//   printf("%d bytes\n",
//          sizeof(prices)); // gives size in bytes -each double is 8 bytes

//   // i < sizeof(prices) / sizeof(prices[0]) is the c equivalent for
//   arr.length() for (int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++) {
//     printf("$%.2lf\n", prices[i]);
//   }

//   return 0;
// }

// 2d arrays
// #include <stdio.h>
// int main() {

//   // int numbers[2][3] = {{1, 2, 3},
//   //                      {4, 5, 6}}; // 2d arrays need a max size defined
//   [max
//   //                      #
//   //                                  // of arrays][max # of elements in each
//   //                                  arr]

//   // alternate way of initializing array
//   int numbers[3][3];

//   int rows = sizeof(numbers) / sizeof(numbers[0]); // numbers[0] is the first
//                                                    // row
//   int columns = sizeof(numbers[0]) /
//                 sizeof(numbers[0][0]); // numbers[0][0] is 1 element in the
//                 row

//   // printf("rows:%d\ncolumns:%d\n", rows, columns);

//   numbers[0][0] = 1; //[row][columns]
//   numbers[0][1] = 2;
//   numbers[0][2] = 3;
//   numbers[1][0] = 4;
//   numbers[1][1] = 5;
//   numbers[1][2] = 6;
//   numbers[2][0] = 7;
//   numbers[2][1] = 8;
//   numbers[2][2] = 9;

//   for (int i = 0; i < rows; i++) {
//     for (int j = 0; j < columns; j++) {
//       printf("%d ", numbers[i][j]);
//     }
//     printf("\n");
//   };

//   return 0;
// }

// // string arrays (2d arrays of characters)
// #include <stdio.h>
// #include <string.h>

// int main() {

//   char cars[][2] = {"Mustang", "Corvette",
//                     "Camaro"}; // Note elements are over limit of 2
//   // NOTE you can't change values withcars[0] = "Tesla"; wont work
//   strcpy(cars[0], "Tesla");

//   for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++) {
//     printf("%s\n", cars[i]);
//   };

//   return 0;
// }

// // swap values of variables
// #include <stdio.h>
// #include <string.h>

// int main() {
//   // // individual chars
//   // char x = 'X';
//   // char y = 'Y';
//   // char temp;

//   // temp = x;
//   // x = y;
//   // y = temp;

//   char x[] = "water";
//   char y[] = "lemonade";
//   char temp[15];

//   strcpy(temp, x);
//   strcpy(x, y); // note there will be problems if dest array is shorter
//   strcpy(temp, x);

//   // printf("x = %c\n", x);
//   // printf("y = %c\n", y);

//   printf("x = %s\n", x);
//   printf("y = %s\n", y);

//   return 0;
// }

// // sort arr (bubble sort)
// #include <stdio.h>
// #include <string.h>

// // void returns nothing
// void sort(int array[], int size) {
//   for (int i = 0; i < size - 1; i++) {
//     for (int j = 0; j < size - i - 1; j++) {
//       if (array[j] > array[j + 1]) {
//         // if (array[j] < array[j + 1]) { for reverse order
//         int temp = array[j];
//         array[j] = array[j + 1];
//         array[j + 1] = temp;
//       }
//     }
//   }
// }

// void printArray(int array[], int size) {
//   for (int i = 0; i < size; i++) {
//     printf("%d", array[i]);
//   }
// }

// int main() {

//   int array[] = {1, 9, 6, 3, 8, 5, 2, 5, 6};
//   int size = sizeof(array) / sizeof(array[0]);

//   sort(array, size);
//   printArray(array, size);

//   return 0;
// }

// // structs (similar to classes but no methods)
// #include <stdio.h>
// #include <string.h>

// struct Player {
//   char name[12];
//   int score;
// };

// int main() {

//   struct Player player1;
//   struct Player player2;

//   strcpy(player1.name, "Bro"); // strcpy needed for strings
//   player1.score = 23;

//   strcpy(player2.name, "Code");
//   player2.score = 13;

//   printf("%s\n", player1.name);
//   printf("%d\n", player1.score);

//   printf("%s\n", player2.name);
//   printf("%d\n", player2.score);

//   return 0;
// }

// typedef - gives datatype a "nickname"
// #include <stdio.h>
// #include <string.h>

// // typedef char user[25]; // so you dont have to type char user1[25] multiple
// // times

// // struct typedef
// typedef struct {
//   char name[25];
//   char password[12];
//   int id;
// } User;

// int main() {
//   // user user1 = "Bro";

//   User user1 = {"Bro", "password123", 1234857};
//   User user2 = {"sdfsdf", "password123", 1234851237};

//   printf("%s\n", user1.name);
//   printf("%s\n", user1.password);
//   printf("%d\n", user1.id);

//   return 0;
// }

// // array of structs
// #include <stdio.h>
// #include <string.h>

// struct Student {
//   char name[12];
//   float gpa;
// };

// int main() {
//   struct Student student1 = {"Spongebob", 3.0};
//   struct Student student2 = {"Sandy", 2.0};
//   struct Student student3 = {"Squidward", 1.0};
//   struct Student student4 = {"Patrick", 4.0};

//   struct Student students[] = {student1, student2, student3, student4};
//   for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++) {
//     printf("%-20s\t", students[i].name); //\t is a tab
//     printf("%.2f\n", students[i].gpa);
//   }

//   return 0;
// }

// // enums user defined type of named integer identifiers
// #include <stdio.h>

// // enum Day { Sun, Mon, Tue, Wed, Thu, Fri, Sat }; // enums are constants. By
// // default starts at 0
// enum Day { Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7 };
// int main() {
//   enum Day today = Mon; // note enums are ints

//   if (today == Sun || today == Sat) {
//     printf("No work today!");
//   } else {
//     printf("time to work!");
//   }

//   // printf("%d", today);

//   return 0;
// }

// // pseudo random numbers (statistically random)
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main() {
//   srand(time(0)); // numbers will always be the same if you don't use seed
//   // time(0) is current time
//   int number1 = (rand() % 6) + 1; // 6 is the max number
//   int number2 = (rand() % 6) + 1;
//   int number3 = (rand() % 6) + 1;

//   printf("%d\n", number1);
//   printf("%d\n", number2);
//   printf("%d\n", number3);

//   return 0;
// }

// // number guessing game
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main() {
//   const int MIN = 1;
//   const int MAX = 100;
//   int guess;
//   int guesses;
//   int answer;

//   // creates seed with current time
//   srand(time(0));
//   // generates random number between MIN & MAX
//   answer = (rand() % MAX) + MIN;

//   do {
//     printf("Enter a guess: ");
//     scanf("%d", &guess);
//     if (guess > answer) {
//       printf("Too high\n");
//     } else if (guess < answer) {
//       printf("too low\n");
//     } else {
//       printf("CORRECT\n");
//     }
//     guesses++;
//   } while (guess != answer);
//   printf("**********\n");
//   printf("answer: %-15d\n", answer);
//   printf("guesses: %-15d\n", guesses);
//   printf("**********\n");

//   return 0;
// }