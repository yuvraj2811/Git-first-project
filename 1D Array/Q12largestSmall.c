#include<stdio.h>
#include<limits.h>
int main(){

int n;
printf("Enter the size of array\n");
scanf("%d",&n);
int arr[n];
printf("Enter the eliment of array\n");

for (int i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);
}
int max=INT_MIN;
int min=INT_MAX;

for (int i = 0; i < n; i++)
{
    if (arr[i]>max)
    {
        max = arr[i];
    }

    if (arr[i]<min)
    {
        min =arr[i];
    }
    
    
}
printf("%d is a max eliment \n",max);
printf("%d is a min eliment \n",min);

    return 0;
}