#include <stdio.h>

void addOne(int *n) {
    *n += 1;
    return;
}


int main() {

    int n = 0;
    int *pn = &n;
    addOne(pn);
    printf("%d\n", n);
    return 0;
}