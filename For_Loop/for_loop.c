#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//TASK
/*
2025-04-30-00-55-19.png
*/
int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    char* str[9]={"one","two","three","four","five","six","seven","eight","nine"};
    for(int i=a;i<=b;i++){
        if(i>=1&&i<=9){
            printf("%s\n",str[i-1]);
        }
        else if(i>9&&i%2==0){
            printf("even\n");
        }
        else if(i>9&&i%2!=0){
            printf("odd\n");
        }
    }
    return 0;
}
