#include<iostream.h>
#include<conio.h>
int a[4][4]={{0,0,0,1}
	    ,{0,1,0,1}
	    ,{0,1,0,1}
	    ,{0,0,0,0}
	    };
void find(int x,int y,int xf,int yf)
{
if(x==xf&&y==yf)
{
cout<<"Yes:D";
return;
}
if(x<3&&a[x+1][y]==0)
{
a[x][y]=2;
find(x+1,y,xf,yf);
a[x][y]=0;
}
if(x>0&&a[x-1][y]==0)
{
a[x][y]=2;
find(x-1,y,xf,yf);
a[x][y]=0;
}
if(y<3&&a[x][y+1]==0)
{
a[x][y]=2;
find(x,y+1,xf,yf);
a[x][y]=0;
}
if(y>0&&a[x][y-1]==0)
{
a[x][y]=2;
find(x,y-1,xf,yf);
a[x][y]=0;
}
}
void main(){
clrscr();
int xf=3,yf=3;
find(0,0,3,3);
getch();
}




