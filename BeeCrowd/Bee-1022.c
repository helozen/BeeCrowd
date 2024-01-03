#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

void simplify(int *a, int *b) {
    int g = gcd(*a, *b);
    *a /= g;
    *b /= g;
}

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        int n1, d1, n2, d2;
        char op;
        scanf("%d / %d %c %d / %d", &n1, &d1, &op, &n2, &d2);
        int res_n = 0, res_d = 0;
        switch (op) {
            case '+':
                res_n = n1 * d2 + n2 * d1;
                res_d = d1 * d2;
                break;
            case '-':
                res_n = n1 * d2 - n2 * d1;
                res_d = d1 * d2;
                break;
            case '*':
                res_n = n1 * n2;
                res_d = d1 * d2;
                break;
            case '/':
                res_n = n1 * d2;
                res_d = n2 * d1;
                break;
        }
        printf("%d/%d = ", res_n, res_d);
        simplify(&res_n, &res_d);
        printf("%d/%d\n", res_n, res_d);
    }
    return 0;
}