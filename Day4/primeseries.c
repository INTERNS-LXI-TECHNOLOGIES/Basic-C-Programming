#include <stdio.h>
void prime(int n)
 {
    int j, flag = 1;
    for (j = 2; j <= n / 2; ++j)
 {
        if (n % j == 0)
 {
            primenumber = 0;
            break;
        }
    }
    return primenumber;
}
void main()
 {
    int n1, n2, i;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    printf("Prime numbers between %d and %d are: ", n1, n2);
    for (i = n1 + 1; i < n2; ++i)
 {
        prime(i);

        if (primenumber == 1)
            printf("%d ", i);
    }
    return 0;
}