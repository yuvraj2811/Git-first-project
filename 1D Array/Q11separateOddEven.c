#include<stdio.h>
int main(){
int n;
printf("Enter your size of an array\n");
scanf("%d",&n);
int arr[n];
printf("Enter your eliment of an arry\n");

for (int i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);
}

int even,odd;
even=0; odd=0;
for (int i = 0; i < n; i++)
{
    if (arr[i]%2==0)
    {
        even++;
        
    }
    else{odd++;}
}
int evenArr[even];
int oddArr[odd];
int a=0;
int b=0;

for (int i = 0; i < n; i++)
{
    if (arr[i]%2==0)
    {
        evenArr[a]=arr[i];
    a++;
    }
    else{oddArr[b]=arr[i];b++;}
    
}

printf("Even = ");
for (int i = 0; i < even; i++)
{
    printf("%d,",evenArr[i]);
}
printf("\n");

printf("odd = ");
for (int i = 0; i < odd; i++)
{
    printf("%d,",oddArr[i]);
}
    return 0;
}