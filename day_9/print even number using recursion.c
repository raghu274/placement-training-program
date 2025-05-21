#include <stdio.h>

void printEven(int n) {
    if (n <= 0) return; 
    printEven(n - 2);    
    printf("%d ", n); 
}

int main() {
    int limit;
    printf("Enter limit: ");
    scanf("%d", &limit);

    printEven(limit - (limit % 2)); 

    return 0;
}