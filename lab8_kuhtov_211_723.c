
#include <stdio.h>


int main()
{
    int a, A, B, temp, num;
    int i=1;
    while(i>0) {
        printf("Enter task number:\n");
        scanf("%d", &num);
        switch (num) {
        case 1:
            //задание 1
            printf("Enter size in bytes:\n");
            scanf("%d", &a);
            printf("= %d Kb\n\n", a/1024);
            break;
        case 2:
            //задание 2
            do {
            printf("Enter A, B (A>B):\n");
            scanf("%d%d", &A, &B);
            } while (B>=A || B<0 || A<0);
            printf("B is %d times in A \n\n", A/B);
            break;
        case 3:
            //задание 3
            do {
            printf("Enter A, B (A>B):\n");
            scanf("%d%d", &A, &B);
            } while (B>=A || B<0 || A<0);
            temp = A/B;
            printf("space left - %d\n\n", A - temp*B);
            break;
        case 4:
            //задание 4
            do {
            printf("Enter a (2 signs):\n");
            scanf("%d", &a);
            } while (a/100!=0 || a/1<=9);
            temp = a/10;
            a = a - temp*10;
            a = a*10 + temp;
            printf("%d\n\n", a);
            break;
        case 5:
            //задание 5
            do {
            printf("Enter a (3 signs):\n");
            scanf("%d", &a);
            } while (a/1000!=0 || a/1<=99);
            temp = a/100;
            a = a - temp*100;
            a = a*10;
            a = a + temp;
            printf("%d\n", a);
            break;
        default:
            i-=1;
            break;
        }
    }
    return 0;
}
