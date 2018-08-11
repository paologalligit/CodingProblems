#include <stdio.h>
#include <assert.h>

int compute_rest(int x) {
    int sum = 0;

    while(x) {
        sum += x % 10;
        x /= 10;
    }

    return sum;
}

int main(void) {
    int n;
    printf("%s: ", "Insert a number");
    assert(scanf("%d", &n) == 1);

    int rest = compute_rest(n);

    printf("The %d-th perfect number is %d\n", n, n * 10 + (10 - rest));

    return 0;
}
