/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int main()
{
    int a;
    int b;
    float r;
    float side;
    float length;
    float breadth;
    printf("Enter First Number ");
    scanf("%d", &a);  
    printf("Enter Second Number ");
    scanf("%d", &b); 
    printf("Subtraction = %d\n",(a-b));
    printf("Multiplication = %d\n",(a*b));
    printf("Enter Radius of Circle ");
    scanf("%f", &r); 
    printf("Area of circle = %f\n",(3.14*r*r));
    printf("Enter Side of Square ");
    scanf("%f", &side); 
    
    
    printf("Area of square = %f\n",(side*side));
     printf("Enter Length of Rectangle ");
    scanf("%f", &length); 
     printf("Enter Breadth of Rectangle ");
    scanf("%f", &breadth); 
   
    printf("Area of Rectangle  = %f\n",(length*breadth));
    return 0;
}
