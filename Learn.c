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

/*#include <stdio.h
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
/*#include <stdio.h
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
/*#include <stdio.h
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
/*#include <stdio.h
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
/*#include <stdio.h
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

// for loop //
/*#include <stdio.h>
int main(){
  int i=0;
  for (i;i<11;i++){
    printf("%d\n",i);
  }
  printf("%d",i);
  return 0;
}*/

// nested loop //
/*#include <stdio.h>
int main(){
  int i;
  int j;
  for (i=0; i<5; i++){
    printf("%d",i);
    for (j=5; j>0; j--){
      printf("%d\n",j);
    }
  }
}*/

// -----------------------------------------------------------------------------------------------------------------------------------

// break and continue 

// for loop break
/*#include <stdio.h>
int main(){
  int i;
  for (i=0; i<5; i++){
    if (i==2){
      break;
    }
    printf("%d\n",i);
  }
return 0;
}*/

// for loop cotinue
/*#include <stdio.h>
int main(){
  int i;
  for (i=0; i<5; i++){
    if (i==2){
      continue;
    }
    printf("%d\n",i);
  }
return 0;
}*/

// while loop break
/*#include <stdio.h>
int main(){
  int i=0;
  while (i<5){
    if (i==2){
      break;
    }
    printf("%d\n",i);
    i++;
  }
return 0;
}*/

// while loop continue
/*#include <stdio.h>
int main(){
  int i=0;
  while (i<5){
    if (i==2){
      i++;
      continue;
    }
    printf("%d\n",i);
    i++;
  }
return 0;
}*/

// -----------------------------------------------------------------------------------------------------------------------------------

// Array 
/*#include <stdio.h>
int main(){
  int l[]={1,2,3,4,5,6,7,8};
  int i;
  for (i=0; i<8; i++){
    printf("%d\n",l[i]);
  }
return 0;
}*/

/*#include <stdio.h>
int main(){
  char l[]={'a','b','c','d','e','f','g','h','i'};
  int i;
  for (i=0; i<9; i++){
    printf("%d\n",l[i]);
  }
return 0;
}*/

/*#include <stdio.h>
int main(){
  int l[5];
  // l[1]=1;
  // l[2]=2;
  // l[3]=3;
  // l[4]=4;
  int i;
  for (i=0; i<5; i++){
    printf("%d\n",l[i]);
  }
}*/

// Size of array
/*#include <stdio.h>
int main(){
  int arr[]={1,2,3,4,5,5};
  int length=sizeof(arr)/sizeof(arr[0]);
  int i;
  for (i=0; i<length; i++){
    printf("%d\n",arr[i]);
  }
return 0;
}*/


/*#include <stdio.h>
int main(){
  int i,n,length;
  printf("Enter the number of data enteries: ");
  scanf("%d",&length);
  int arr[length];
  for (i=0; i<length; i++){
    printf("Enter the marks: ");
    scanf("%d",&n);
    arr[i]=n;
  }
  printf("Marks of students are:");
  for (i=0; i<length; i++){
    printf("%d\n",arr[i]);
  }
return 0;
}*/

// 2D array

/*#include <stdio.h>
int main() {
    int arr[3][3];
    int i, j;

    // Assign values to the array
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            arr[i][j] = j;
        }
    }

    // Print the array elements
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}*/


// -------------------------------------------------------------------------------------------------------------------------------------------

// Strings

/*#include <stdio.h>
int main(){
  char str[]="Hello world";
  printf("%s\n",str);

return 0;
}*/

/*#include <stdio.h>
int main(){
  char str[]={'H','e','l','l','o','\0'};
  printf("%s\n",str);
  printf("%c\n", str[0]);

  str[0] = 'J';
  printf("%s\n", str);

  int length = sizeof(str) / sizeof(str[0]);
  printf("%d\n",length);
  printf("%lu\n", sizeof(str));

return 0;
}*/

/*#include <stdio.h>
#include <string.h>
 
int main() {
  char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  printf("Length is: %d\n", strlen(alphabet));
  printf("Size is: %d\n", sizeof(alphabet));

  char alpha[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  printf("Length is: %d\n", strlen(alpha));
  printf("Size is: %d\n", sizeof(alpha));
  return 0;
}*/

// Length of string
/*#include <stdio.h>
#include <string.h>
 
int main() {
  char str1[12] = "Hello";
  char str2[] = "World!";
  
  printf("%d\n", sizeof(str1));
  printf("%d\n", strlen(str1));
  
  
  printf("%d\n", sizeof(str2));
  printf("%d\n", strlen(str2));
 
  // Concatenate str2 to str1 (the result is stored in str1)
  strcat(str1, str2);
  
  // Print str1
  printf("%s\n", str1);
  printf("%d\n", sizeof(str1));
  printf("%d\n", sizeof(str2));
 
  return 0;
}*/

// String copy
/*#include <stdio.h>
#include <string.h>

int main() {
  char str1[20] = "Hello World!";
  char str2[20];

  // Copy str1 to str2
  strcpy(str2, str1);
  
  str2[0]='B';

  // Print str2
  printf("%s", str2);
  printf("%s", str1);
  
  return 0;
}*/

// String comparison
/*#include <stdio.h>
#include <string.h>

int main() {
  char str1[] = "Hello";
  char str2[] = "Hello";
  char str3[] = "Hi";

  // Compare str1 and str2, and print the result
  printf("%d\n", strcmp(str1, str2));
  
  // Compare str1 and str3, and print the result
  printf("%d\n", strcmp(str1, str3));
  
  return 0;
}*/

// -------------------------------------------------------------------------------------------------------------

// Input string
/*#include <stdio.h>

int main() {
  // Create a string
  char firstName[30];

  // Ask the user to input some text (name)
  printf("Enter your first name and press enter: \n");

  // Get and save the text
  scanf("%s", firstName);

  // Output the text
  printf("Hello %s", firstName);
  
  return 0;
}*/


/*#include <stdio.h>

int main() {
  // Create a string
  char fullName[30];

  // Ask the user to input some text (full name)
  printf("Type your full name and press enter: \n");

  // Get the text
  fgets(fullName, sizeof(fullName), stdin);

  // Output the text
  printf("Hello %s", fullName);
  
  return 0;
}*/

// ------------------------------------------------------------------------------------------------------------------------------

// Memory location
/*#include <stdio.h>

int main() {
  int myAge = 43;
  printf("%p", &myAge);
  return 0;
}*/

// ----------------------------------------------------------------------------------------------------------------------------------

// Pointer
/*#include <stdio.h>

int main() {
  int myAge = 43;  // An int variable
  int* ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge

  // Output the value of myAge (43)
  printf("%d\n", myAge);

  // Output the memory address of myAge (0x7ffe5367e044)
  printf("%p\n", &myAge);

  // Output the memory address of myAge with the pointer (0x7ffe5367e044)
  printf("%p\n", ptr);

  return 0;
}*/


/*#include <stdio.h>

int main() {
  int myAge = 43;  // Variable declaration
  int* ptr = &myAge;  // Pointer declaration

  // Reference: Output the memory address of myAge with the pointer (0x7ffe5367e044)
  printf("%p\n", ptr);

  // Dereference: Output the value of myAge with the pointer (43)
  printf("%d\n", *ptr);
  
  return 0;
}*/

// ----------------------------------------------------------------------------------------------------------------------------

// Pointers in array

/*#include <stdio.h>
 
int main() {
  int myNumbers[4] = {25, 50, 75, 100};
  
  // Get the value of the first element in myNumbers
  printf("%d\n", *myNumbers);

  // Get the value of the second element in myNumbers
  printf("%d\n", *(myNumbers + 1));

  // Get the value of the third element in myNumbers
  printf("%d", *(myNumbers + 2));
 
 
  return 0;
}*/

/*#include <stdio.h>
 
int main() {
  int myNumbers[4] = {25, 50, 75, 100};
  int *ptr = myNumbers;
  int i;

  for (i = 0; i < 4; i++) {
    printf("%d\n", *(ptr + i));
  }
  return 0;
}*/

/*#include <stdio.h>
 
int main() {
  int myNumbers[4] = {25, 50, 75, 100};

  // Change the value of the first element to 13
  *myNumbers = 13;

  // Change the value of the second element to 17
  *(myNumbers +1) = 17;

  // Get the value of the first element
  printf("%d\n", *myNumbers);

  // Get the value of the second element
  printf("%d\n", *(myNumbers + 1));  
  
  return 0;
}*/

// ---------------------------------------------------------------------------------------------------------------------------

// C Functions
/*#include <stdio.h>

// Create a function
void calculateSum() {
  int x = 5;
  int y = 10;
  int sum = x + y;
  printf("The sum of x + y is: %d", sum);
}

int main() {
  calculateSum();  // call the function
  return 0;
}*/



/*#include <stdio.h>

void myFunction(char name[], int age) {
  printf("Hello %s. You are %d years old\n", name, age);
}

int main() {
  myFunction("Liam", 3);
  myFunction("Jenny", 14);
  myFunction("Anja", 30);
  return 0;
}*/

/*#include <stdio.h>

void calculateSum(int x, int y) {
  int sum = x + y;
  printf("The sum of %d + %d is: %d\n", x, y, sum);
}

int main() {
  calculateSum(5, 3);
  calculateSum(8, 2);
  calculateSum(15, 15);
  return 0;
}*/

// Returning functions

/*#include <stdio.h>

int myFunction(int x, int y) {
  return x + y;
}

int main() {
  printf("Result is: %d", myFunction(5, 3));
  return 0;
}*/


/*#include <stdio.h>

// Function to convert Fahrenheit to Celsius
float toCelsius(float fahrenheit) {
  return (5.0 / 9.0) * (fahrenheit - 32.0);
}

int main() {
  // Set a fahrenheit value
  float f_value = 98.8;
  
  // Call the function with the fahrenheit value
  float result = toCelsius(f_value);

  // Print the fahrenheit value
  printf("Fahrenheit: %.2f\n", f_value);
  
  // Print the result
  printf("Convert Fahrenheit to Celsius: %.2f\n", result);

  return 0;
}*/






















