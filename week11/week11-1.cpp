/// week11-1.cpp
/// 函式 function
#include <stdio.h>
/// 定義函式
/// 回傳的是 int 型態 
/// 讀入的數為 int  
int addnum(int a, int b){
	printf("在函式addnum()裡, 得到參數a:%d b:%d\n", a, b);
	int ans = a + b;
	printf("算出答案 %d 要 return 出去\n", ans);
	return ans; /// 回傳 
}
int main(){
	/// main函式 
	printf("在 main() 呼叫使用 addnum() \n");
	int ans = addnum(2, 3);
	printf("得到答案:%d\n",ans);
}
