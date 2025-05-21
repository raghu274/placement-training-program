#include <stdio.h>

int main() {
    int limit, i = 2; 
    printf("Enter limit: ");
    scanf("%d", &limit);

    while (i <= limit) {
        printf("%d ", i);
        i += 2; 
    }

    return 0;
}
  