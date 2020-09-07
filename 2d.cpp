#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
intgd=DETECT,gm;
intx,y,tx,ty;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI" );

printf("Enter coordinates\n");
scanf("%d%d",&x,&y);
putpixel(x,y,7);
printf("Enter translation coordinates\n");
scanf("%d%d",&tx,&ty);
x=x+tx;
y=y+ty;
putpixel(x,y,7);
getch();
}
