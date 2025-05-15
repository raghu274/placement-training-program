#include <stdio.h>

int main() {
    int x = 18;
    int flag = 0;  

    for (int i = 2; i < x; i++) {
        if (x % i == 0) {  
            flag++;
        }
    }

    printf("Flag value: %d\n", flag); 
    return 0;
}