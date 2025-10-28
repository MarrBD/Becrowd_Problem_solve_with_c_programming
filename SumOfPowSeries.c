#include <stdio.h>
#include <math.h>

int main() {
    long long int i, sum = 0;
    int p;

    for (i = 3; i <= 10; i += 4) {
        for (p = 2; p <= 20; p += 2) {
            sum += pow(i, p);
        }
    }

    printf("Sum of the computed values: %lld\n", sum);

    return 0;
}
