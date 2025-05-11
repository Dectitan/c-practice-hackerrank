/*

Task:
There is a series, , where the next term is the sum of pervious three terms. Given the first three terms of the series, , , and  respectively, you have to output the nth term of the series using recursion.
Recursive method for calculating nth term is given below.

Input Format:
The first line contains a single integer, .
The next line contains 3 space-separated integers, , , and .

Output Format:
Print the nth term of the series, .

Sample Input:
5
1 2 3
Sample Output:11
*/


//Solution



#include <stdio.h>

int find_nth_term(int n, int a, int b, int c) {
  if(n<=0)
    return printf("Invalid Input");
  if(n==1)
    return a;
  if(n==2)
    return b;
  if(n==3)
    return c;
  return find_nth_term(n-1,a,b,c)+find_nth_term(n-2,a,b,c)+find_nth_term(n-3,a,b,c);
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}