#include<stdio.h>
#include<math.h>
#include<stdbool.h>

// int main(){
//     int n,copy,reminder,sum=0,power=0;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     copy = n;
//     while(n>0){
//         n=n/10;
//         power++;
//     }
//     n=copy;
//     while(n>0){
//         reminder=n%10;
//         n=n/10;
//         sum+=pow(reminder,power);
//     }
//     if(copy==sum)
//         printf("AMSTRONG!!");
//     else      
//         printf("not!!");
// }
bool amstrong_check(int n){
     int copy,reminder,sum=0,power=0;
    
    copy = n;
    while(n>0){
        n=n/10;
        power++;
    }
    n=copy;
    while(n>0){
        reminder=n%10;
        n=n/10;
        sum+=pow(reminder,power);
    }
    if(copy==sum)
        return true;
    else
        return false;

}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(amstrong_check(i))
            printf("%d\n",i);
        
        
        
        }
        printf("\n ARE amstrong");
}

