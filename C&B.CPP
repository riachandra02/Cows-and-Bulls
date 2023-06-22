#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<graphics.h>

void rfunc(int arr[]){
	randomize();
	arr[0]=1+(rand()%9);
	int flag=0;
	int cnt=1;
	int i,x;
	for(;cnt<4;cnt++){
		flag=0;
		while(flag==0){
		      x=rand()%10;
		      flag=1;
		      for(i=0;i<cnt;i++){
			if(arr[i]==x)
				flag=0;
		      }
		}
		arr[cnt]=x;
	}
}
void main()
{int gd=DETECT,gm,L;
 initgraph(&gd,&gm,"c:\\tc\\bgi");
 for(L=0;L<=360;++L)
 { circle(300,200,80);
   pieslice(300,200,0,L,80);
   outtextxy(200,320,"Loading...Please Wait!");
   delay(20);
 }
 closegraph();
 cout<<"Press Any Key To Continue"<<endl;
 getch();
 cout<<"WELCOME TO COWS AND BULLS!!"<<endl;
 cout<<"The rules of the games are as follows:"<<endl;
 cout<<"1.There are four digits hidden(varying from 0-9), you have to guess"<<endl;
 cout<<"  the four digits"<<endl;
 cout<<"2.Cows means that the digit you have entered is correct"<<endl;
 cout<<"  just at the wrong position."<<endl;
 cout<<"3.Bull means that the digit entered is at"<<endl;
 cout<<"  the right position."<<endl;
 cout<<"  eg. if the hidden no. is 1 2 3 4, and you enter the number to guess as 4 3 2 1 the nos. are right, just at the wrong position, so the output would be 0 bulls, 4 cows."<<endl;
 cout<<"  if the number entered by you to guess is 1 2 3 4, it will show 4 bulls, 0 cows."<<endl;
 cout<<"  if the no. entered is 7 8 1 2, it will show 0 bulls, 2 cows"<<endl;
 cout<<"  and similarly for 2 bulls, 0 cows"<<endl;
 cout<<"  also remember, the four digit number will not start from 0"<<endl;
 cout<<"  and no repetition of nos. would appear i.e. the four digits will be distinct"<<endl;
 cout<<"  let's start"<<endl;
 int a[4],y[4],bulls,cows,f=0,c=0;
 rfunc(y);

 cout<<"enter guesses:"<<endl;
 for(int i=1;i<=7;i++)
 {bulls=0;
  cows=0;
  for(int x=0;x<4;x++)
  {cin>>a[x];}
  for(int j=0;j<4;j++)
  {for(int k=0;k<4;k++)
   {if(a[j]==y[k]&&j==k)
    bulls+=1;
    else if(a[j]==y[k])
    cows+=1;
   }
  }
 cout<<bulls<<" bulls, "<<cows<<" cows."<<endl;
 f+=1;
 if(bulls==4)
 {cout<<endl<<"correct!";
  c=7;
  break;}
 }
 if(f==7&&c==0)
 {cout<<"oops! you are out of guesses. the number was:";
  for(int e=0;e<4;e++)
  {cout<<y[e]<<" ";}
 }
 getch();
}















