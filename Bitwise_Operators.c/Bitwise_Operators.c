/*
Sample Input 0

5 4
Task:
2025-04-08-00-05-47.png

Sample Output 0

2
3
3
*/

//Solution


#include <stdio.h>

void calculate_the_maximum(int n, int k) {
  int i=1,j=1,mA=0,mO=0,mX=0;
  for(i=1;i<=n;i++){
    for(j=i+1;j<=n;j++){
        if((i&j)>mA&&(i&j)<k){
            mA=i&j;
        }
        if((i|j)>mO&&(i|j)<k){
            mO=i|j;
        }
        if((i^j)>mX&&(i^j)<k){
            mX=i^j;
        }
  }
}
printf("%d\n%d\n%d",mA,mO,mX);
}
int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
