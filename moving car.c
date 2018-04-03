#include<graphics.h>
#include<conio.h>
#include<dos.h>
 
void main()
{
 int i,j=0,gd=DETECT,gm;
 initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
 setcolor(15);
 for(i=0;i<=420;i=i+10)
 {
  rectangle(50+i,275,150+i,400);
  rectangle(150+i,350,200+i,400);
  circle(75+i,410,10);
  circle(175+i,410,10);
  delay(40);
  cleardevice();
 }
 getch();
 closegraph();
}
