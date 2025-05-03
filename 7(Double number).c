#include <stdio.h>
int main() {
    double number;
    printf("Enter a double number: ");
    scanf("%lf", &number);
    printf("You entered: %.lf\n", number);
    return 0;
}
