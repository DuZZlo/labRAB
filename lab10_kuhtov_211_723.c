
#include <stdio.h>

int main()
{
    int swt = 0, num, A, B, C;
    while (swt<1){
        printf("Enter task number:\n");
        scanf("%d", &num);
        switch (num){
            case 1:
                printf("Enter A, B:\n");
                scanf("%d%d", &A, &B);
                if (A>2 && B<=3){
                    printf("Справедливы неравенства A > 2 и B ≤ 3 - True\n\n");
                }
                else{
                    printf("Справедливы неравенства A > 2 и B ≤ 3 - False\n\n");
                }
                break;
            case 2:
                printf("Enter A, B, C:\n");
                scanf("%d%d%d", &A, &B, &C);
                if (A<B<C){
                    printf("Справедливо двойное неравенство A < B < C - True\n\n");
                }
                else{
                    printf("Справедливо двойное неравенство A < B < C - False\n\n");
                }
                break;
            case 3:
                printf("Enter A:\n");
                scanf("%d", &A);
                if (A%2==0 && 9<A && A<100){
                    printf("Данное число является четным двузначным - True\n\n");
                }
                else{
                    printf("Данное число является четным двузначным - False\n\n");
                }
                break;
            case 4:
                printf("Enter 3 digit A:\n");
                scanf("%d", &A);
                num = A/10;
                if ((A/100 < num%10 && num%10 < A%10)||(A/100 > num%10 && num%10 > A%10)){
                    printf("Цифры данного числа образуют возрастающую или убывающую последовательность - True\n\n");
                }
                else{
                    printf("Цифры данного числа образуют возрастающую или убывающую последовательность - False\n\n");
                }
                break;
            case 5:
                printf("Enter 4 digit A:\n");
                scanf("%d", &A);
                if (A/1000 == A%10 && A/100%10 == A%100/10){
                    printf("Данное число читается одинаково слева направо и справа налево - True\n\n");
                }
                else{
                    printf("Данное число читается одинаково слева направо и справа налево - False\n\n");
                }
                break;
            case 6:
                printf("Enter a,b,c:\n");
                scanf("%d%d%d", &A, &B, &C);
                if ((A*A == B*B + C*C)||(B*B == A*A + C*C)||(C*C == A*A + B*B)){
                    printf("Треугольник со сторонами a, b, c является прямоугольным - True\n\n");
                }
                else{
                    printf("Треугольник со сторонами a, b, c является прямоугольным - False\n\n");
                }
                break;
            case 7:
                printf("Enter a,b,c:\n");
                scanf("%d%d%d", &A, &B, &C);
                if((A+B <= C)||(A+C <= B)||(B+C <= A)){
                    printf("Существует треугольник со сторонами a, b, c - False\n\n");
                }
                else{
                    printf("Существует треугольник со сторонами a, b, c - True\n\n");
                }
                break;
            default:
                swt+=1;
                break;
        }
    }
    return 0;
}
