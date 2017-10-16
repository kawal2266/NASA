#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<string.h>
//#include"c:\\turboc3\\source\\mylib.h"
void mlcolor(int r,int c1,int c2,char bgcolor)
{
	int i;
	textbackground(bgcolor);
	gotoxy(c1,r);
	for(i=c1;i<=c2;i++)
	{
		cprintf(" ");
	}
}
int mymenu(char op[8][20],int r,int c,int nop)
{
	int ctr=0;
	char ch=0;
	int R=r;
	int C=c;
	while(ch!=ENTER)
	{
		int row=R;
		for(int i=0;i<nop;i++)
		{
			if(i==ctr)
			{
				mlcolor(row,c,c+10,GREEN);
				textcolor(LIGHTGRAY);
				gotoxy(c,row++);
				cprintf("%s",op[i]);
			}
			else
			{
				mlcolor(row,c,c+10,LIGHTGRAY);
				textcolor(BLACK);
				gotoxy(c,row);
				cprintf("%s",op[i]);
				row++;
			}

		}
		ch=getch();
		//if(!ch)
		  //	ch=getch();

		if(ch==DOWN)
		{
			if(ctr<(nop-1))
			{
				ctr++;
			}
		}
		if(ch==UP)
		{
			if(ctr>0)
			{
				ctr--;
			}
		}
		if(ch==ENTER)
		{
			return ctr;
		}
	}
}
/*void main()
{
	clrscr();
	char tm[3][20]={{"Add                "},
			{"Delete             "},
			{"Modify             "}};
	int c=mymenu(tm,10,10,3);
	if(c==0)
		cout<<"ADD SELECTED";
	else if(c==1)
		cout<<"DELETE";
	else if(c==2)
		cout<<"MODIFY";
	getch();
} */