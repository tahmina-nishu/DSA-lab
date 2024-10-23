#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    do {
        printf("Enter a positive number : ");
        scanf("%d", &n);

        if (n >= 0)
            sum += n;
    }
    while (n >= 0);

    printf("Total sum of positive numbers entered = %d\n", sum);

    return 0;
}
