
#include <stdio.h>
#include <malloc.h>
#include <math.h>

int main()
{
    int *arr;
    int swt=1, num, N, i, A, D, B, j, k;
    printf("Введите номер задания:");
    scanf("%d", &num);
    switch(num){
        case 1:
            printf("Введите N>0:");
            scanf("%d", &N);
            arr = (int*)malloc(N*sizeof(int));
            arr[0]=1;
            for(i=1; i<N; i+=1){
                arr[i]=arr[i - 1] + 2;
            }
            for(i=0; i<N; i+=1){
                printf("%d ", arr[i]);
            }
            break;
        case 2:
            printf("Введите N>1, A - Первый член и D - знаменатель геом. прог. :");
            scanf("%d%d%d", &N, &A, &D);
            arr = (int*)malloc(N*sizeof(int));
            for(i=1; i<=N; i+=1){
                arr[i - 1]=A*pow(D,i - 1);
            }
            for(i=0; i<N; i+=1){
                printf("%d ", arr[i]);
            }
            break;
        case 3:
            printf("Введите N>2, A и B:");
            scanf("%d%d%d", &N, &A, &B);
            arr = (int*)malloc(N*sizeof(int));
            arr[0]=A;
            arr[1]=B;
            for(i=2; i<=N; i+=1){
                for(j=i - 1; j>=0; j-=1){
                    arr[i]+=arr[j];
                }
            }
            for(i=0; i<N; i+=1){
                printf("%d ", arr[i]);
            }
            break;
        case 4:
            printf("Введите размер массива N:");
            scanf("%d", &N);
            arr = (int*)malloc(N*sizeof(int));
            j=0;
            k=-1;
            for(i=0; i<N; i+=1){
                printf("Введите %d элемент массива:", i + 1);
                scanf("%d", &arr[i]);
            }
            for(i=0; i<N; i+=1){
                if(i%2==0){
                    k+=1;
                    printf("%d ", arr[k]);
                }
                else{
                    j+=1;
                    printf("%d ", arr[N - j]);
                    
                }
            }
            break;
        case 5:
            printf("Введите размер массива N:");
            scanf("%d", &N);
            arr = (int*)malloc(N*sizeof(int));
            for(i=0; i<N; i+=1){
                printf("Введите %d элемент массива:", i + 1);
                scanf("%d", &arr[i]);
            }
            if(N%2==0){
                for(i=0; i<N; i+=2){
                    printf("%d ", arr[i]);
                }
                for(i=N - 1; i>0; i-=2){
                    printf("%d ", arr[i]);
                }
            }
            else{
               for(i=0; i<N; i+=2){
                    printf("%d ", arr[i]);
                }
                for(i=N - 2; i>0; i-=2){
                    printf("%d ", arr[i]);
                }
            }
    }
    return 0;
}
