/// week10-2.cpp ブ猭
#include <stdio.h>
int main(){
    printf("叫块1俱计: ");
    int n;
    scanf("%d",&n);
    ///printf("计琌 %d\n", n, n%10);
    ///printf("计琌 %d\n", n, n/10%10);
    ///printf("κ计琌 %d\n", n, n/100%10);
    while(n>0){
        printf("计 %d ブ:%d\n", n, n%10); ///ブ
        n = n / 10; /// 计跑 1/10
    }
}
