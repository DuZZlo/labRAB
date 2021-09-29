/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    //задание 1
    float x1, y1, x2, y2;
    printf("Enter x1, y1, x2, y2:\n");
    scanf("%f%f%f%f", &x1, &y1, &x2, &y2);
    printf("L = %f\n\n", sqrt(pow(x1-x2,2) + pow(y1-y2,2)));
    
    //задание 2
    float A, B, C;
    printf("Enter A, B, C:\n");
    scanf("%f%f%f", &A, &B, &C);
    printf("AC = %.2f\nBC = %.2f\nAC+BC = %.2f\n\n", fabs(A-C), fabs(B-C), fabs(A-C)+fabs(B-C));
    
    //задание 3
    printf("Enter A, B, C:\n");
    scanf("%f%f%f", &A, &B, &C);
    while (!((C>A && C<B) || (C>B && C<A))) {
        printf("Enter A, B, C according to the task\n");
        scanf("%f%f%f", &A, &B, &C);
    }
    printf("AC*BC = %.2f\n\n", fabs(A-C)*fabs(C-B));
    
    //задание 4
    printf("Enter x1, y1, x2, y2:\n");
    scanf("%f%f%f%f", &x1, &y1, &x2, &y2);
    printf("P =%.2f\nS =%.2f\n\n", 2*(fabs(x1-x2)+fabs(y1-y2)), fabs(x1-x2)*fabs(y1-y2));
    
    //задание 5
    float x3, y3;
    printf("Enter x1, y1, x2, y2, x3, y3:\n");
    scanf("%f%f%f%f%f%f", &x1, &y1, &x2, &y2, &x3, &y3);
    printf("S =%.2f\n", 0.5*fabs(x1*y2 + x2*y3 + x3*y1 - x2*y1 - x3*y2 - x1*y3));
    printf("P =%.2f", (sqrt(pow(x1-x2,2) + pow(y1-y2,2)) + sqrt(pow(x2-x3,2) + pow(y2-y3,2)) + sqrt(pow(x3-x1,2) + pow(y3-y1,2))));
    
    return 0;
}

