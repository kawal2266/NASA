#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<string.h>
#include"c:\\turboc3\\source\\mylib.h"
#include"c:\\turboc3\\source\\menu.cpp"
struct name
{
	char fnm[10],lnm[10];
};
struct date
{
	int d,m,y;
};
struct size
{
	float l,w,h;
};
class astronaut
{
	private:
		name nas;
		date dtm;
		char id[20];
		int tid;
		int age;
		char mission[200];
		char status;
		char gen;
	public:
		void gettid()
		{
			swriteat(6,25,"* TEAM ID ",WHITE);
			swriteat(6,45,": ",WHITE);
			cin>>tid;
		}
		void getid()
		{
			swriteat(8,25,"* Astronauts id ",WHITE);
			swriteat(8,45,": ",WHITE);
			cin>>id;
		}
		void put();
		void show()
		{
			swriteat(6,25,"* TEAM ID",WHITE);
			swriteat(6,45,": ",WHITE);
			iwriteat(6,47,tid,WHITE);
			swriteat(8,25,"* ID",WHITE);
			swriteat(8,45,": ",WHITE);
			swriteat(8,47,id,WHITE);
			swriteat(10,25,"* Name ",WHITE);
			swriteat(10,45,": ",WHITE);
			swriteat(10,47,nas.fnm,WHITE);
			swriteat(10,57,nas.lnm,WHITE);
			swriteat(12,25,"* Age ",WHITE);
			swriteat(12,45,": ",WHITE);
			iwriteat(12,47,age,WHITE);
			swriteat(14,25,"* Gender ",WHITE);
			swriteat(14,45,": ",WHITE);
			cwriteat(14,47,gen,WHITE);
			swriteat(16,25,"* Mission Date ",WHITE);
			swriteat(16,45,": ",WHITE);
			iwriteat(16,47,dtm.d,WHITE);
			swriteat(16,50,"/",WHITE);
			iwriteat(16,51,dtm.m,WHITE);
			swriteat(16,53,"/",WHITE);
			iwriteat(16,54,dtm.y,WHITE);
			swriteat(18,25,"* Mission ",WHITE);
			swriteat(18,45,": ",WHITE);
			swriteat(18,47,mission,WHITE);
			swriteat(20,25,"* Status ",WHITE);
			swriteat(20,45,": ",WHITE);
			if(status=='i')
			{
				swriteat(20,47,"Incomplete",WHITE);
			}
			else
			{
				swriteat(20,47,"Completed",WHITE);
			}
		}
		void getastro()
		{
			put();
			setstat('i');
			getch();
		}
		void showastro()
		{
			swriteat(5,45,"Astronaut - ",WHITE);
			show();
			getch();
		}
		void showmission()
		{
			swriteat(6,25,mission,WHITE);
		}
		int rettid()
		{
			return tid;
		}
		void showid()
		{
			swriteat(8,25,id,WHITE);
		}
		void showtid()
		{
			iwriteat(10,25,tid,WHITE);
		}
		char* retid()
		{
			return id;
		}
		void setstat(char s)
		{
			status=s;
		}
		int retyr()
		{
			return dtm.y;

		}
		char retstat()
		{
			return status;
		}
};
void astronaut::put()
{
		swriteat(10,25,"* First Name ",WHITE);
		swriteat(10,45,": ",WHITE);
		cin>>nas.fnm;
		swriteat(12,25,"* Last Name ",WHITE);
		swriteat(12,45,": ",WHITE);
		cin>>nas.lnm;
		swriteat(14,25,"* Age ",WHITE);
		swriteat(14,45,": ",WHITE);
		cin>>age;
		swriteat(16,25,"* Gender(m/f) ",WHITE);
		swriteat(16,45,": ",WHITE);
		cin>>gen;
		swriteat(18,25,"* Mission Date",WHITE);
		swriteat(19,25,"- Date ",WHITE);
		swriteat(19,45,": ",WHITE);
		cin>>dtm.d;
		swriteat(20,25,"- Month ",WHITE);
		swriteat(20,45,": ",WHITE);
		cin>>dtm.m;
		swriteat(21,25,"- Year ",WHITE);
		swriteat(21,45,": ",WHITE);
		cin>>dtm.y;
		swriteat(23,25,"* Mission ",WHITE);
		swriteat(23,45,": ",WHITE);
		gets(mission);

}
int tidastro(int ptid)
{
	ifstream fin("astro.txt");
	astronaut a;
	while(!fin.eof())
	{
		fin.read((char*)&a,sizeof(a));
		if(!fin.eof())
		{
			if(a.rettid()==ptid)
				return 1;
		}
	}
	return 0;
}
class spacecraft
{
	private :
		date dtl;
		char sid[15];
		name ns;
		size sz;
		float wt;
		char info[60];
		int tid;
	public :
		void getsid()
		{
			swriteat(7,25,"* Space Craft ID ",WHITE);
			swriteat(7,45,": ",WHITE);
			cin>>sid;
		}
		void gettid()
		{
			swriteat(6,25,"TEAM ID : ",WHITE);
			cin>>tid;
		}
		void put2();
		void show2()
		{
			swriteat(8,25,"* TEAM ID",WHITE);
			swriteat(8,45,": ",WHITE);
			iwriteat(8,47,tid,WHITE);
			swriteat(10,25,"* Space Craft ID ",WHITE);
			swriteat(10,45,": ",WHITE);
			swriteat(10,47,sid,WHITE);
			swriteat(11,25,"* Name ",WHITE);
			swriteat(11,45,": ",WHITE);
			swriteat(11,47,ns.fnm,WHITE);
			swriteat(11,57,ns.lnm,WHITE);
			swriteat(11,25,"* Size ",WHITE);
			swriteat(12,25,"- Length ",WHITE);
			swriteat(12,45,": ",WHITE);
			iwriteat(12,47,sz.l,WHITE);
			swriteat(12,50,"feets",WHITE);
			swriteat(12,25,"- Width ",WHITE);
			swriteat(13,45,": ",WHITE);
			iwriteat(13,47,sz.w,WHITE);
			swriteat(13,50,"feets",WHITE);
			swriteat(14,25,"- Height ",WHITE);
			swriteat(14,45,": ",WHITE);
			iwriteat(14,47,sz.h,WHITE);
			swriteat(14,50,"feets",WHITE);
			swriteat(15,25,"- Weight ",WHITE);
			swriteat(15,45,": ",WHITE);
			fwriteat(15,47,wt,WHITE);
			swriteat(15,50,"Kgs       ",WHITE);
			swriteat(16,25,"* Launch Date ",WHITE);
			swriteat(16,45,": ",WHITE);
			iwriteat(16,47,dtl.d,WHITE);
			swriteat(16,49,"/",WHITE);
			iwriteat(16,50,dtl.m,WHITE);
			swriteat(16,52,"/",WHITE);
			iwriteat(16,53,dtl.y,WHITE);
			swriteat(17,25,"* Launch Info ",WHITE);
			swriteat(17,45,": ",WHITE);
			swriteat(17,47,info,WHITE);
		}
		void getspace()
		{
			put2();
			getch();
		}
		void showspace()
		{
			swriteat(7,25,"Space Craft - ",WHITE);
			show2();
			getch();
		}
		char* retsid()
		{
			return sid;
		}
		int rettid()
		{
			return tid;
		}
};
void spacecraft::put2()
{
			swriteat(8,25,"* Space Craft Name ",WHITE);
			swriteat(9,25,"- First Name ",WHITE);
			swriteat(9,45,": ",WHITE);
			cin>>ns.fnm;
			swriteat(10,25,"- Last Name ",WHITE);
			swriteat(10,45,": ",WHITE);
			cin>>ns.lnm;
			swriteat(12,25,"* Size (feets) ",WHITE);
			swriteat(13,25,"- Length ",WHITE);
			swriteat(13,45,": ",WHITE);
			cin>>sz.l;
			swriteat(14,25,"- Width ",WHITE);
			swriteat(14,45,": ",WHITE);
			cin>>sz.w;
			swriteat(15,25,"- Height ",WHITE);
			swriteat(15,45,": ",WHITE);
			cin>>sz.h;
			swriteat(17,25,"* Weight(kgs) ",WHITE);
			swriteat(17,45,": ",WHITE);
			cin>>wt;
			swriteat(19,25,"* Launch Date ",WHITE);
			swriteat(20,25,"- Date ",WHITE);
			swriteat(20,45,": ",WHITE);
			cin>>dtl.d;
			swriteat(21,25,"- Month ",WHITE);
			swriteat(21,45,": ",WHITE);
			cin>>dtl.m;
			swriteat(22,25,"- Year ",WHITE);
			swriteat(22,45,": ",WHITE);
			cin>>dtl.y;
			swriteat(24,25,"* Launch Inforation ",WHITE);
			swriteat(24,45,": ",WHITE);
			gets(info);

}
int tidscraft(int ptid)
{
	ifstream fin("scraft.txt");
	spacecraft s;
	while(!fin.eof())
	{
		fin.read((char*)&s,sizeof(s));
		if(!fin.eof())
		{
			if(s.rettid()==ptid)
				return 1;
		}
	}
	return 0;
}
void org()
{
	  textbackground(RED);
	  char org[15];
	  ifstream fino("orgnm.txt");
	  if(!fino)
	  {
		ofstream fouto("orgnm.txt");
		swriteat(7,25,"Enter the organization : ",WHITE);
		gets(org);
		fouto<<org;
		fouto.close();
	  }
}
void showorg()
{
	  char org[15],info[50];
	  ifstream fino1("orginfo.txt");
	  if(!fino1)
	  {
		ofstream fouto1("orginfo.txt");
		textbackground(RED);
		swriteat(7,25,"Enter infomation : ",WHITE);
		gets(info);
		fouto1<<info<<endl;
		fouto1.close();
	  }
	  else
	  {
		ifstream fino("orginfo.txt");
		ifstream fin("orgnm.txt");
		fin>>org;
		textbackground(RED);
		textcolor(WHITE);
		gotoxy(26,10);
		while(!fino.eof())
		{
			fino>>info;
			cprintf("%s",info);
			cprintf("%s"," ");
		}

		swriteat(6,50,org,WHITE);
		fin.close();
		fino.close();
	  }
	  getch();
}
void screen(char* org)
{
	box b;
	bgcolor();
	swriteat(2,30,"ORGANIZATION : ",WHITE);
	swriteat(2,45,org,DARKGRAY);
	lcolor();
	b.mksbox(5,20,2,23);
	b.mkdbox(4,25,24,78);
	textbackground(LIGHTGRAY);
}
void main()
{
      box b;
      bgcolor();
      org();
      char rorg[15];
      ifstream fino("orgnm.txt");
      fino>>rorg;
      screen(rorg);
      fino.close();
      char mainmenu[5][20]={{"Organisation       "},
			    {"Astronaut          "},
			    {"Space Craft        "},
			    {"Exit               "},
			    {"/0                 "}};
      char astromenu[6][20]={{"Add                "},
			     {"Show               "},
			     {"Modify             "},
			     {"Delete             "},
			     {"Missions           "},
			     {"Return             "}};
      char missmenu[5][20]={{"Complete Mission   "},
			    {"Show Completed     "},
			    {"Show Incomplete    "},
			    {"Show (specific yr )"},
			    {"Return             "}};
      char scraftmenu[4][20]={{"Add                "},
			      {"Show               "},
			      {"Delete             "},
			      {"Return             "}};
      int c=0;
      while(c!=3)
      {
		outer:
		char rorg[15];
		ifstream fino("orgnm.txt");
		fino>>rorg;
		screen(rorg);
		c=mymenu(mainmenu,6,3,4);
		if(c==0)
		{
			showorg();
		}
		else if(c==1)
		{
			astronaut a;
			int ctr=0;
			int arc=mymenu(astromenu,6,3,6);
			if(arc==0)
			{
				char rorg[15];
				ifstream fino("orgnm.txt");
				fino>>rorg;
				screen(rorg);
				fino.close();
				textbackground(RED);
				ofstream fout("astro.txt",ios::app);
				a.gettid();
				a.getid();
				a.getastro();
				fout.write((char*)&a,sizeof(a));
				fout.close();
			}
			else if(arc==1)
			{
				char rorg[15];
				int ctr=0;
				ifstream fino("orgnm.txt");
				fino>>rorg;
				screen(rorg);
				fino.close();
				textbackground(RED);
				ifstream fin("astro.txt");
				if(!fin)
				{
					mwriteat(15,42,"FILE DOESNT EXIST",YELLOW);
					mwriteat(17,42,"Add to create the file",WHITE);
					getch();
				}
				else
				{
					while(!fin.eof())
					{
					       fin.read((char*)&a,sizeof(a));
					       if(!fin.eof())
					       {
							a.showastro();
							ctr++;
					       }
					}
					if(ctr==0)
					{
						mwriteat(15,42,"NO RECORDS FOUND",YELLOW);
						getch();
					}
				}
				fin.close();
			}
			else if(arc==2)
			{
				ifstream fin;
				ofstream fout;
				int flag=0;
				char aid[20];
				textbackground(RED);
				swriteat(6,25,"Astronaut's ID to be modified :",WHITE);
				cin>>aid;
				fin.open("astro.txt");
				fout.open("temp.txt");
				while(!fin.eof())
				{
					fin.read((char*)&a,sizeof(a));
					if(!fin.eof())
					{
					      char rid[20];
					      strcpy(rid,a.retid());
					      if(strcmp(rid,aid)==0)
					      {
						  flag=1;
						  a.getastro();
						  fout.write((char*)&a,sizeof(a));
					      }
					      else
					      {
						  fout.write((char*)&a,sizeof(a));
					      }
					}
					if(flag==1)
					{
						screen(rorg);
						mwriteat(15,42,"RECORD MODIFIED",YELLOW);
						getch();
					}
					else if(flag==0)
					{
						screen(rorg);
						mwriteat(15,42,"ID NOT FOUND",YELLOW);
						getch();
					}
				}
				fin.close();
				fout.close();
				remove("astro.txt");
				rename("temp.txt","astro.txt");
			}
			else if(arc==3)
			{
				ifstream fin;
				ofstream fout;
				int flag=0;
				char aid[20];
				char rorg[15];
				ifstream fino("orgnm.txt");
				fino>>rorg;
				screen(rorg);
				fino.close();
				textbackground(RED);
				swriteat(6,25,"Astronaut's ID to be deleted :",WHITE);
				cin>>aid;
				fin.open("astro.txt");
				fout.open("temp.txt",ios::app);
				while(!fin.eof())
				{
					fin.read((char*)&a,sizeof(a));
					if(!fin.eof())
					{
					      char rid[20];
					      strcpy(rid,a.retid());
					      if(strcmp(rid,aid)==0)
					      {
							flag=1;
					      }
					      if(strcmp(rid,aid)!=0)
					      {
						  fout.write((char*)&a,sizeof(a));
					      }
					}
				}
				if(flag==1)
				{
					mwriteat(15,42,"RECORD DELETED",YELLOW);
					getch();
				}
				else if(flag==0)
				{
					mwriteat(15,42,"ID NOT FOUND",YELLOW);
					getch();
				}
				fin.close();
				fout.close();
				remove("astro.txt");
				rename("temp.txt","astro.txt");
			}
			else if(arc==4)
			{
				screen(rorg);
				int cm=mymenu(missmenu,6,3,5);
				if(cm==0)
				{
					ifstream fin;
					ofstream fout;
					fin.open("astro.txt");
					char aid[20];
					textbackground(RED);
					swriteat(6,25,"Enter Astronauts ID : ",WHITE);
					cin>>aid;
					fout.open("temp.txt");
					while(!fin.eof())
					{
						fin.read((char*)&a,sizeof(a));
						if(!fin.eof())
						{
						       char rid[20];
						       strcpy(rid,a.retid());
						       if(strcmp(rid,aid)==0)
						       {
							    mwriteat(15,40,"Found  :  ",YELLOW);
							    mwriteat(15,51,rid,YELLOW);
							    getch();
							    a.setstat('c');
							    fout.write((char*)&a,sizeof(a));
						       }
						       else
						       {
							     mwriteat(15,40,"Not Found  :  ",YELLOW);
							     mwriteat(15,51,aid,YELLOW);
							     getch();
							     fout.write((char*)&a,sizeof(a));
						       }
						}
					}
					fin.close();
					fout.close();
					remove("astro.txt");
					rename("temp.txt","astro.txt");
				}
				else if(cm==1)
				{
					int ctr=0;
					ifstream fin;
					fin.open("astro.txt");
					textbackground(RED);
					swriteat(5,35,"COMPLETED MISSIONS : ",WHITE);
					while(!fin.eof())
					{
						fin.read((char*)&a,sizeof(a));
						if(!fin.eof())
						{
						       char sta=a.retstat();
						       if(sta=='c')
						       {
								a.showastro();
								ctr++;
						       }
						}
					}
					if(ctr==0)
					{
						mwriteat(15,42,"ZERO MISSIONS COMPLETED",YELLOW);
						getch();
					}
					fin.close();
				}
				else if(cm==2)
				{
					int ctr=0;
					ifstream fin;
					fin.open("astro.txt");
					textbackground(RED);
					swriteat(5,35,"INCOMPLETED MISSIONS : ",WHITE);
					while(!fin.eof())
					{
						fin.read((char*)&a,sizeof(a));
						if(!fin.eof())
						{
						       char sta=a.retstat();
						       if(sta=='i')
						       {
								a.showastro();
								ctr++;
						       }
						}
					}
					if(ctr==0)
					{
						mwriteat(15,42,"ALL MISSIONS COMPLETED",YELLOW);
						getch();
					}
					fin.close();
				}
				else if(cm==3)
				{
					int yr,flag=0;
					ifstream fin("astro.txt");
					textbackground(RED);
					swriteat(6,25,"Enter the year : ",WHITE);
					cin>>yr;
					textbackground(RED);
					swriteat(8,25,"MISSIONS OF ",WHITE);
					iwriteat(8,38,yr,WHITE);
					swriteat(8,42,":",WHITE);
					while(!fin.eof())
					{
						fin.read((char*)&a,sizeof(a));
						if(!fin.eof())
						{
							if(a.retyr()==yr)
							{
								a.showmission();
								flag=1;
								char st=a.retstat();
								swriteat(10,45,"Status : ",WHITE);
								if(st=='i')
								{
									swriteat(10,55,"Incomplete",WHITE);
								}
								else
								{
									swriteat(10,55,"Complete",WHITE);
								}
								getch();
							}
						}
						if(flag==0)
						{
							mwriteat(15,42,"NO RECORD FOUND",YELLOW);
							getch();
						}
					}
				}
				else if(cm==4)
				{
					goto outer;
				}

		   }
		  else if(arc==5)
		  {
			goto outer;
		  }
	    }
	    else if(c==2)
	    {
		spacecraft s;
		char rorg[15];
		ifstream fino("orgnm.txt");
		fino>>rorg;
		screen(rorg);
		fino.close();
		int src=mymenu(scraftmenu,6,3,4);
		if(src==0)
		{
			ofstream fout("scraft.txt",ios::app);
			char rorg[15];
			ifstream fino("orgnm.txt");
			fino>>rorg;
			screen(rorg);
			fino.close();
			textbackground(RED);
			s.gettid();
			s.getsid();
			s.getspace();
			fout.write((char*)&s,sizeof(s));
			fout.close();
		}
		else if(src==1)
		{
			char rorg[15];
			int ctr=0;
			ifstream fino("orgnm.txt");
			fino>>rorg;
			screen(rorg);
			fino.close();
			textbackground(RED);
			ifstream fin("scraft.txt");
			if(!fin)
			{
				mwriteat(15,42,"FILE DOESNT EXIST",YELLOW);
				mwriteat(17,42,"Add to create the file",WHITE);
				getch();
			}
			else
			{
				while(!fin.eof())
				{
				       fin.read((char*)&s,sizeof(s));
				       if(!fin.eof())
				       {
						s.showspace();
						ctr++;
				       }
				}
				if(ctr==0)
				{
					mwriteat(15,42,"NO RECORDS FOUND",YELLOW);
					getch();
				}
			}
			fin.close();
		}
		else if(src==2)
		{
			ifstream fin;
			ofstream fout;
			int flag=0;
			char gsid[15];
			textbackground(RED);
			swriteat(6,25,"Enter Space Craft ID to be deleted:",WHITE);
			cin>>gsid;
			fin.open("scraft.txt");
			fout.open("temp.txt");
			while(!fin.eof())
			{
				fin.read((char*)&s,sizeof(s));
				if(!fin.eof())
				{
				      char rsid[15];
				      strcpy(rsid,s.retsid());
				      if(strcmp(rsid,gsid)==0)
				      {
						flag=1;
				      }
				      if(strcmp(rsid,gsid)!=0)
				      {
						fout.write((char*)&s,sizeof(s));
				      }
				}
			}
			if(flag==0)
			{
				mwriteat(15,42,"ID NOT FOUND",YELLOW);
				getch();
			}
			else if(flag==1)
			{
				mwriteat(15,42,"RECORD DELETED",YELLOW);
				getch();
			}
			fin.close();
			fout.close();
			remove("scraft.txt");
			rename("temp.txt","scraft.txt");
		}
		else if(src==3)
		{
			goto outer;
		}
      }
      }
	getch();

}
