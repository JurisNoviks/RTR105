#include <stdio.h>

int main()
{
    printf("Please enter 2 integer values: ");
    long a, b;

    scanf("%ld %ld", &a, &b);
    printf("%ld\n", a * b);
    return 0;
}
