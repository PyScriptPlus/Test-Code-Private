#include <stdio.h>

int main() {

    double meritScore;
    double middleScore;
    scanf("%lf %lf", &meritScore, &middleScore);

    double sum = (meritScore * 5) + middleScore;
    printf("%lf", sum);

    return 0;
}