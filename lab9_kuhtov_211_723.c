
#include <stdio.h>

int main()
{
    int N, i, K, num, A, B, C, S, Snez, CA, CB, temp;
    int dni[366];
    int swt = 1;
    while (swt > 0){
        printf("Enter task number:\n");
        scanf("%d", &num);
        switch (num){
            case 1:
                //задание 1
                printf("Enter N seconds:\n");
                scanf("%d", &N);
                printf("%d seconds passed since last minute\n\n", N%60);
                break;
            case 3:
                //задание 3
                do {
                printf("Enter K (1<=K<=365) and N (1<=N<=7):\n");
                scanf("%d%d", &K, &N);
                } while(K<1 || K>365 || N<1 || N>7);
                for (i=1; i<366; i++){
                    if (N!=7){
                        dni[i]=N;
                        N+=1;
                    }
                    else{
                        dni[i]=N;
                        N=1;
                    }
                }
                printf("%d day is - %d\n\n", K, dni[K]);
                break;
            case 2:
                //задание 2
                do {
                printf("Enter K (1<=K<=365):\n");
                scanf("%d", &K);
                N=1;
                } while(K<1 || K>365);
                for (i=1; i<366; i++){
                    if (N!=6){
                        dni[i]=N;
                        N+=1;
                    }
                    else{
                        dni[i]=N;
                        N=0;
                    }
                }
                printf("%d day is - %d\n\n", K, dni[K]);
                break;
            case 4:
                //задание 4
                printf("Enter A, B, C:\n");
                scanf("%d%d%d", &A, &B, &C);
                if (C>A || C>B){
                    printf("0");
                }
                temp = C;
                CB = C;
                //по стороне заполнять
                while(C<A){
                    if (C+temp <= A){
                        C+=temp;
                    }
                    else{
                        break;
                    }
                }
                CA = C;
                C = CB;
                while (C<B){
                    if (C+temp <= B){
                        C+=temp;
                    }
                    else{
                        break;
                    }
                }
                CB = C;
                printf("S = %d\n\n", CA*CB);
                break;
            case 5:
                do{
                    printf("Enter Year:\n");
                    scanf("%d", &A);
                } while(A<=0);
                if (A%100 == 0){
                    printf("it is %d century\n\n", A/100);
                }
                else{
                    printf("it is %d century\n\n", A/100 + 1);
                }
                break;
            default:
                swt-=1;
                break;
        }
    }
    return 0;
}


