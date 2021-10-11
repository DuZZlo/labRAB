
#include <stdio.h>
#include <math.h>

int main()
{
    int a, A, B, temp;
    //задание 1
    printf("Enter size in bytes:\n");
    scanf("%d", &a);
    printf("= %d Kb\n\n", a/1024);
    
    //задание 2
    do {
    printf("Enter A, B (A>B):\n");
    scanf("%d%d", &A, &B);
    } while (B>=A || B<0 || A<0);
    printf("B is %d times in A \n\n", A/B);
    
    //задание 3
     do {
    printf("Enter A, B (A>B):\n");
    scanf("%d%d", &A, &B);
    } while (B>=A || B<0 || A<0);
    temp = A/B;
    printf("space left - %d\n\n", A - temp*B);
    
    //задание 4
    do {
    printf("Enter a (2 signs):\n");
    scanf("%d", &a);
    } while (a/100!=0 || a/1<=9);
    temp = a/10;
    a = a - temp*10;
    a = a*10 + temp;
    printf("%d\n\n", a);
    
    //задание 5
    do {
    printf("Enter a (3 signs):\n");
    scanf("%d", &a);
    } while (a/1000!=0 || a/1<=99);
    temp = a/100;
    a = a - temp*100;
    a = a*10;
    a = a + temp;
    printf("%d", a);
    return 0;
}
