// My first c code
/*#include <stdio.h>
int main(){
    printf("Hey i am learning c");
    return 0;
}*/

// -----------------------------------------------------------------------------------------------------------------------------------

// Written using escape sequence (\n)
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

// Printed values in different datatypes
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

// overwriting variable value
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


// Assigning values to multiple variables
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

// Basic logic building codes

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


// WAP to calculate the simple interest/

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





