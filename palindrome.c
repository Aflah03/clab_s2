
//USING ONLY MAIN FUNCTION
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[20];
//     int low,high,i,flag=0;
//     printf("enter the string: ");
//     gets(str);
    
//     low =0;
//     high = strlen(str)-1;
//     while(low<high){
//         if(str[low++]!= str[high--]){
//             flag=1;
//             printf("Not a palidrome");
//             break;
//         }
//     }
//     if(flag==0)
//         printf("palindrome!!");

// }

//using function
// #include<stdio.h>
// #include<string.h>
// void palindrome_check(char str[]){
//         int flag=0,low=0,high;
//         high = strlen(str)-1;
//         while(low<high){
//             if(str[low++]!=str[high--]){
//                 flag=1;
//                 printf("Not a Panlindrome");
//                 break;

//             }
//         }
//         if(flag==0)
//             printf("PALINDROME!!");
// }


// int main(){
//     char str[20];
//     printf("enter the string: ");
//     gets(str);
//     palindrome_check(str);
// }

// PASSING LINE OF TEXT RATHER THAN SINGLE WORD
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool palindrome_check(char str[],int low,int high){
        int flag=0;
        while(low<high){
            if(str[low++]!=str[high--]){
                flag=1;
                return false;
                break;

            }
        }
        if(flag==0)
            return true;
}
int main(){
    char str[20];
    int i,len,j;
    printf("enter the string: ");
    gets(str);
    len = strlen(str)-1;
    printf("%d",len);
    int low=0,high;
    printf("hi");
    for(i=0;i<(strlen(str));i++){
        
        if(str[i]==' ' || str[i]=='\0'){
            high =i-1;

            if(palindrome_check(str,low,high)){
                for(j=low;j<high;j++){
                    printf("%c",str[j]);
                }
            }
            
            low=high+1;
        }
            
    }
}