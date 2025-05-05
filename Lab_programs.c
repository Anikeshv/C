// Program1
// WAP that accepts marks of 5 subjects and find the sum and percentage of marks obtained.
/*#include <stdio.h>
int main(){
    float Eng,Sc,Ms,Hin,Evs,Sum,per;
    printf("Enter the marks of English:");
    scanf("%f",&Eng);
    printf("Enter the marks of Science:");
    scanf("%f",&Sc);
    printf("Enter the marks of Mathematics:");
    scanf("%f",&Ms);
    printf("Enter the marks of Hindi:");
    scanf("%f",&Hin);
    printf("Enter the marks of Evs:");
    scanf("%f",&Evs);

    Sum=Eng+Sc+Ms+Hin+Evs;
    per=(Sum/5);

    printf("Sum of marks is: %f\n",Sum);
    printf("Average of marks is%f",Sum/5);
    printf("Percentage obtained is: %f",per);

return 0;
}*/

// ---------------------------------------------------------------------------------------------------------------------------------------------------------------

// Program2
// WAP thst calculates simple intersest and compound interest for which principal,rate,time are entered through the keyboard.
/*#include <stdio.h>
#include <math.h>
int main(){
    float principal,Si,Ci,time,rate;
    printf("Enter the principal value:");
    scanf("%f",&principal);
    printf("Enter the rate:");
    scanf("%f",&rate);
    printf("Enter the time period in years:");
    scanf("%f",&time);
    
    Si=(principal*rate*time)/100;
    Ci=principal*pow(1+0.01*rate,time)-principal;

    printf("Simple interest is: %f\n",Si);
    printf("Compound interest is %f\n",Ci);
    
return 0;
}*/

//------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Program3
// WAP to calculate area and circumference of a circle.

/*#include <stdio.h>
int main(){
    int const pi=3.14;
    float Radius,circumference,area;
    printf("Enter the value of Radius:");
    scanf("%f",&Radius);
    
    area = pi * (Radius*Radius);
    circumference = 2 * pi * Radius;

    printf("Area of circle is: %f\n",area);
    printf("Circumference of circle is: %f\n",circumference);
return 0;
}*/

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Program4
// WAP that accepts the temperature in centigrate and converts in to fahrenheit using the gormula C/5=(F-32)/9

/*#include <stdio.h>
int main(){
    float C,Fr;
    printf("Enter the value of Temperature in centigrate:");
    scanf("%f",&C);
    
    Fr=(9*C)/5+32;

    printf("Temperature in Fahrenheit: %f\n",Fr);
return 0;
}*/

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Program5
// WAP that swaps values of two variables using third variable.
/*#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the value of variable a:");
    scanf("%d",&a);
    printf("Enter the value of variable b:");
    scanf("%d",&b);
    
    c=a;
    a=b;
    b=c;

    printf("Value of variable a after interchanging is: %d\n",a);
    printf("Value of variable b after interchanging is: %d\n",b);

return 0;
}*/

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Program6
// WAP that checks whether the two numbers enteres by the yser are equal or not.

/*#include <stdio.h>
int main(){
    int M,N;
    printf("Enter Number 1:");
    scanf("%d",&M);
    printf("Enter Number 2:");
    scanf("%d",&N);
    
    if (M==N){
        printf("Number 1 is equal to Number 2");
    }
    else{
        printf("Number 1 is not equal to Number 2");
    }
    
return 0;
}*/

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Program7
// WAP find the greatest of three numbers.

/*#include <stdio.h>
int main(){
    int A,B,C;
    printf("Enter Number A:");
    scanf("%d",&A);
    printf("Enter Number B:");
    scanf("%d",&B);
    printf("Enter Number C:");
    scanf("%d",&C);

    if (A>B && A>C){
        printf("Number A is the Greatest Number");
    }
    else if (B>A && B>C){
        printf("Number B is the Greatest Number");
    }
    else{
        printf("Number C is the Greatest Number");
    }
    
return 0;
}*/

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Program 8
// WAP that finds whether a given number is even or odd.
/*#include <stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    if (n%2==0){
        printf("Number is Even");
    }
    else{printf("Number is odd");}
return 0;
}*/

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Program 9
//WAP that tells whether a given year is a leap year or not.
/*#include <stdio.h>
int main(){
    int y;
    printf("Enter a Year:");
    scanf("%d",&y);

    if ((y%400==0)||(y%100!=0 && y%4==0)){
        printf("It is a leap year");
    }
    else{printf("It is not a leap year");}
return 0;
}*/

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Program 10
//WAP that accepts marks of five subjects and finds percentage and prints grades according to the following criteria.
/*#include <stdio.h>
int main(){
    int a,b,c,d,e;
    float per;
    printf("Enter the marks for 5 subjects:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);

    per=(a+b+c+d+e)/5.0;
    printf("Percentage:%f\n",per);

    if (per>=90){
        printf("Grade A");
    }
    else if (per>80 && per <90){
        printf("Grade B");
    }
    else if (per >60 && per <80){
        printf("Grade C");
    }
    else if (per<60){
        printf("Grade D");
    }

return 0;
}*/

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Program 11
//WAP that takes two operands and one operator from the user,perform the operation , and prints the result by switch statement.

/*#include <stdio.h>
int main(){
    // int a='+';
    // printf("%d",a);
    int n1,n2;
    char o;
    printf("Enter the operator: ");
    scanf("%c",&o);
    
    printf("Enter a number: ");
    scanf("%d",&n1);
    
    printf("Enter other number: ");
    scanf("%d",&n2);

    switch(o){
        case'+':
            printf("Sum is:%d ",n1+n2);
            break;
        
        case'-':
            printf("subtraction is:%d ",n1-n2);
            break;
        
        case'*':
            printf("Product is:%d ",n1*n2);
            break;
        
        case'/':
            printf("Division is:%d ",n1/n2);
            break;
        
        case'%':
            printf("Modulus is:%d ",n1%n2);
            break;
        
    }

return 0;
}*/

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Program 12
//WAP to print the sum of all the numbers till n.

/*#include <stdio.h>
int main(){
    int n,i;
    int sum=0;
    printf("Enter a number:");
    scanf("%d",&n);

    for (i=0; i<n+1; i++){
        sum+=i;
    }
    printf("Sum is: %d",sum);
return 0;

}*/

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Program 13
//WAP to find the factorial of a given number.

/*#include <stdio.h>
int main(){
    int n,i;
    int fac=1;
    printf("Enter a number:");
    scanf("%d",&n);

    for (i=n; i>0; i--){
        fac*=i;
    }
    printf("Factorial is: %d",fac);
return 0;
}*/

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Program 14
//WAP to print sum of even and odd numbers from 1 to N numbers.

/*#include <stdio.h>
int main(){
    int n,i;
    int Even_sum=0,Odd_sum=0;
    printf("Enter a number:");
    scanf("%d",&n);

    for (i=0; i<n+1; i++){
        if (i%2==0){
            Even_sum+=i;
        }
        else{Odd_sum+=i;}
    }
    printf("Even_sum is: %d\n",Even_sum);
    printf("Odd_sum is: %d",Odd_sum);
return 0;
}*/

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------

















