#include <stdio.h>

int main() {
    int limit;
    printf("Enter the limit: ");
    scanf("%d", &limit);

    printf("Even numbers up to %d:\n", limit);
    for (int i = 2; i <= limit; i += 2) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
