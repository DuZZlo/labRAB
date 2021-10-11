
#include <stdio.h>
#include <math.h>
int main()
{
    float a, A, X, Y, v1, v2, s, t, B, C1, A2, B2, C2;
    //задание 1
    printf("Enter α, 0<α<360:\n");
    scanf("%f", &a);
    while (a<=0 || 360<=a){
        printf("\nEnter appropriate α:\n");
        scanf("%f", &a);
    }
    printf("α=%.2f\n\n", a*3.14/180);
    
    //задание 2
    printf("Enter α, 0<α<2*π:\n");
    scanf("%f", &a);
    while (a<=0 || 2*3.14<=a){
        printf("\nEnter appropriate α:\n");
        scanf("%f", &a);
    }
    printf("α=%.2f\n\n", a*180/3.14);
    
    //задание 3
    printf("Enter Price(A) for (X)kg of candies :\n");
    scanf("%f%f", &A, &X);
    printf("1 kg costs %.1f\n\n", A/X);
    printf("Enter (Y)kg:\n");
    scanf("%f", &Y);
    printf("%.1f kg costs %.1f\n\n", Y, (A/X)*Y);
    
    //задание 4
    printf("Enter v1, v2 - speed, s - distance, T - time:\n");
    scanf("%f%f%f%f", &v1, &v2, &s, &t);
    printf("new distance = %.2f\n\n", s+(v1+v2)*t);
    
    //задание 5
    printf("Enter A!=0, B:\n");
    scanf("%f%f", &A, &B);
    while (A==0){
        printf("Enter A!=0:\n");
        scanf("%f", &A);
    }
    printf("A*x + B = 0, x = %.2f\n\n", (-1*B)/A);
    
    //задание 6
    printf("Enter A1, B1, C1, A2, B2, C2:\n");
    scanf("%f%f%f%f%f%f", &A, &B, &C1, &A2, &B2, &C2);
    Y = (A2*C1/A - C2)/(A2*B/A - B2);
    X = (C1 - B*Y)/A;
    printf("%.2f %.2f", X, Y);
    return 0;
}

