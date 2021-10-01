
#include <stdio.h>
#include <math.h>

int main()
{
    int A, B, C, buf;
    double x, a, vs1, vs2;
    //задание 1
    printf("Enter A, B:\n");
    scanf("%d%d", &A, &B);
    buf = A;
    A = B;
    B = buf;
    printf("A = %d\nB = %d\n\n", A, B);
    //задание 2
    printf("Enter A, B, C:\n");
    canf("%d%d%d", &A, &B, &C);
    buf = A;
    A = B;
    B = buf;
    buf = A;
    A = C;
    C = buf;
    printf("A = %d\nB = %d\nC = %d\n\n", A, B, C);
    //задание 3
    printf("Enter A, B, C:\n");
    scanf("%d%d%d", &A, &B, &C);
    buf = A;
    A = C;
    C = buf;
    buf = A;
    A = B;
    B = buf;
    printf("A = %d\nB = %d\nC = %d\n\n", A, B, C);
    //задание 4
    printf("Enter x :\n");
    scanf("%lf", &x);
    printf("y = %.1lf\n\n", 3 * pow(x,6) - 6 * pow(x,2) - 7);
    //задание 5
    printf("Enter x :\n");
    scanf("%lf", &x);
    printf("y = %.1lf\n\n", 4 * pow(x - 3,6) - 7 * pow(x - 3, 3) + 2);
    //задание 6
    printf("Enter A:\n");
    scanf("%lf", &a);
    vs1 = a*a;
    a = vs1*vs1;
    vs1 = a*a;
    printf("A^8 = %.1lf\n\n", vs1);
    //задание 7
    printf("Enter A:\n");
    scanf("%lf", &a);
    vs1 = a * a;
    vs2 = vs1 * vs1;
    a = vs2 * a;
    a = a * a * a;
    printf("A^15 = %.1f", a);
    return 0;
}
