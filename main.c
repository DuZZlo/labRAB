
#include <stdio.h>

int main()
{
    int swt=1, num, A, B, i, j, N, P;
    float a;
    while(swt>0){
        printf("Введите номер задания:");
        scanf("%d", &num);
        switch(num){
            case 1:
                printf("Введите целые числа A и B (A<B):");
                scanf("%d%d", &A, &B);
                for(i=A; i<B + 1; i+=1){
                    for(j=0;j<i;j+=1){
                        printf("%d", i);
                    }
                    printf("\n");
                }
                printf("\n\n");
                break;
            case 2:
                printf("Введите положительные числа A и B (A>B):");
                scanf("%d%d", &A, &B);
                while(A>=B){
                    A-=B;
                }
                printf("Незанятая часть - %d\n\n", A);
                break;
            case 3:
                printf("Введите целое число N>1:");
                scanf("%d", &N);
                A=0;
                i=1;
                while(A<N){
                    A+=i;
                    i+=1;
                }
                printf("K=%d Сумма = %d\n\n", i - 1, A);
                break;
            case 4:
                printf("Введите целое число 0<P<25:");
                scanf("%d", &P);
                a=1000;
                i=0;
                while(a<1100){
                    i+=1;
                    a=(float)P*a*0.01 + a;
                }
                printf("Итоговый размер вклада - %.2f после %d мес.\n\n", a, i);
                break;
            case 5:
                printf("Введите целые положительные A и B:");
                scanf("%d%d", &A, &B);
                while(A<B || B<A){
                    if(A>B){
                        A=A-B;
                    }
                    else{
                        B=B-A;
                    }
                }
                printf("%d\n\n", A);
                break;
            case 6:
                printf("Введите число Фибоначчи N>1:");
                scanf("%d", &N);
                i=0;
                P=1;
                A=0;
                j=0;
                while(A<N){
                    A=i+P;
                    i=P;
                    P=A;
                    if (A>N){
                        printf("Введите число Фибоначчи:");
                        scanf("%d", &N);
                        A=0;
                        j=0;
                        i=0;
                        P=1;
                    }
                    else{
                        j+=1;
                    }
                }
                printf("Это число под номером %d\n\n", j + 2);
                break;
            default:
                swt-=1;
                break;
        }
    }

    return 0;
}
