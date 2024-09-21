#include <stdio.h>

int main() {
    int num;

    // Get the user's input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Print from the user's input to 1
    for(int i = num; i >= 1; i--) {
        printf("%d\n", i);
    }

    return 0;
}