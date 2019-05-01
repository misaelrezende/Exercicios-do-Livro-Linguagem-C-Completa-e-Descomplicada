#include <stdio.h>

int main(){
    int A[10][10],i ,j;
    // ou use os 100 valores abaixo deste código
    printf("Digite os 100 elementos da matriz: ");
    for(i = 0; i < 10; i++)
        for(j = 0; j < 10; j++)
            scanf("%d", &A[i][j]);

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            if(i < j)
                A[i][j] = (2*i) + (7*j) - 2;
            else if(i == j)
                A[i][j] = (3*(i*i)) - 1;
            else
                A[i][j] = (4*(i*i*i)) + (5*(j*j)) + 1;
        }
    }

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++)
            printf("%6d ", A[i][j]);
        printf("\n");
    }

    return 0;
}

/* 
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 
28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52
53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77
78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99
 */