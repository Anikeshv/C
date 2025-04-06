// &My first c code& //

/*#include <stdio.h>
int main(){
    printf("Hey i am learning c");
    return 0;
}*/


// -----------------------------------------------------------------------------------------------------------------------------------

// Written using escape sequence (\n) //
// \n used to move cursor to next line
// \t used to Creates a horizontal tab
// \" used to  Inserts a double quote character
// \\ used to Inserts a backslash character (\)

/*#include <stdio.h>
int main(){
    printf("Hey boy \n");
    printf("Lisht weight!");
    printf("Hello World!\nI am learning C.\nAnd it is awesome!");

    printf("\n \n \n");

    printf("Hello World!\t");
    printf("I am learning C.");

    printf("\n \n \n");

    printf("They call him \"Johnny\".");

    printf("\n \n \n");

    printf("Hello World!\\");
    printf("I am learning C.");

return 0;
}*/


// -----------------------------------------------------------------------------------------------------------------------------------

// Printed values in different datatypes //

/*#include <stdio.h>
int main(){
    int integer;
    float flo;
    char character;

    flo=3.5;
    integer=10;
    character='a';

    printf("%d \n",integer);
    printf("%f \n",flo);
    printf("%c \n",character);

return 0;
}*/

/*#include <stdio.h>
int main() {
  int myNum = 15;
  char myLetter = 'D';
  printf("My number is %d and my letter is %c", myNum, myLetter);

  return 0;
}*/

/*#include <stdio.h>
int main(){
    int a=5;
    int c=6;
    float b=7;
    printf("Values are %d \n",a);
    printf("Values are %f ",b);

return 0;
}*/


// -----------------------------------------------------------------------------------------------------------------------------------

// overwriting variable value //

/*#include <stdio.h>
int main(){
    int a;
    int b;
    a=5;
    b=4;
    a=b;
    // Here value of a is overwrited to 4
    printf("Value of a %d",a);

    return 0;
}*/

// -----------------------------------------------------------------------------------------------------------------------------------

// Assigning values to multiple variables //

/*#include <stdio.h>
int main(){
    int a,b,c;
    a=b=c=5;
    printf("Sum %d \n",a+b+c);

    a=b=c=7;
    printf("Sum %d",a+b+c);

return 0;    
}*/


// -----------------------------------------------------------------------------------------------------------------------------------

// Basic logic building codes //

// WAP to calculate area of a circle
/*#include <stdio.h>
int main(){
    float r;
    r=7;
    printf("Area of circle is %f \n",3.14*r*r);

return 0;
}*/

// Using input(scanf)
/*#include <stdio.h>
int main(){
    float r;
    printf("Enter the radius:");
    scanf("%f",&r);
    printf("Area of circle is %f \n",3.14*r*r);

return 0;
}*/

// WAP to calculate the simple interest
/*#include <stdio.h>
int main(){
    float p;
    float r;
    float t;
    printf("Enter the principal amount :");
    scanf("%f",&p);
    printf("Enter thr rate of interest :");
    scanf("%f",&r);
    printf("Enter the time period :");
    scanf("%f",&t);
    printf("Simple interset is:%f",(p*r*t)/100);
return 0;
}*/

// WAP to calculate temperature in centigrate if user input temperature in Fahrenheit.
/*#include <stdio.h>
int main(){
    float f;
    printf("Enter temperature in fahrenheit:");
    scanf("%f",&f);
    printf("Temperature in degree centigrate is: %f",(5*f/9-17.77));
return 0;
}*/

// WAP to take input in five different subjects and calculate Total,Average,Percentage.
/*#include <stdio.h>
int main(){
    float m1,m2,m3,m4,m5 ;
    printf("Enter the marks of all 5 subjects: \n");
    scanf("%f %f %f %f %f",&m1,&m2,&m3,&m4,&m5);
    printf("Average marks is: %f %s",(m1+m2+m3+m4+m5)/5,"\n");
    printf("Total marks are: %f %s",(m1+m2+m3+m4+m5),"\n");
    printf("Percentage is: %f",(m1+m2+m3+m4+m5)/5);
return 0;
}*/


// -----------------------------------------------------------------------------------------------------------------------------------

// Decimal precision //
/*#include <stdio.h>
int main(){
    float a=5.8594; //can take upto 4 bytes :8 decimal places
    double b=5.9321; //can take upto 8 bytes :15 decimal values
    printf("Float:%f\n",a);
    printf("Double:%lf\n",b);

    printf("Float:%.2f\n",a); //for printing specefic no after decimal
    printf("Double:%.2lf",b); //if 0.01 used it will round off
return 0;
}*/


// -----------------------------------------------------------------------------------------------------------------------------------

// Size of datatypes //

/*#include <stdio.h>
int main(){
    int a;
    float b;
    char c;
    double d;
    printf("Size of integer %lu\n",sizeof(a));
    printf("Size of float %lu\n",sizeof(b));
    printf("Size of char %lu\n",sizeof(c));
    printf("Size of double %lu",sizeof(d));
return 0;
}*/


// -----------------------------------------------------------------------------------------------------------------------------------

// Real life usecase //

/*#include <stdio.h>

int main() {
  // Create variables of different data types
  int items = 50;
  float cost_per_item = 9.99;
  float total_cost = items * cost_per_item;
  char currency = '$';

  // Print variables
  printf("Number of items: %d\n", items);
  printf("Cost per item: %.2f %c\n", cost_per_item, currency);
  printf("Total cost = %.2f %c\n", total_cost, currency);

  return 0;
}*/


// -----------------------------------------------------------------------------------------------------------------------------------

// Implicit and explicit conversion //

/*#include <stdio.h>
int main(){
    float a=4;
    printf("%f",a); //a=4.000000(Implicit conversion)
return 0;
}*/

/*#include <stdio.h>
int main(){
    float a=5/2;
    printf("%f\n",a); //a=2.000000 because 5 and 2 are still integers write a=(float)5/2

    float b=(float)5/2;
    printf("%f",b);
return 0;
}*/

// -----------------------------------------------------------------------------------------------------------------------------------

// Comstant variables //

/*#include <stdio.h>
int main(){
    const int a=5; //constant variables should be made by using uppercase letters its a practice
    printf("%d",a);
    //a=7; //Error
return 0;
}*/

/*#include <stdio.h>
int main(){
    const int a;
    a=7; //Error
    printf("%d",a);
return 0;
}*/

// -----------------------------------------------------------------------------------------------------------------------------------

// Operators //

// ++a (increase value of a by 1) , --a (decrease value of a by 1)
/*#include<stdio.h>
int main(){
    int a=5;
    int b;
    b=++a; //doing ++a wil increase  value of a by 1 , same goes for --a  a will decrease by 1
    printf("%d\n",a); //6
    // a=a+6;
    // printf("%d\n",a); //6
    printf("%d",b);
return 0;
}*/

//  && and operator returns 0/1
/*#include <stdio.h>
int main() {
  int x = 5;
  int y = 3;
  
  // Returns 1 (true) because 5 is greater than 3 AND 5 is less than 10
  printf("%d", x > 3 && x < 10);
  return 0;
}*/

// || or operator returns 0/1
/*#include <stdio.h>
int main() {
  int x = 5;
  int y = 3;
  
  // Returns 1 (true) because one of the conditions are true (5 is greater than 3, but 5 is not less than 4)
  printf("%d", x > 3 || x < 4);
  return 0;
}*/

// ! not operator returns 0/1
/*#include <stdio.h>
int main() {
  int x = 5;
  int y = 3;
  
  // Returns false (0) because ! (not) is used to reverse the result
  printf("%d", !(x > 3 && x < 10));
  return 0;
}*/

// -----------------------------------------------------------------------------------------------------------------------------------

// Boolean //
/*#include <stdio.h>
#include <stdbool.h>
// Even boolean return 0/1

int main(){
    bool a=true;
    bool b=false;
    printf("%d",a!=b);
return 0;
}*/

// -----------------------------------------------------------------------------------------------------------------------------------

// If else //
/*#include <stdio.h>
int main(){
    int a=7;
    int b=9;
    if (a>b){
        printf("a is greater than b");}
    else{printf("a is less than b");}
return 0;
}*/

// else if //
/*#include <stdio.h>
int main() {
  int time = 22;
  if (time < 10) {
    printf("Good morning.");
  } else if (time < 20) {
    printf("Good day.");
  } else {
    printf("Good evening.");
  }
  return 0;
}*/

// -----------------------------------------------------------------------------------------------------------------------------------

// Short hand if else // also known as ternary operator

/*#include <stdio.h>
int main(){
    int a=20;
    (a>55)? printf("Yes") : printf("No");
return 0;
}*/

// instead of writing
/*#include <stdio.h>
int main() {
  int time = 20;
  if (time < 18) {
    printf("Good day.");
  } else {
    printf("Good evening.");
  }
  return 0;
}*/

// You can write
/*#include <stdio.h>
int main() {
  int time = 20;
  (time < 18) ? printf("Good day.") : printf("Good evening.");
  return 0;
}*/

// -----------------------------------------------------------------------------------------------------------------------------------

// Switch statements

// Best for expression results
/*#include <stdio.h>
int main(){
    int a=2;
    switch (a){
        case 1:
        printf("Hello");
        break;

        case 2:
        printf("hi");
        break;

        case 3:
        printf("h");
        break;

        default:
        printf("Hellohih");

    }
}*/

// -----------------------------------------------------------------------------------------------------------------------------------

// While loops //
/*#include <stdio.h>
int main(){
    int i=0;
    while (i<20){
        printf("I LOVE YOU\n");
        ++i;
    }
}*/

// Do while loop
/*#include <stdio.h>
int main() {
  int i = 0;
  do {
    printf("%d\n", i);
    i++;
  }
  while (i < 5);
return 0;
}*/

// -----------------------------------------------------------------------------------------------------------------------------------

// While usecase
/*#include <stdio.h>
int main() {
  // A variable with some specific numbers
  int numbers = 12345;
  
  // A variable to store the reversed number
  int revNumbers = 0;

  // Reverse and reorder the numbers
  while (numbers) {
    // Get the last number of 'numbers' and add it to 'revNumber'
    revNumbers = revNumbers * 10 + numbers % 10;
    // Remove the last number of 'numbers'
    numbers /= 10;
  }
  // Output the reversed numbers
  printf("%d", revNumbers);

  return 0;
}*/

// -----------------------------------------------------------------------------------------------------------------------------------





