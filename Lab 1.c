#include <stdio.h>

int main () {
    int n;
    float x , x1 = 1.0, y = 0;
    scanf("%f", &x);
    for (n = 11; n >= 1; n--) {
        y += n * x1;
        x1 *= x;
    }
    printf("%f\n", y);
    return 0;
}
