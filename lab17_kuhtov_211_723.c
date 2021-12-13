#include <stdlib.h>
#include <stdio.h>

int main()
{
    int swt=1, num, N, K, L, i, j;
    float chislo;
    int *arr;
    while(swt>0){
        printf("Введите номер задания:");
        scanf("%d", &num);
        switch(num){
            case 1:
                printf("Введите размер массива N и целые числа K, L (1<=K<=L<=N):");
                scanf("%d%d%d", &N, &K, &L);
                arr = malloc(sizeof(int)*N);
                for(i=0; i<N; i+=1){
                    printf("Введите %d элемент массива:", i + 1);
                    scanf("%d", &arr[i]);
                }
                chislo=0;
                for(i=K - 1; i<=L - 1; i+=1){
                    chislo+=arr[i];
                }
                
                printf("Ср арифм = %.2f\n\n", chislo/=(L - K + 1));
                free(arr);
                break;
            case 2:
                printf("Введите размер массива N:");
                scanf("%d", &N);
                arr = malloc(sizeof(int)*N);
                printf("\n");
                for(i=0; i<N; i+=1){
                    printf("Введите %d элемент массива:", i + 1);
                    scanf("%d", &arr[i]);
                    for(j=0; j<i; j+=1){
                        while(arr[j]==arr[i]){
                            printf("Элементы не должны повторяться, введите другое число:");
                            scanf("%d", &arr[i]);
                        }
                    }
                }
                j = arr[1] - arr[0];
                L=0;
                for(i=1; i<N; i+=1){
                    chislo = arr[i] - arr[i - 1];
                    if(j!=chislo){
                        printf("0");
                        L=1;
                        break;
                    }
                }
                if(L==0){
                    printf("%.0f", chislo);
                }
                free(arr);
                printf("\n\n");
                break;
            case 3:
                printf("Введите размер массива N:");
                scanf("%d", &N);
                arr = malloc(sizeof(int)*N);
                for(i=0; i<N; i+=1){
                    printf("Введите %d элемент массива:", i + 1);
                    scanf("%d", &arr[i]);
                }
                chislo = arr[1] + 1;
                for(i=1; i<N; i+=2){
                    if(arr[i]<chislo){
                        chislo = arr[i];
                    }
                }
                printf("%.0f\n\n", chislo);
                free(arr);
                break;
            case 4:
                printf("Введите размер массива N:");
                scanf("%d", &N);
                arr = malloc(sizeof(int)*N);
                for(i=0; i<N; i+=1){
                    printf("Введите %d элемент массива:", i + 1);
                    scanf("%d", &arr[i]);
                }
                for(i=1; i<N - 1; i+=1){
                    if(arr[i]>arr[i - 1]&&arr[i]>arr[i + 1]){
                        j=i;
                        i+=2;
                    }
                }
                printf("%d\n\n", j + 1);
                free(arr);
                break;
            case 5:
                printf("Введите размер массива N:");
                scanf("%d", &N);
                arr = malloc(sizeof(int)*N);
                chislo = 0;
                while(chislo!=1){
                    for(i=0; i<N; i+=1){
                        printf("Введите %d элемент массива, так чтобы повторялись только 2 числа:", i + 1);
                        scanf("%d", &arr[i]);
                        for(j=0; j<i; j+=1){
                            if(arr[j]==arr[i]){
                                chislo+=1;
                                L=j + 1;
                                K=i + 1;
                            }
                        }
                    }
                    if(chislo!=1){
                        printf("Числа были введены неправильно, введите их заново:\n");
                    }
                    else{
                            printf("чисда под номерами %d и %d равны\n\n", L, K);
                    }
                }
                free(arr);
                break;
            default:
                swt-=1;
                free(arr);
                break;
        }
    }
    return 0;
}
