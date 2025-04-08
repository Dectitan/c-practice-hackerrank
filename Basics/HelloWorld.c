/*Task

This challenge requires you to print  on a single line,
and then print the already provided input string to stdout. 
If you are not familiar with C, you may want to read about the printf() command.

Example
Input String="Life is beautiful"
The required output is:
Hello, World!  
Life is beautiful
*/

//Solution
#include <stdio.h>
int main(){
    char s[100];
    fgets(s,100,stdin);
    printf("Hello, World!\n");
  	puts(s);    
    return 0;
}