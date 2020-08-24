#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;

   /* initialize graphics mode */
   initgraph(&gdriver, &gmode,"C:\\TURBOC3\\BGI");
   line(150,100,280,100);
   line(150,120,280,120);
   line(150,140,280,140);
   line(150,160,280,160);
   circle(210,130,10);
   line(150,100,150,350);
   line(280,100,280,160);

   rectangle(100,370,220,350);
   rectangle(80,390,240,370);
   rectangle(60,410,260,390);
   getch();
   closegraph();
   return 0;
}
