
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int swt=1, num, N, i, chislo, chislo1, Nmin, Nmax;
    float chislof;
    int *arrA;
    int *arrB;
    float *arrBf;
    while(swt>0){
        printf("Введите номер задания:");
        scanf("%d", &num);
        switch(num){
            case 1:
                printf("Введите размер N массивов A и B:");
                scanf("%d", &N);
                arrA = malloc(sizeof(int)*N);
                arrB = malloc(sizeof(int)*N);
                for(i=0; i<N; i+=1){
                    printf("Введите %d элемент массива A:", i + 1);
                    scanf("%d", &arrA[i]);
                }
                 for(i=0; i<N; i+=1){
                    printf("Введите %d элемент массива B:", i + 1);
                    scanf("%d", &arrB[i]);
                }
                for(i=0; i<N; i+=1){
                    chislo = arrA[i];
                    arrA[i] = arrB[i];
                    arrB[i] = chislo;
                }
                for(i=0; i<N; i+=1){
                    printf("%d ", arrA[i]);    
                }
                printf("\n");
                for(i=0; i<N; i+=1){
                    printf("%d ", arrB[i]);    
                }
                printf("\n\n");
                free(arrA);
                free(arrB);
                break;
            case 2:
                printf("Введите размер N массива A:");
                scanf("%d", &N);
                arrA = malloc(sizeof(int)*N);
                arrBf = malloc(sizeof(float)*N);
                for(i=0; i<N; i+=1){
                    printf("Введите %d элемент массива A:", i + 1);
                    scanf("%d", &arrA[i]);
                }
                arrBf[0]=arrA[0];
                chislof = arrA[0];
                for(i=1; i<N; i+=1){
                    chislof+=arrA[i];
                    arrBf[i]=(chislof/(i + 1));
                }
                for(i=0; i<N; i+=1){
                    printf("%.2f ", arrBf[i]);    
                }
                printf("\n\n");
                free(arrA);
                free(arrBf);
                break;
            case 3:
                printf("Введите размер N массива A:");
                scanf("%d", &N);
                arrA = malloc(sizeof(int)*N);
                for(i=0; i<N; i+=1){
                    printf("Введите %d элемент массива A:", i + 1);
                    scanf("%d", &arrA[i]);
                }
                chislo=0;
                for(i=N - 1; i>0; i-=1){
                    if(arrA[i]%2==1){
                        chislo=arrA[i];
                        break;
                    }   
                }
                if(chislo!=0){
                    for(i=0; i<N; i+=1){
                        if(arrA[i]%2==1){
                            arrA[i]+=chislo;
                        }
                    }
                    for(i=0; i<N; i+=1){
                        printf("%d ", arrA[i]);
                    }
                }
                else{
                    printf("В массиве отсутствуют нечетные числа");
                }
                printf("\n\n");
                free(arrA);
                break;
            case 4:
                printf("Введите размер N массива A:");
                scanf("%d", &N);
                arrA = malloc(sizeof(int)*N);
                for(i=0; i<N; i+=1){
                    printf("Введите %d элемент массива A:", i + 1);
                    scanf("%d", &arrA[i]);
                }
                chislo=arrA[0] + 1;
                chislo1=arrA[0] - 1;
                for(i=0; i<N; i+=1){
                    if(chislo>arrA[i]){
                        chislo=arrA[i];
                        Nmin=i;
                    }
                    if(chislo1<arrA[i]){
                        chislo1=arrA[i];
                        Nmax=i;
                    }
                }
                if(Nmin<Nmax){
                    for(i=Nmin + 1; i<Nmax; i+=1){
                    arrA[i]=0;
                    }
                }
                else{
                    for(i=Nmax + 1; i<Nmin; i+=1){
                    arrA[i]=0;
                    }
                }
                for(i=0; i<N; i+=1){
                    printf("%d ", arrA[i]);
                }
                printf("\n\n");
                free(arrA);
                break;
            case 5:
                printf("Введите размер N массива A:");
                scanf("%d", &N);
                arrA = malloc(sizeof(int)*N);
                for(i=1; i<N; i+=1){
                    printf("Введите %d элемент массива:", i + 1);
                    scanf("%d", &arrA[i]);
                    arrA[0]=arrA[i] - 1;
                    while(arrA[i]<=arrA[i - 1]){
                        printf("Числа должны возрастать, введите другое:");
                        scanf("%d", &arrA[i]);
                    }
                }
                printf("Введите 1 элемент массива:");
                scanf("%d", &arrA[0]);
                for(i=1; i<N; i+=1){
                    while(arrA[0]==arrA[i]){
                        printf("Введите другое число:");
                        scanf("%d", &arrA[0]);
                    }
                }
                if(arrA[0]<arrA[1]){
                    for(i=0; i<N; i+=1){
                    printf("%d ", arrA[i]);
                }
                printf("\n\n"); 
                }
                else{
                    for(i=1; i<N - 1; i+=1){
                        chislo = arrA[i - 1];
                        arrA[i - 1] = arrA[i];
                        arrA[i] = chislo;
                        if(arrA[i]>arrA[i - 1]&&arrA[i]<arrA[i + 1]){
                            break;
                        }
                    }
                    if(arrA[N - 2]>arrA[N - 1]){
                        chislo = arrA[N - 2];
                        arrA[N - 2] = arrA[N - 1];
                        arrA[N - 1] = chislo;
                    }
                    for(i=0; i<N; i+=1){
                        printf("%d ", arrA[i]);
                    }
                    printf("\n\n");
                }
                free(arrA);
                break;
            default:
                swt-=1;
                break;
        }
    }

    return 0;
}
