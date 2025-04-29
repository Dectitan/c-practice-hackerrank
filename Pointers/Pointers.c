#include <stdio.h>


//TASK:
/*
2025-04-30-00-58-43.png
*/
void update(int *a,int *b) {
    // Complete this function
    int temp;
    temp=*a;
    *a=*a+*b;
    if(temp>*b){
        *b=temp-*b;
    }
    else{
        *b=*b-temp;
    }    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

//Important Note:
//We will have to use a temp variable to retain the value of a otherwise value of a will be modeified we store the sum.
//Whenever we need to take an absolute value without using new library do it by if else.
