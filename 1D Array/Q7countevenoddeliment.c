#include<stdio.h>
int main(){

int n;
printf("Enter the size of an array\n");
scanf("%d",&n);

int array[n];

for (int  i = 0; i <n; i++)
{
    printf("Enter the %d eliment of an array ",i+1);
    scanf("%d",&array[i]);
}
int evenCount=0,oddCount=0;

for (int i = 0; i < n; i++)
{
    if(array[i]%2==0){evenCount++;}
    else{oddCount++;}
}
printf("%d eliment is  even & %d eliment is odd",evenCount,oddCount);

    return 0;
}