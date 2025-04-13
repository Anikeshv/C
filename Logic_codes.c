// WAP to swap two numbers using a third variable //

/*#include <stdio.h>
int main(){
    int a=5;
    int b=7;
    int c;

    c=b;
    b=a;
    a=c;

    printf("Value of a is %d\n",a);
    printf("value of b is %d",b);
return 0;
}*/

// -----------------------------------------------------------------------------------------------------------------

// WAP to print pyramid

/*#include <stdio.h>
int main(){
    int i, j, rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Loop for rows
    for(i=1; i<=rows; i++){
        // Loop for spaces
        for(j=1; j<=rows-i; j++){
            printf(" ");
        }
        // Loop for asterisks
        for(j=1; j<=2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/

// ---------------------------------------------------------------------------------------------------------------

// WAP to print inverted pyramid

/*#include <stdio.h>
int main(){
    int i,j, rows;
    printf("Enter the number of rows:");
    scanf("%d",&rows);

    for (i=rows; i>0; i--){
        // Loop for spaces
        for (j=0; j<=(rows-i); j++){
            printf(" ");
        }
        // Loop for asterisks
        for (j=(2*i-1); j>0; j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/