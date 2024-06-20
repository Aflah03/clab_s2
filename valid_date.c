#include<stdio.h>    
int main(){
    int date,month,year;
    printf("Enter the date: ");
    scanf("%d %d %d",&date,&month,&year);
    /*here date ranges form 1 to 31
    month form 1 to 12 
    year form 1800 to 2040
    */
    if(year>=1800 &&year<=2040){
        if(month>=1 && month <=12){
            if((date >= 1 && date<=31 ) &&(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)){
                printf("valid date");
            }
            else if((date >= 1 && date<=30 ) &&(month==4 || month==6 || month==9 || month==11))
                printf("valid date");
            else if((date >= 1 && date<=28 ) && month ==2)
                printf("valid  date");
            else if((date >= 1 && date<=29 ) && ((year%4==0  && year%100 !=0)||(year%400==0)))
                printf("valid date");
            else    
                printf("Invalid date");
        }
         else    
            printf("Invalid date");
        
    }  
    else    
         printf("Invalid date");  
}