#include<stdio.h>
int main(){
int n ;
printf("Enter the size of an array\n");
scanf("%d",&n);

int arr[n];
printf("Enter the elements of an array\n");

for (int i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);
}

float averageEven,averageOdd,sumEven,sumOdd;
int countEven,countOdd;
countEven=0;
countOdd=0;
for (int i = 0; i < n; i++)
{
    if (arr[i]%2==0)
    {
   sumEven=sumEven+arr[i];
        countEven++;
    }
    else{
        sumOdd=sumOdd+arr[i];
        countOdd++;}
}
averageEven = sumEven/countEven;
averageOdd = sumOdd/countOdd;

printf("The average of even number of sum is %0.2f\n",averageEven);
printf("The average of odd number of sum is %0.2f\n",averageOdd);

    return 0;
}