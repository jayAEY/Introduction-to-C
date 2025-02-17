#include <stdbool.h>
#include <stdio.h>

int main() {

  // basic printf
  // this is a comment
  /*this is a
  multi line comment*/

  /* escape sequences:
  \m = newling
  \t = tab
  \" \" - double quotes
  \\ \\ print backslash
  */

  printf("I \t like\t pizza\n");
  printf("\\Is very nice!!\\ \n \"-Sun Tzu probably\" \n");
  printf("1\t2\t3\n4\t5\t6\n7\t8\t9");

  // variables
  //   int x;
  //   x = 123;
  //   int y = 321;

  int age =
      2147483647; // integer whole number (-2,147,483,648 to 2,147,483,647) %d
  unsigned int age2 = 4294967295; // integer whole number (- 4,294,967,295) %U

  float gpa =
      3.141592; // floating point 4 bytes (32bits of precision) 6-7 digits %f
  double d = 3.141592653589793; // double (long float) 8 bytes (64bits of
                                // precision) 15 - 16 digits %1f 6-7 digits %lf
  char grade = 'C';             // single character %c
  char name[] = "Bro";          // array of characters %s
  bool e = true;                // boolean 1 byte 0 = false 1 = true %d
  char f = 100;                 // chars can display -128 to +127 as %d or %c
  unsigned char g = 255;        // 0 to +255 no negatives as %d or %c

  //   short int h = 32768;          // (-32,768 to +32,767) %d
  //   unsigned short int i = 65535; // (0 to +65,535) %d
  short h = 32768;          // decleration without int
  unsigned short i = 65535; // decleration without int

  long long int l = 9223372036854775807;            // lld%
  unsigned long long int m = 18446744073709551610U; // llu% U bypasses warning

  // extra format specifiers:
  //%.1 = decimal precision
  //%11 = minimum field width
  //%- = left align

  float item1 = 5.75;
  float item2 = 10.00;
  float item3 = 100.99;

  // constants
  const float PI = 3.14159; // UPPERCASE is convention but not required

  // arithmetic
  int x = 5; // note that arithmetic with ints will lose precision
  int y = 2;
  float z = x / (float)y; // convert ints to floats of doubles to keep
                          // precision (only needs to be divisor when dividing)

  printf("Hello %s \n", name);
  printf("You are %i years old\n", age);
  printf("Your average grade is %c\n", grade);
  printf("Your gpa is %0.15f \n", gpa);
  printf("your real gpa is %0.15lf \n", d);

  printf("True or false? %d \n", e);
  printf(" %d \n", f); // char as `numeric;
  printf(" %c \n", f); // char as ascii;
  printf(" %d \n", g); // unsigned char;

  printf(" %d \n", h);    // short int (this one is overflowing);
  printf(" %d \n", i);    // unsigned short int;
  printf(" %d \n", age);  // signed int
  printf(" %u \n", age2); // unsigned int
  printf(" %lld \n", l);  // signed int
  printf(" %llu \n", m);  // unsigned int

  printf("Item 1: $%-8.2f\n", item1); // display 2 digit float
  printf("Item 2: $%-8.2f\n", item2);
  printf("Item 3: $%-8.2f\n", item3);

  printf("%f", z);

  return 0;
}

// FEB 16 38 : 18s