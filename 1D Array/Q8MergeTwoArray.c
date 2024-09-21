#include<stdio.h>
int main(){

int n,m;
printf("Enter the size of two arrays\n");
scanf("%d%d",&n,&m);

int array[n];
int array1[m];
 

for (int  i = 0; i <n; i++)
{
    printf("Enter the %d eliment of an 1st array ",i+1);
    scanf("%d",&array[i]);
}
printf("\n");

for (int  i = 0; i <m; i++)
{
    printf("Enter the %d eliment of an 2nd array ",i+1);
    scanf("%d",&array1[i]);
}

int k=n+m;
int array2[k];

for (int i = 0; i < n; i++)
{
    array2[i] =array[i];
}

for (int i = 0; i < m; i++)
{
    array2[i+n] =array1[i];
}

printf("After merging  two array\n");

for (int i = 0; i < k; i++)
{
    printf("%d ",array2[i]);
}


return 0;
}