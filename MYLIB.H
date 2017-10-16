#include<iostream.h>
#include<conio.h>
#define SLT 218
#define SLB 192
#define SRT 191
#define SRB 217
#define SHL 196
#define SVL 179
#define DLT 201
#define DLB 200
#define DRT 187
#define DRB 188
#define DHL 205
#define DVL 186
#define UP 72
#define DOWN 80
#define ENTER 13
class box
{
	private:
		int r1,r2,c1,c2;
		char txtcolor;
	public:
		 void mksbox(int gr1,int gr2,int gc1,int gc2);
		 void mkdbox(int gr1,int gr2,int gc1,int gc2);
};
void box::mksbox(int gr1,int gr2,int gc1,int gc2)
{
	r1=gr1;
	r2=gr2;
	c1=gc1;
	c2=gc2;
	textcolor(WHITE);
	gotoxy(c1,r1);
	cprintf("%c",SLT);
	textcolor(WHITE);
	gotoxy(c2,r1);
	cprintf("%c",SRT);
	textcolor(WHITE);
	gotoxy(c2,r2);
	cprintf("%c",SRB);
	textcolor(WHITE);
	gotoxy(c1,r2);
	cprintf("%c",SLB);
	for(int i=c1+1;i<c2;i++)
	{
		textcolor(WHITE);
		gotoxy(i,r1);
		cprintf("%c",SHL);
	}
	for(int i1=c1+1;i1<c2;i1++)
	{
		textcolor(WHITE);
		gotoxy(i1,r2);
		cprintf("%c",SHL);
	}
	for(int j=r1+1;j<r2;j++)
	{
		textcolor(WHITE);
		gotoxy(c1,j);
		cprintf("%c",SVL);
	}
	for(int j1=r1+1;j1<r2;j1++)
	{
		textcolor(WHITE);
		gotoxy(c2,j1);
		cprintf("%c",SVL);
	}
}
void box::mkdbox(int gr1,int gr2,int gc1,int gc2)
{
	r1=gr1;
	r2=gr2;
	c1=gc1;
	c2=gc2;
	textcolor(WHITE);
	gotoxy(c1,r1);
	cprintf("%c",DLT);
	textcolor(WHITE);
	gotoxy(c2,r1);
	cprintf("%c",DRT);
	textcolor(WHITE);
	gotoxy(c2,r2);
	cprintf("%c",DRB);
	textcolor(WHITE);
	gotoxy(c1,r2);
	cprintf("%c",DLB);
	for(int i=c1+1;i<c2;i++)
	{
		textcolor(WHITE);
		gotoxy(i,r1);
		cprintf("%c",DHL);
	}
	for(int i1=c1+1;i1<c2;i1++)
	{
		textcolor(WHITE);
		gotoxy(i1,r2);
		cprintf("%c",DHL);
	}
	for(int j=r1+1;j<r2;j++)
	{
		textcolor(WHITE);
		gotoxy(c1,j);
		cprintf("%c",DVL);
	}
	for(int j1=r1+1;j1<r2;j1++)
	{
		textcolor(WHITE);
		gotoxy(c2,j1);
		cprintf("%c",DVL);
	}
}
void bgcolor()
{
	textbackground(RED);
	clrscr();
	//getch();
}
void lcolor()
{
    for(int j=5;j<21;j++)
    {
	    textbackground(LIGHTGRAY);
	    gotoxy(2,j);
	    cout<<" ";
	    clreol();
	    textbackground(RED);
	    gotoxy(24,j);
	    clreol();
    }
}
void swriteat(int r,int c,char str[50],int tcolor)
{
       textcolor(tcolor);
       gotoxy(c,r);
       cprintf("%s",str);
}
void iwriteat(int r,int c,int val1,int tcolor)
{
       textcolor(tcolor);
       gotoxy(c,r);
       cprintf("%d",val1);
}
void cwriteat(int r,int c,char val2,int tcolor)
{
       textcolor(tcolor);
       gotoxy(c,r);
       cprintf("%c",val2);
}
void fwriteat(int r,int c,float val3,int tcolor)
{
       textcolor(tcolor);
       gotoxy(c,r);
       cprintf("%f",val3);
}
void mwriteat(int r,int c,char str[500],int tcolor)
{
       textcolor(tcolor+BLINK);
       gotoxy(c,r);
       cprintf("%s",str);
}

