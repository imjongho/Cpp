#include <stdio.h>
int abs(int num) {
    if (num < 0) {
        num = -num;
    }
    return num;
}

double abs(double num) {
    if (num < 0) {
        num = -num;
    }
    return num;
}

int main() {
    printf("%d  %lf", abs(-5), abs(-5.5));
    

    return 0;
}
