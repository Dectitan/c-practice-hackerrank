/*Task

You have to print the character ch in the first line. Then print String s in next line. In the last line print the sentence sen.

Constraints:
String for s and sen will have fewer than 100 characters, including the newline.

Sample Output 0

C
Language
Welcome To C!!
*/

//Solution

#include <stdio.h>
int main() 
{
    int i=0,j=0;
    char c,d,ch,s[99],sen[99];
    scanf(" %c",&ch);
    getchar();
    scanf("%[^\n]%*c", s);
    scanf("%[^\n]%*c", sen);
    printf("%c\n%s\n%s",ch,s,sen);    
    return 0;
}

/*VERY IMPORTANT:
In order to take a line as input, you can use scanf("%[^\n]%*c", s);
Here, [] is the scanset character. ^\n stands for taking input until a newline isn't encountered.
Then, with this %*c, it reads the newline character and here, the used * indicates that this
newline character is discarded.
*/