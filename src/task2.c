#include <stdio.h>
#include <math.h>

#define PLATINUM_DENSITY 21500

int main(){
    double radius, mass, volume;

    int res = 1;

    res = scanf("%lf", &radius);
    if(res != 1 || radius <= 0){
        printf("n/a");
        return 1;
    }

    volume = (4.0 / 3) * M_PI * pow(radius, 3);

    mass = PLATINUM_DENSITY * volume;

    printf("%.0lf", round(mass));

    return 0;
}