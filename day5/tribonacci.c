#include <stdio.h>

int main() {
    int n, a=0, b=1, c=1, next;
    scanf("%d", &n);
    printf("%d %d %d ", a, b, c);
    for(int i=4; i<=n; i++) {
        next = a + b + c;
        printf("%d ", next);
        a = b; b = c; c = next;
    }
    return 0;
}