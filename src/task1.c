#include <stdio.h>
#include <stdlib.h>

// int matrix_input(int temp[n][n]){
//     for (int i = 0 ; i < n; i++){
//         for (int j = 0; j < n; j++){
//             scanf("%d", temp[i][j]);
//         }
//     }
// }

int main(){
    int n;
    int res = 1;
    res = scanf("%d", &n);
    if (res != 1 || n < 1){
        printf("n/a");
        return res;
    }

    // int **a = (int **)malloc(n * sizeof(int *)); 

    // for (int i = 0; i < n; ++i)
    //   a[i] = (int *)malloc(n * sizeof(int));

    // for (int i = 0; i < n; ++i)
    // {
    //     for (int j = 0; j < n; ++j)
    //     {
    //         scanf("%d", &a[i][j]);
    //     }
    // }

    int a[n][n], b[n][n], c[n][n];
    for (int i = 0 ; i < n && res == 1; i++){
        for (int j = 0; j < n && res == 1; j++){
            res = scanf("%d", &a[i][j]);
        }
    }
    if (res != 1){
        printf("n/a");
        return res;
    }

    for (int i = 0 ; i < n && res == 1; i++){
        for (int j = 0; j < n && res == 1; j++){
            res = scanf("%d", &b[i][j]);
        }
    }
    if (res != 1){
        printf("n/a");
        return res;
    }

    // int i2 = 0, j2 = 0;
    for (int i = 0 ; i < n; i++){
        for (int j = 0; j < n; j++){
            c[i][j] = 0;
            for (int k = 0; k < n; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (int i = 0 ; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    
    

    return 0;
}