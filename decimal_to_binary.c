#include<stdio.h>
int main(){
    int num,r,b[32];
    int i=0;
    printf("Enter number: ");
    scanf("%d",&num);
    while(num>0){
        r = num%2;
        b[i]= r;
        num = num/2;
        i++;

    }
    printf("binary is : ");
    for(i-1;i>=0;i--)
        printf("%d ",b[i]);
}