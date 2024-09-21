#include<stdio.h>
void input();
void output();

int main(){
int n;
printf("Enter the size of an array\n");
scanf("%d",&n);
int arr[n];
input(arr,n);

    return 0;
}

void input(int arr[],int n){
    printf("Enter the eliment of an array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    output(arr,n);
}

void output(int arr[],int n){
    printf("Output of an eliment\n");
for (int i = 0; i < n; i++)
{
    printf("%d ",arr[i]);
}

}


