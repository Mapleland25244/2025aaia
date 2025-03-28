// week06_4a_array_x_y_int_N_for_mousePressed
// week04_5 延伸過來利用for迴圈+陣列,畫出很多飼料不會動
void setup(){
  size(600,400);
}
float [] x = new float[100]; // 有100個x和100個y
float [] y = new float[100]; // Java的陣列宣告
int N = 0;
void draw(){
  background(#c0ffee); // 咖啡青色 0 不是 o
  for(int i=0;i<N;i++){
    ellipse(x[i], y[i], 8, 8);
    y[i] += 2;
  }
}
void mousePressed(){
  x[N] = mouseX;
  y[N] = mouseY;
  N++; // 增加1顆飼料
}
