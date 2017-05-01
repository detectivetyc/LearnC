#include <stdio.h>
 int check(int x, int y,int n){
    return (((x>=0&&x<=n-1)&(y>=0&&y<=n-1))==1?1:0);
}

int main() {
    printf("%d\n",check(2,3,2));
    return 0;
}