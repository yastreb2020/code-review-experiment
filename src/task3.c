#include <stdio.h>
#include <stdlib.h>

typedef struct person {
    char name[20];
    char surname[20];
    int height;
} person;

void check(int condition){
    if (condition) {
        printf("n/a");
        exit(1);
    }
}

int main(){
    // number of people input value
    int n, height;
    int res = scanf("%d", &n);
    check(res != 1 || n < 1);

    // people info input
    person arr[n];
    res = 3;
    for (int i = 0; i < n && res == 3; i++){
        res = scanf("%s", &arr[i].name);
        res += scanf("%s", &arr[i].surname);
        res += scanf("%d", &arr[i].height);
    }
    check(res != 3);

    // check for people ages
    for (int i = 0; i < n && res != 1; i++){
        if (arr[i].height < 0){
            res = 1;
        }
    }
    check(res == 1);

    // searched height input
    res = scanf("%d", &height);
    check(res != 1 && height > -1);

    // outputting people higher or equal to such height
    int count = 0;
    for (int i = 0; i < n; i++){
        if (arr[i].height >= height){
            if (count > 0) printf(", ");
            printf("%s %s", arr[i].name, arr[i].surname);
            count++;
        }
    }

    // no people higher than such height case
    if(count == 0){
        printf("Nothing");
    }

    return 0;
}