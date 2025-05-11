/*
Task:
Given a five digit integer, print the sum of its digits.

Input Format:
The input contains a single five digit number, .

Output Format:
Print the sum of the digits of the five digit number.

Sample Input:10564

Sample Output:16
*/

//SOLUTION:


#include <stdio.h>

int main() {
	
    int n,sum=0;
    scanf("%d", &n);
    //To calculate the sum of the five digits of n.
    while(n>0){
        sum+=n%10;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}