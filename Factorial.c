#include <stdio.h>

int main(){

int a;
int b;
int c = 1;

printf("Enter Number: ");
scanf("%d",&a);

for(b=1;b<=a;b++){
    c=c*b;
}
printf("%d",c);



}
