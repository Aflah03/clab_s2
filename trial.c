#include<stdio.h>
#include<string.h>
#include <stdlib.h>
// int main(){
//     int a= 1025;
//     int *p;
//     p= &a;
//     printf("size if integer is %d bytes",sizeof(int));
//     printf("\naddrss is %d,value = %d",p,*p);
//     printf("\naddrss is %d,value = %d",p+1,*(p+1));
//     char *p0;
//     p0 = (char*)p;
//     printf("\nsize of char is %d",sizeof(char));
//     printf("\nAddress is %d, value is %c",p0,*p0);
//     printf("\nAddress is %d, value is %c",p0+1,*(p0+1));
//     printf("size of a int pointere is : %d,size of a is : %d,sizze of char pointer :%d",sizeof(p),sizeof(a),sizeof(p0));
//     }
// void increment(int *a){
//     *a = *a+1;
// }
// int main(){
//     int a; 
//     a=10;
//     increment(&a);
//     printf("%d",a);


// }
// int Sum_of_elements(int A[]){
//     int i, sum=0;
//     printf("the size of A :%d",sizeof(A));
//     for(i=0;i<5;i++){
//         sum+= A[i];
//     }

//     return sum;

// }
// int main(){
//     int A[]= {1,2,3,4,5};
//     int total = Sum_of_elements(A);
//     printf("\n THe sum is : %d",total);
//     printf("the size of A :%d",sizeof(A));
    
// int  main(){
//     char c[5];
//     c[0]='J';
//     c[1]='H';
//     c[2]='O';
//     c[3]='N';
//     c[4]= '\0';
//     printf("%s",c);
//     {
//         /* code */
//     }
    
// }
// void print(char c1[]){
    
//     int i=0;
//     while(*(c1+i) != '\0'){
//         printf("%c",*(c1+i));
//         i++;
//     }
// }
// void Print1(char *c2){
//     printf("\n");
//     while(*c2 !=  '\0'){
//         printf("%c",*c2);
//         c2++;
//     }
// }
// int main(){
//     char C[] = "HLLO MAN THIS IS COOL YOU KNOW";
//     Print1(C);
//     printf("\n%s",C);
//     }
typedef struct Node{
    int data;
    struct Node* link;
    
};
int main(){
    struct Node* A;
    A = NULL;
    Node* temp = (struct Node*)malloc(sizeof(Node));
    (*temp).data = 2;
    (temp->link) = NULL;
    A = temp;
}