#include <stdio.h>

int main() {
    int a = 0, b = 1, next, n, sum = 0;

    printf("Enter number :");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; i++) {

      printf("%d ", a);

        sum+=a;
        next = a + b;
        a = b;
        b = next;

    }

  printf("\nFibonacci Sum = %d\n", sum);

    return 0;
}
