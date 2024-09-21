#include <stdio.h>

// Multiply of all eliment of an eliment of an array
int main()
{
    int n;
    printf("Enter the size of an array\n");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter youe %d eliment ", i + 1);
        scanf("%d", &array[i]);
    }
    int multi = 1;
    for (int i = 0; i < n; i++)
    {
        multi = multi * array[i];
    }
    printf("product = %d", multi);

    return 0;
}