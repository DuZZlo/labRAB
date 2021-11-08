
#include <stdio.h>
#include <math.h>

int main()
{
    int swt = 0, num;
    int A,B,C,ax,ay,bx,by,cx,cy;
    float AB, AC;
    while (swt<1){
        printf("Enter task number:\n");
        scanf("%d", &num);
        switch(num){
            case 1:
                printf("Enter A, B:\n");
                scanf("%d%d", &A, &B);
                if(A==B){
                    A=B=0;
                    printf("A = %d B = %d\n\n", A, B);
                }
                else{
                    if (A>B){
                        B=A;
                    }
                    else{
                        A=B;
                    }
                    printf("A = %d B = %d\n\n", A, B);
                }
                break;
            case 2:
                printf("Enter a,b,c:\n");
                scanf("%d%d%d", &A, &B, &C);
                if (A+B >= A+C && A+B >= B+C){
                    printf("max sum is %d\n\n", A+B);
                    break;
                }
                if (A+C >= A+B && A+C >= B+C){
                    printf("max sum is %d\n\n", A+C);
                    break;
                }
                if (B+C >= A+B && B+C >= A+C){
                    printf("max sum is %d\n\n", B+C);
                    break;
                }
            case 3:
                printf("Enter A(x,y), B(x,y), C(x,y):\n");
                scanf("%d%d%d%d%d%d", &ax, &ay, &bx, &by, &cx, &cy);
                AB = sqrt(pow(ax-bx,2) + pow(ay - by,2));
                AC = sqrt(pow(ax-cx,2) + pow(ay - cy,2));
                if (AB>AC){
                    printf("AC = %.2f, C - (%d,%d)\n\n", AC, cx, cy);
                }
                else{
                    printf("AB = %.2f, B - (%d,%d)\n\n", AB, bx, by);
                }
                break;
            case 4:
                printf("Enter A(x,y):\n");
                scanf("%d%d", &ax, &ay);
                if (ax>0){
                    if (ay>0){
                        printf("1 четверть\n\n");
                    }
                    else{
                        printf("2 четверть\n\n");
                    }
                }
                else{
                    if (ay>0){
                        printf("3 четверть\n\n");
                    }
                    else{
                        printf("4 четверть\n\n");
                    }
                }
            case 5:
                printf("Enter A:\n");
                scanf("%d", &A);
                if (A==0){
                    printf("нулевое число\n\n");
                    break;
                }
                if (A>0){
                    if (A%2==0){
                        printf("положительное четное число\n\n");
                    }
                    else{
                        printf("положительное нечетное число\n\n");
                    }
                }
                else{
                    if (A%2==0){
                        printf("отрицательное четное число\n\n");
                    }
                    else{
                        printf("отрицательное нечетное число\n\n");
                    }
                }
                break;
            case 6:
                A=0;
                while(A<1 || A>999){
                    printf("Enter A, (1 <= A <= 999):\n");
                    scanf("%d", &A);
                }
                if (A<100){
                    if (A%2==0){
                        printf("четное двузначное число\n\n");
                    }
                    else{
                        printf("нечетное двузначное число\n\n");
                    }
                }
                else{
                    if (A%2==0){
                        printf("четное трехзначное число\n\n");
                    }
                    else{
                        printf("нечетное трехзначное число\n\n");
                    }
                }
                break;
            default:
                swt+=1;
                break;
        }
    }
    return 0;
}
