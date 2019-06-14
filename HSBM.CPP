#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
void Bat();
void moon();
void moon2();
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\Tc\\BGI");


	outtextxy(540, 430,"Copyright C");
	circle(623,433,7);
	outtextxy(550,445,"HSMA SYIT F");


	//buildings
	setcolor(YELLOW);

	circle(150,70,65);

	int z[]={0,180,30,180,30,245,35,245,35,240,42,240,42,220,80,220,80,235,90,235,90,239,100,239,100,200};
	drawpoly(13,z);
	int w[]={220,250,220,180,240,170,240,205,280,195,280,150,300,140,300,205,340,205,340,140,360,150,360,195,400,205,400,170,420,180,420,250};
	drawpoly(16,w);
	int z1[]={140,200,140,245,155,245,155,170,165,170,165,165,175,165,175,170,200,170,200,250};
	drawpoly(10,z1);
	int z2[]={639,180,625,180,625,250};
	drawpoly(3,z2);
	int z3[]={620,250,620,200,600,200,600,250};
	drawpoly(4,z3);

	arc(120,200,0,180,20);
	int z4[]={590,250,590,180,570,180,570,250};
	drawpoly(4,z4);
	int z5[]={450,250,450,185,460,185,460,180,465,180,465,150,470,150,470,180,475,180,475,187,490,187,490,220,500,220,500,210,510,210,510,220,515,220,515,165,535,165,535,225,545,225,545,235,565,235,565,250};
	drawpoly(24,z5);

	int a[ ]={300, 160, 310, 195, 320, 177.5, 330, 195, 340, 160};
	drawpoly(5, a);
	int b[ ]={305, 160, 310, 185, 320,168.75, 330, 185, 335, 160};
	drawpoly(5, b);
	line(300, 160, 305, 160);
	line(340, 160, 335, 160);
	outtextxy(302.5, 197, "E.N.T");

	//windows



	//road


	// left road line
	line(120,479,140,450);
	line(150,435,170,405);
	line(180,390,200,360);
	line(210,345,220,330);
	line(230,315,240,300);
	line(250,285,260,270);
	//line(270,260,267,250);

	//right road line
	line(520,479,500,450);
	line(490,435,470,405);
	line(460,390,440,360);
	line(430,345,420,330);
	line(410,315,400,300);
	line(390,285,380,270);
	//line(370,260,373,250);

	//middle road line
	setcolor(YELLOW);
	rectangle(310,479,330,420);
	setfillstyle(1,14);
	floodfill(320,430,YELLOW);
	rectangle(310,410,330,370);
	setfillstyle(1,14);
	floodfill(320,400,YELLOW);
	rectangle(310,360,330,330);
	setfillstyle(1,14);
	floodfill(320,350,YELLOW);
	rectangle(330,300,310,320);
	setfillstyle(1,14);
	floodfill(320,310,YELLOW);
	rectangle(310,290,330,277);
	setfillstyle(1,14);
	floodfill(315,280,14);


	moon();
	delay(2000);
	Bat();
	delay(1000);
	moon2();
	delay(900);
	Bat();
	delay(700);
	moon2();
	delay(500);
	Bat();



	getch();
	closegraph();
}
void moon()
{

	setcolor(YELLOW);
	circle(150,70,65);
	setfillstyle(1,14);
	floodfill(150,125,YELLOW);
}
void moon2()
{

	setcolor(YELLOW);
	circle(150,70,65);
	setfillstyle(1,14);
	floodfill(150,70,YELLOW);
}


void Bat()
{

       setcolor(BLACK);


       line(100,60,115,80); //delay(200);
       line(115,80,140,80); //delay(200);
       line(140,80,150,90); //delay(200);
       line(100,60,130,60); //delay(200);
       line(130,60,135,65); //delay(200);
       line(135,65,143,65); //delay(200);
       line(143,65,143,55); //delay(200);
       line(143,55,147,60); //delay(200);
       line(147,60,153,60); //delay(200);

       line(150,90,160,80); //delay(200);
       line(160,80,185,80); //delay(204);
       line(185,80,200,60); //delay(204);
       line(200,60,170,60); //delay(204);
       line(170,60,165,65); //delay(204);
       line(165,65,157,65); //delay(204);
       line(157,65,157,55); //delay(204);
       line(157,55,153,60);
       setfillstyle(1,0);
       floodfill(150,70,BLACK);


}