#include <math.h>
#include <stdio.h>

int main()
{
    float A, i, b;
    int swt=0, num, N, a;
    while(swt!=1){
        printf("Введите номер задания:");
        scanf("%d", &num);
        switch(num){
            case 1:
                printf("\nВведите цену 1кг конфет:");
                scanf("%f", &A);
                for(i=0.1; i<1.1; i+=0.1){
                    printf("%.2f кг конфет стоит: %.2f\n", i, A*i);
                }
                printf("\n");
                break;
            case 2:
                printf("Введите целое число N>0:");
                scanf("%d", &N);
                A=1.1;
                for(i=1.2; i<1.2 + N*0.1; i+=0.1){
                    A*=i;
                }
                printf("Произведение = %.2f\n\n", A);
            case 3:
                printf("Введите целове число N>0:");
                scanf("%d", &N);
                a=1;
                for(i=3; i<2*N - 1 + 2; i+=2){
                    a+=i;
                }
                printf("N^2 = %d\n\n", a);
                break;
            case 4:
                printf("Введите вещественное число А и целое N>0:");
                scanf("%f%d", &A, &N);
                b=1;
                for(i=1; i<N + 1; i+=1){
                    b=b+pow(A,i);
                }
                printf("%.2f\n\n", b);
                break;
            case 5:
                printf("Введите вещественное число А и целое N>0:");
                scanf("%f%d", &A, &N);
                b=1;
                for(i=1; i<N + 1; i+=1){
                    b=b+(pow(-1,i)*pow(A,i));
                }
                printf("%.2f\n\n", b);
                break;
            default:
                swt+=1;
                break;
        }
    }

    return 0;
}


