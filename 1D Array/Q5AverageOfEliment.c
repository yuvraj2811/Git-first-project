#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of an array\n");
    scanf("%d", &n);

    int array[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter %d eliment of array ", i + 1);
        scanf("%d",&array[i]);
    }
  float sum,average;
  sum=0;
    for(int i=0;i<n;i++){
   sum = sum+array[i];
    }

    average= sum/n;

printf("The average of array is %0.2f ",average);

    return 0;
}