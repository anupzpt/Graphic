#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void pixel(int xc,int yc,int x,int y);

int main()
{
	int gd,gm,xc,yc,r, x,y ,p;
	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"C://TURBOC3//BGI");
	printf("Enter center of circle:");
	scanf("%d%d",&xc,&yc);
	printf("Enter radius of circle:");
	scanf("%d",&r);
	x=0;
	y=r;
	p=1-r;
	pixel(xc,yc,x,y);
	while(x<y)
	{
		if(p<0)
		{
			x++;
			p=p+2*x+1;
		}
		else
		{
			x++;
			y--;
			p=p+2*(x-y)+1;
		}
		pixel(xc,yc,x,y);
	}
	getch();
	closegraph();
	return 0;
}
	void pixel(int xc, int yc,int x, int y)
	{
		putpixel(xc+x,yc+y,WHITE);
		putpixel(xc+x,yc-y,WHITE);
		putpixel(xc-x,yc+y,WHITE);
		putpixel(xc-x,yc-y,WHITE);
		putpixel(xc+y,yc+x,WHITE);
		putpixel(xc+y,yc-x,WHITE);
		putpixel(xc-y,yc+x,WHITE);
		putpixel(xc-y,yc-x,WHITE);
	}
