#include <stdio.h>

int is_prime(int n) {
    int i;
    if (n < 2)
        return 0; // false
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0; // false
    }
    return 1; // true
}

int reverse_number(int n) {
    int reversed = 0;
    while (n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return reversed;
}

int is_palin(int n) {
    return n == reverse_number(n);
}

int next_number(int n) {
    int nn = n + 1;
    while (1) {
        if (is_prime(nn) && is_palin(nn))
            return nn;
        nn++;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int nn = next_number(n);
    printf("%d", nn);
    return 0;
}
