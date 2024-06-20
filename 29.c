#include<stdio.h>
#include<string.h>
int string_length(char*);
// void string_copy(char*,char*);
// int String_Comparison(char*,char*);
// void string_concatinate(char*,char*);
int main(){
    int choice;
    char S1[30],S2[30];
    printf("Choose Funtion:\n");
    printf("1- String Length\n2- String_Copy\n3-String_comparison\n4-string_concatenation\n");
    scanf("%d",&choice);
    if(choice == 1){
        printf("enter string :");
        scanf("%[^/n]",S1);
        string_length(S1);
        }

    // else if(choice == 2)
    //     {printf("enter strings : ");
    //     gets(s1);
    //     gets(s2);
    //     string_copy(s1,s2);
    //     }
    // else if(choice == 3) {
    //    printf("enter strings : ");
    //     gets(s1);
    //     gets(s2);
    //     String_Comparison(s1,s2);
    //     }
    //  else if(choice == 4) {
    //    printf("enter strings : ");
    //     gets(s1);
    //     gets(s2);
    //     string_concatinate(s1,s2);
    //     }

    else printf("Invalid ENtry !!");
    return 0;
}
int string_length(char *s1){
        int i=0;
        printf("%d",i);
        while(*(s1+i)!= '\0'){
            i++;
        }
    printf("%d",i);
    return i;
    
}