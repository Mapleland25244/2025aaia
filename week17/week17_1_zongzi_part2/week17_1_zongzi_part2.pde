// week17_1_zongzi_part2
PImage zongzi;
void setup(){
  size(500,500);
  zongzi = loadImage("zongzi.png");
}
float x,y;
void draw(){
  background(204);
  imageMode(CENTER);
  if(x>0){
    image(zongzi,x,y,100,100);
    y++; // 座標往下
  }
}
void mousePressed(){
  x = mouseX;
  y = mouseY;
}
