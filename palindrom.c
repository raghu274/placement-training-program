#include <stdio.h>

int main()
{
    int x, original;
    scanf("%d", &x);
    original = x; // Store the original number
    int ans = 0;

    while (x > 0) {
        int r = x % 10;
        ans = ans * 10 + r;
        x /= 10;
    }

    // Check if the original number is equal to its reversed version
    if (original == ans) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}
