// week12-3c.cpp
// SOIT108_Base_011
#include <stdio.h>
int main(){
	int x1,y1,x2,y2;
	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	int w = x2-x1;
	int l = y2-y1;
	if(w*l<0) printf("%d",-w*l);
	else printf("%d",w*l);
}
