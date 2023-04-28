#include <stdio.h>
#include <math.h>
int isComposite(int num);
int main() {
    int a, b, i;
    printf("Enter the range (a, b): ");
    scanf("%d %d", &a, &b);
    printf("Composite numbers between %d and %d are: ", a, b);
    for (i = a; i <= b; i++) {
        if (isComposite(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}
int isComposite(int num) {
    int i;
    if (num <= 1) {
        return 0; 
    }
    for (i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 1;  
        }
    }
    return 0;
}