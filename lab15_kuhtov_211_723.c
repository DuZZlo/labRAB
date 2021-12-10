
#include <stdio.h>

float PowerA3(float A, float B){
    B=A*A*A;
    return(B);
}

int Sign(float X){
    if (X<0){
        return(-1);
    }
    else if(X==0){
        return(0);
    }
    else{
        return(1);
    }
}

float RingS(float R1, float R2){
    float S = (3.14*R1*R1) - (3.14*R2*R2);
    return(S);
}

int Quarter(float x, float y){
    if (x==0 || y==0){
        return(0);
    }
    else{
        if(x>0){
            if(y>0){
                return(1);
            }
            else{
                return(4);
            }
        }
        else{
            if(y>0){
                return(2);
            }
            else{
                return(3);
            }
        }
    }
}

float Fact2(int N){
    int X;
    int i;
    if(N%2==1){
        X = 1;
        for(i=3; i<=N; i+=2){
            X*=i;
        }
        return(X);
    }
    else{
        X = 2;
        for(i=4; i<=N; i+=2){
            X*=i;
        }
        return(X);
    }
}

int main()
{
    int swt=1, num, i, N;
    float A, B, R1, R2, x, y;
    while(swt>0){
        printf("Введите номер задания:");
        scanf("%d", &num);
        switch(num){
            case 1:
                for(i=1; i<6; i+=1){
                    printf("Введите %d число А:\n", i);
                    scanf("%f", &A);
                    B = PowerA3(A,B);
                    printf("А^3 = %.2f\n", B);
                }
                printf("\n\n");
                break;
            case 2:
                printf("Введите числа А и B:");
                scanf("%f%f", &A, &B);
                printf("%d\n\n", Sign(A)+Sign(B));
                break;
            case 3:
                for(i=1; i<4; i+=1){
                    printf("Введите внешний и внутренний радиус для %d кольца:\n", i);
                    scanf("%f%f", &R1, &R2);
                    printf("S%d = %.2f\n", i, RingS(R1,R2));
                }
                printf("\n\n");
                break;
            case 4:
                for(i=1; i<4; i+=1){
                    printf("Введите координаты %d точки (x,y):\n", i);
                    scanf("%f%f", &x, &y);
                    printf("%d четверть\n", Quarter(x,y));
                }
                printf("\n\n");
                break;
            case 5:
                printf("Введите целое N>0:\n");
                scanf("%d", &N);
                printf("N!! = %.0f\n\n", Fact2(N));
                break;
            default:
                swt-=1;
                break;
        }
    }
    return 0;
}
