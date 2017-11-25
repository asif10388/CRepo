#include <stdio.h>

int main(){

    int a;
    int i;
    int sum=0;

    printf("Enter Number: ");
    scanf("%d",&a);

    for(i=0;i<=a;i++){

        sum=sum+i;

    }
    printf("%d",sum);
}
