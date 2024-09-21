#include<stdio.h>
int main(){
printf("enter the size of an array\n");
int n;
scanf("%d",&n);
  int array[n];

for(int i=0;i<n;i++){
    printf("Enter the %d eliment of the array  ",i+1);
    scanf("%d",&array[i]);
}
 
 for(int i=n-1;i>=0;i--){
    printf("%d ",array[i]);
 }

    return 0;
}