
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

this i scrazy man

int main() {

    int n,amount,num_of_each,i;
    scanf("%d ",&n);
    // int denominations[n];
    
    int denominations[n];
    for(i=0;i<n;i++)
      scanf("%d ",&denominations[i]);  
    scanf("%d",&amount);
    
    i=n-1;
    
    // int n[denominations];
    while(amount>0){
        num_of_each= amount/(denominations[i]);
        printf("%d %d ",denominations[i],num_of_each);
        
        amount = amount - ((num_of_each)*(denominations[i]));
        i--;
        num_of_each =0;
        
    }
    
                    
}
