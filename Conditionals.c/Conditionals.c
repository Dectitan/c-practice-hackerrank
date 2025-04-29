/*
Task:
2025-04-08-00-18-41.png
*/

//Solution

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    char* str[9]={"one","two","three","four","five","six","seven","eight"
    ,"nine"};
    if(n<=9&&n>=1){
        printf("%s",str[n-1]);
    }
    else if(n>9){
        printf("Greater than 9");
    }
    else{
        printf("Invalid Input");
    }
    double x;
    int *r;
    r=&x;
    printf("%p",r);
    return 0;
}
/*
VERY IMPORTANT:
We use char* here and not char because char is used to store only single character like-'o' but we
needed to store a full string like "one" hence we used char*.
*/
