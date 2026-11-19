#include <stdio.h>
#include "myarrfunc.h"
#define SIZE 100

int main(void){
    int arr[SIZE] ={0};
    int n=0;
    char vib;
    do{
        printf("\n----------------------------\n");
        printf("a   Задать размер массива\n");
        printf("b   Заполнить массив\n");
        printf("c   Представление массива (значение, адреса)\n");
        printf("d   1\n");
        printf("e   2\n");
        printf("f   3\n");
        printf("g   Выход\n");
        printf("Введите пункт:");
        if (scanf(" %c",&vib)==EOF){
            break;
        }
        switch(vib){
            case 'a':
            case 'A':
                printf("Введите размер массива до %d:", SIZE);
                int res = scanf("%d",&n);
                if (res == EOF){
                    return 0;
                }
                if (res != 1){
                    printf("Введено некоретно\n");
                    int c;
                    while ((c = getchar())!='\n' && c != EOF)
                    break;
                }
                if (n<0 || n> SIZE){
                    printf("НЕВЕРНО ВВЕДЕН РАЗМЕР");
                    n=0;
                }
                else{
                    printf("Размер установелен:%d",n);
                }
                break;
            case 'b':
            case 'B':
                if (n ==0){
                    printf("Введи сначало размер");
                    break;
                }
                else{
                    printf("Введи %d элементов: ",n);
                    for (int i = 0; i<n; i++){
                        printf("Элемент[%d]",i);
                        int res = scanf("%d",arr+i);
                        if (res == EOF){
                            return 0;
                        }
                        if (res != 1){
                            printf("Введено некоретно!\n");
                            i--;
                            int c;
                            while ((c = getchar())!='\n' && c != EOF)
                            break;
                        }
                    }
                }
                break;
            case 'c':
            case 'C':
                if (n==0){
                    printf("Массив пустой\n");
                }
                else{
                    printf("Представление массива\n");
                    for (int i=0;i<n;i++){
                        printf("Индекс: %d | Значение: %d | Адрес: %p\n",i,*(arr+i),(arr+i));
                    }
                }
                break;
            case 'd':
            case 'D':
                if (n==0){
                     printf("Массив пустой\n");
                }
                else{
                    int k;
                    printf("Введите К:");
                    if (scanf("%d",&k)==EOF){
                        return 0;
                    }
                    index_if_bol_k( arr, n, k);
                }
                break;
            case 'e':
            case 'E': 
                if (n==0){
                     printf("Массив пустой\n");
                }
                else{
                    kol_index_max_min(arr,n);
                }
                break;
            case 'f':
            case 'F': 
                if (n==0){
                     printf("Массив пустой\n");
                }
                else{
                    int k;
                    printf("Введите К:");
                    if (scanf("%d",&k)==EOF){
                        return 0;
                    }
                    int res=sum_elemen(arr, k,n);
                    printf("Сумма элементов:%d",res);
                }
                break;
            case 'g':
            case 'G': 
                printf("Exit");
                break;
            default:
                printf("невверная команда!\n");
                int c;
                while ((c = getchar())!='\n' && c != EOF){}
                break;
        }
    }while (vib != 'g' && vib != 'G');
    return 0;
}