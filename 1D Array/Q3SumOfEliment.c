#include<stdio.h>
// sum of the element of an array.
int main(){
int n;
printf("Enter your size of array\n");
scanf("%d",&n);
int array[n];

for(int i=0;i<n;i++){
    printf("Enter your %d enliment of an array ",i+1);
    scanf("%d",&array[i]);
}
  int sum=0;
for(int i=0;i<n;i++){
    sum=sum+array[i];
}

printf("%d",sum);
    return 0;
}