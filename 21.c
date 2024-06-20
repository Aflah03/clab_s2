// #include <stdio.h>
// #include <string.h>

// void exchangeSort(char names[][50], int n) {
//     int i, j;
//     for (i = 0; i < n - 1; i++) {
//         for (j = i + 1; j < n; j++) {
//             if (strcmp(names[i], names[j]) > 0) {
//                 char temp[50];
//                 strcpy(temp, names[i]);
//                 strcpy(names[i], names[j]);
//                 strcpy(names[j], temp);
//             }
//         }
//     }
// }

// int main() {
//     int n;
//     printf("Enter the number of students: ");
//     scanf("%d", &n);

//     char names[n][50];
//     printf("Enter student names:\n");
//     for (int i = 0; i < n; i++) {
//         scanf("%s", names[i]);
//     }

//     exchangeSort(names, n);

//     printf("Sorted student names:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%s\n", names[i]);
//     }

//     return 0;
// }

#include <stdio.h>
#include <string.h>

// void exchangeSort(char names[][50], int n) {
//     int i, j;
//     for (i = 0; i < n - 1; i++) {
//         for (j = 0; j < n-1-i; j++) {
//             if (strcmp(names[j], names[j+1]) > 0) {
//                 char temp[50];
//                 strcpy(temp, names[j]);
//                 strcpy(names[j], names[j+1]);
//                 strcpy(names[j+1], temp);
//             }
//         }
//     }
// }

// int main() {
//     int n;
//     printf("Enter the number of students: ");
//     scanf("%d", &n);

//     char names[n][50];
//     printf("Enter student names:\n");
//     for (int i = 0; i < n; i++) {
//         scanf("%s", names[i]);
//     }

//     exchangeSort(names, n);

//     printf("Sorted student names:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%s\n", names[i]);
//     }

//     return 0;
// }
void exchange_sort(char [][50],int);
int main(){
    int n;
    
    printf("enter the number of students: ");
    scanf("%d",&n);
    char names[n][50];
    for(int i=0;i<n;i++){
        scanf("%s",names[i]);
    }
    exchange_sort(names,n);
    printf("\nsorted names are:\n");
    for(int i=0;i<n;i++){
        printf("%s\n",names[i]);
    }
}
void exchange_sort(char names[][50],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            char temp[50];
            if(strcmp(names[j],names[j+1])>0){
                    strcpy(temp,names[j]);
                    strcpy(names[j],names[j+1]);
                    strcpy(names[j+1],temp);
            }
        }
    }
}