#include <stdio.h>
#include <assert.h>

int main(void) {

    int n, x, row, count = 0;

    printf("%s", "Enter n and x values: ");
    assert(scanf("%d%d", &n, &x) == 2);

    for(row = 1; row <= n; ++row)
        if(n * row >= x && x % row == 0)
            count++;

    printf("%d appears %d time/s\n", x, count);

    return 0;
}
