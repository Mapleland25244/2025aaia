//week08_4_bubble_balloon_part1
void setup(){
  size(500, 400);
}
void draw(){
  background(204); //畫氣球
  ellipse(x, y, s, s); // 一直壓mouse就會變大
  if(mousePressed) s+=2;
}
float x=0,y=0,s=0; // 氣球的座標、大小
void mousePressed(){
  x=mouseX; // 氣球的座標
  y=mouseY;
  s=1; // 氣球一開始大小是1(數字)
}
