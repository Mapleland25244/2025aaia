// week10-3.cpp
// SOIT106_ADVANCE_001
#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int ans1 = n;
	int ans2 = 0;
	while(n>0){
		ans2 = ans2 * 10 + n%10;
		n = n / 10;
	}
	printf("%d+%d=%d\n", ans1, ans2, ans1+ans2);
}
