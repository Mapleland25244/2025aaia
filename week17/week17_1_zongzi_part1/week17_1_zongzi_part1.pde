// week17_1_zongzi_part1
PImage zongzi;
void setup(){
  size(500,500);
  zongzi = loadImage("zongzi.png");
}
void draw(){
  background(204);
  imageMode(CENTER);
  // image(zongzi,0,0);
  image(zongzi,mouseX,mouseY,100,100);
}
