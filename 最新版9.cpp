#include<bits/stdc++.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
#define N 21
#include<iostream>
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0)
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int mouse=GetAsyncKeyState(VK_LBUTTON)&0x8000;
int mainum;
bool last_6,main_1,window_s,sight_p,kcb_1,idark_1;
void idark();
int blue();
POINT Windowpos()
{
    POINT pt;
    GetCursorPos(&pt);
    HWND h=GetForegroundWindow();
    ScreenToClient(h,&pt);
    pt.x/=8;pt.y/=16;
    return pt; 
}

int n,p,zj=0,tk=0,jtl=0,q=200,y,t,s1,s2,c,c1,c2;
int car[10005][10005]= {0};
void maint();
int timer();
int mains();
int xl(int x) {
	int i;
	cout<<"----------------------"<<endl;
	cout<<"|";
	if(x<=3)
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_RED);
	else
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_GREEN);
	for(i=0; i<x; i++)
		cout<<"��";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	for(int i=0; i<10-x; i++)cout<<"  ";
	cout<<"|"<<endl;
	cout<<"----------------------";
	return i;
}
void dj(int x,int x2,int n) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	system("cls");
	cout<<"--------------------------------|"<<endl;
	xl(x);
	cout<<"    ���  |"<<endl;
	cout<<"--------------------------------|"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_RED);
	if(tk==1)
		cout<<"            ͷ��"<<endl;
	if(zj==1)
		cout<<"    װ��"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	xl(x2);
	cout<<"   ���� |"<<endl;
	cout<<"--------------------------------|-------------------------------------------"<<endl;
	cout<<"                     ��"<<t<<"��                   ��"<<endl;
	cout<<"--------------------------------|-------------------------------------------"<<endl;
	if(tk>=1&&x<=5) {
		x++;
		cout<<"ͷ���ֵ�һ���˺�"<<endl;
		tk--;
	}
	if(zj>=1&&x<=5) {
		x++;
		cout<<"װ�׵ֵ�һ���˺�"<<endl;
		zj--;
	}
	if(x<=0) {
		cout<<"������!";
		system("pause");
		maint();
	}

	else if(x2<=0) {
		cout<<"��Ӯ��!";
		system("pause");
		q+=100;
		maint();
	}

	if(n==1||n==4) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_RED);
		cout<<"-----------------------------------------------------"<<endl;
		cout<<"|                                                   |"<<endl;
		cout<<"|             ��                                    |"<<endl;
		cout<<"|                                                   |"<<endl;
		cout<<"|                                                   |"<<endl;
		cout<<"|                        |                          |"<<endl;
		cout<<"|                     -- 0 --                       |"<<endl;
		cout<<"|                        |                          |"<<endl;
		cout<<"|                                                   |"<<endl;
		cout<<"|                                                   |"<<endl;
		cout<<"|                                                   |"<<endl;
		cout<<"|                                                   |"<<endl;
		cout<<"-----------------------------------------------------"<<endl;
		cout<<"δ����"<<endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_GREEN);
	}
	if(n==2||n==5) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_GREEN);
		cout<<"-----------------------------------------------------"<<endl;
		cout<<"|                                                   |"<<endl;
		cout<<"|                                                   |"<<endl;
		cout<<"|                                                   |"<<endl;
		cout<<"|                                                   |"<<endl;
		cout<<"|                        |                          |"<<endl;
		cout<<"|                     -- 1 --                       |"<<endl;
		cout<<"|                        |                          |"<<endl;
		cout<<"|                                                   |"<<endl;
		cout<<"|                                                   |"<<endl;
		cout<<"|                                                   |"<<endl;
		cout<<"|                                                   |"<<endl;
		cout<<"-----------------------------------------------------"<<endl;
		cout<<"����"<<endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	} else if(n==3) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_BLUE);
		cout<<"-----------------------------------------------------"<<endl;
		cout<<"|                                                   |"<<endl;
		cout<<"|                                                   |"<<endl;
		cout<<"|                                                   |"<<endl;
		cout<<"|                                                   |"<<endl;
		cout<<"|                        |                          |"<<endl;
		cout<<"|                     -- 1 --                       |"<<endl;
		cout<<"|                        |                          |"<<endl;
		cout<<"|                                                   |"<<endl;
		cout<<"|                                                   |"<<endl;
		cout<<"|                                                   |"<<endl;
		cout<<"|                                                   |"<<endl;
		cout<<"-----------------------------------------------------"<<endl;
		cout<<"��Ѫ"<<endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	}
	cout<<"1.ǹ 2.��";
	if(jtl==1)
		cout<<"3. ������";
	cout<<endl;
	//while(1){
	cout<<"->";
	//}
	cin>>p;
	n=rand()%5+1;
	if(n==1||n==4) {
		x--;
		t++;
		dj(x,x2,n);
	} else if(n==2||n==5) {
		if(jtl==1&&p==3)x2--;
		x2--;
		t++;
		dj(x,x2,n);

	} else {
		if(x<10)
			x++;
		if(x2<10)
			x2++;
		t++;
		dj(x,x2,n);

	}
}
int main();
int sd(int x) {
	system("cls");
	cout<<"          |           Ǯ��";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_GREEN);
	cout<<q;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	cout<<"      |"<<endl;
	cout<<endl;
	cout<<"          -------------------------"<<endl;
	cout<<"          | 1.װ�� 50 | 2.ͷ�� 50 |"<<endl;
	cout<<"          -------------------------"<<endl;
	cout<<"          |3.������200|           |"<<endl;
	cout<<"          -------------------------"<<endl;
	cout<<"          |";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_INTENSITY |FOREGROUND_INTENSITY | BACKGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE |BACKGROUND_RED);
	cout<<"         0.�˳�        ";

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	cout<<"|"<<endl;
	cout<<"          -------------------------"<<endl;
	cin>>p;
	if(p==0) {
		maint();
	}
	if(p==1) {
		if(q>=50) {
			cout<<"�ѹ���װ��"<<endl;
			zj++;
			q=q-50;
			sd(x);
		} else
			cout<<"Ǯ����"<<endl;
		sd(x);
	}
	if(p==2)
		if(q>=50) {
			cout<<"�ѹ���װ��"<<endl;
			tk++;
			q=q-50;
			sd(x);
		} else
			cout<<"Ǯ����"<<endl;
	if(p==3)
		if(q>=200) {
			cout<<"�ѹ���װ��"<<endl;
			jtl=1;
			q=q-200;
			sd(x);
		} else
			cout<<"Ǯ����"<<endl;
	sd(x);
	return p;
}

int gb() {
	CONSOLE_CURSOR_INFO cursor_info = {1, 0};
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
}
int print_f(int m) {

	for(int i=1; i<=m; i++) {
		for(int j=1; j<=m; j++) {
			cout<<car[i][j];
		}
		cout<<endl;
	}
}
int qz(int x,int q) {
	if(x==0) {
		cout<<"������...";
		maint();
	}
	if(car[27][28]!=2) {
		cout<<"��Ӯ��!";
		q+=100;
		maint();
	}
	if(n==27||y==28) {
		for(int i=1; i<=30; i++)
			car[n][i]=3;
		car[27][28]=2;
		x--;
	}
	if(n<1||n>30||y<1||y>30)
		n=y=15;
	system("cls");
	cout<<n<<y<<endl;
	xl(x);
	cout<<endl;
	print_f(30);
	cin>>p;
	if(p==8)

		if(n!=0) {
			car[n][y]=0;
			n--;
			car[n][y]=1;
			qz(x,q);
		}

	if(p==5)
		if(n!=30) {
			car[n][y]=0;
			n++;
			car[n][y]=1;
			qz(x,q);
		}

	if(p==4)
		if(y!=0) {
			car[n][y]=0;
			--y;
			car[n][y]=1;
			qz(x,q);
		}

	if(p==6) {
		if(y!=30) {
			car[n][y]=0;
			++y;
			car[n][y]=1;
			qz(x,q);
		}
	}

	system("pause");


}
void Go(int x,int y);
void maint() {
	cout<<"��¼�˺�����:";
	string zhmm;
	cin>>zhmm;
	if(zhmm!="�����")
		mains();
	gb();
	int m,t1,x=10,p;
	memset(car,0,sizeof(car));
	system("cls");
	cout<<"0.�˳� 1.ǹս 2.�̵� 3.ǩ�� 4.��ս 5.���� 6.ֲ���ս��ʬ"<<endl;
	cin>>p;
	if(p==6)
	{
		Go(15,15);
		cout<<"������ֲ���ս��ʬ.exe";
		
		system("start ֲ���ս��ʬ.exe");
	}
	if(p==1) {
		n=rand()%30+1;
		y=rand()%30+1;
		car[n][y]=1;
		car[27][28]=2;
		qz(x,q);
	}
	if(p==2) {
		while(1) {
			sd(x);
			if(p==0)
				break;
			int p;
			maint();
		}
	}
	if(p==3) {
		SYSTEMTIME sys;
  	  GetLocalTime( &sys );
		cout<<"OK";
		freopen("qd.log","r",stdin);
		freopen("qd.log","w",stdout);
		string xq;int nuq;
		cin>>nuq;
		for(int i;i<=nuq;i++)
		cin>>xq,cout<<xq;
		cout<<"ǩ��"<<' '<<nuq+1<<' '<<sys.wMonth<<' '<<sys.wDay<<' '<<sys.wHour<<' '<<sys.wMinute;
		exit(0);
	}
	if(p==4) {
		dj(10,10,0);
	}
	if(p==0) {
		mains();
	}
	if(p==5) {
		while(1) {
			cout<<"|";
			system("cls");
			Sleep(10);
		}

	}
}
int print_gj() {
	printf(" �n�n�n�n�n�n�k�k�k�k�k�k�k�k�n�n�n�n�n�n\n");
	printf("�X�T�T�T�T�T�k�k�� �� �k�k�T�T�T�T�T�[\n");
	printf("�U��1.ʵ��10�����ڵĶ�ʱ�رռ����  �U\n");
	printf("�U��2.�����رռ������              �U\n");
	printf("�U��3.ע���������                  �U\n");
	printf("�U��0.�˳�ϵͳ��                    �U\n");
	printf("�U��4.����    ��                    �U\n");
	printf("�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
	return 0;
}
void gotoxy(int x,int y) {
	//λ�ú���
	COORD pos;
	pos.X=2*x;
	pos.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
void color(int a) { //��ɫ����
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),a);
}
void init(int apple[2]) { //��ʼ����������ʼ��Χǽ����ʾ��Ϣ��ƻ����
	int i,j;//��ʼ��Χǽ
	int wall[N+2][N+2]= {{0}};
	for(i=1; i<=N; i++) {
		for(j=1; j<=N; j++)
			wall[i][j]=1;
	}
	color(11);
	for(i=0; i<N+2; i++) {
		for(j=0; j<N+2; j++) {
			if(wall[i][j])
				cout<<"  ";
			else cout<<"��" ;
		}
		cout<<endl;
	}
	gotoxy(N+3,1);//��ʾ��Ϣ
	color(20);
	cout<<"�� W S A D �ƶ�����"<<endl;
	gotoxy(N+3,2);
	color(20);
	cout<<"���������ͣ"<<endl;
	gotoxy(N+3,3);
	color(20);
	cout<<"�÷֣�"<<endl;
	apple[0]=rand()%N+1;//ƻ��
	apple[1]=rand()%N+1;
	gotoxy(apple[0],apple[1]);
	color(12);
	cout<<"��"<<endl;
}
int tyu2,yhmm=0;
char x[3];
long long s,z;
double b1,b2,b3,b4,b5,b6,b7,b8,b9,b0,l,v,u,r,ew,er,hj,jk;
int a,a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,b,i,d,T,m,e,qq=0,ww=0,xyz,qwe,ert,wer,rty,tyu,yui,qqq;
const int MOD=1000000;















////////////////////////////////////////////////////////////////






int blue(int n);
int last6();
int windows();
void Go(int x,int y);

HWND GetConsoleHwnd(void)
	{
	#define MY_BUFSIZE 1024 // Buffer size for console window titles.
	HWND hwndFound; // This is what is returned to the caller.
	char pszNewWindowTitle[MY_BUFSIZE]; // Contains fabricated
	// WindowTitle.
	char pszOldWindowTitle[MY_BUFSIZE]; // Contains original
	// WindowTitle.
	// Fetch current window title.
	GetConsoleTitle(pszOldWindowTitle, MY_BUFSIZE);
	// Format a "unique" NewWindowTitle.
	wsprintf(pszNewWindowTitle,"%d/%d",
	GetTickCount(),
	GetCurrentProcessId());
	// Change current window title.
	SetConsoleTitle(pszNewWindowTitle);
	// Ensure window title has been updated.
	Sleep(40);
	// Look for NewWindowTitle.
	hwndFound=FindWindow(NULL, pszNewWindowTitle);
	// Restore original window title.
	SetConsoleTitle(pszOldWindowTitle);
	return(hwndFound);
}
int main2();
int mains() {
	if(!last_6)
	return 0;
	system("cls");
	if(mainum>=100)
	{
		blue(3);
	}
	color(3);
	system("date /T");
	system("time /T");
	color(7);
	cout<<"1.���� 2.��Ϸ 3.�ٶ� 4.����"<<endl;
	cout<<"5.���๦�� 6.���� 7.���� 8.more"<<endl;
	mainum++;
	cin>>y;
	if(y==6)
	{
		last6();
	}
	if(y==7)
	{
		windows();
	}
	if(y==2) {
		cout<<"1.���Ӽ����� 2.������ 3.̰���� 4.����"<<endl;
		cin>>d;
		if(d==1) {
			for(i=1; i<=1000000; i++) {
				cout<<"1.���� 2.���� 3.��"<<endl;
				cin>>a;
				cout<<"��һ����ȵ���"<<qq<<":"<<ww<<endl;
				srand((unsigned)time(NULL));
				b=rand()%3+1;
				if(a==b)
					cout<<"��͵��Գ�����ͬ��ƽ"<<endl;
				else if(a==1&&b==2) {
					cout<<"���Գ�������ʤ"<<endl;
					qq=qq+1;
				}//1.���� 2.���� 3.��
				else if(a==1&&b==3) {
					cout<<"���Գ�������"<<endl;
					ww=ww+1;
				} else if(a==2&&b==1) {
					cout<<"���Գ����ӣ���"<<endl;
					ww=ww+1;
				} else if(a==2&&b==3) {
					cout<<"���Գ�����ʤ"<<endl;
					qq=qq+1;
				} else if(a==3&&b==1) {
					cout<<"���Գ����ӣ�ʤ"<<endl;
					qq=qq+1;
				} else if(a==3&&b==2) {
					cout<<"���Գ���������"<<endl;
					ww=ww+1;
				}
				cout<<"������ȵ���"<<qq<<":"<<ww<<endl;
				if(ww==10||qq==10)
					break;
			}
			system("pause");
			system("cls");
			system("time");
		}//��Ϸd
		if(d==2) {
			for(i=1; i<=1000000; i++) {
				srand((unsigned)time(NULL));
				b=rand()%3+1;
				cin>>e;
				if(e==b) {
					cout<<"��ϲ��ϲ�����ˣ���"<<endl;
					break;
				} else if(e<b)
					cout<<"С�ˡ�����"<<endl;
				else if(e>b)
					cout<<"���ˡ�����"<<endl;
			}
			system("pause");
		} else if(d==3) {
			system("cls");
			int i,j;
			int** snake=NULL;
			int apple[2];
			int score=0;
			int tail[2];
			int len=3;
			char ch='p';
			srand((unsigned)time(NULL));
			init(apple);
			snake=(int**)realloc(snake,sizeof(int*)*len);
			for(i=0; i<len; i++)
				snake[i]=(int*)malloc(sizeof(int)*2);
			for(i=0; i<len; i++) {
				snake[i][0]=N/2;
				snake[i][1]=N/2+i;
				gotoxy(snake[i][0],snake[i][1]);
				color(14);
				cout<<"��"<<endl;
			}
			while(1) { //������Ϣѭ��
				tail[0]=snake[len-1][0];
				tail[1]=snake[len-1][1];
				gotoxy(tail[0],tail[1]);
				color(11);
				cout<<"��"<<endl;
				for(i=len-1; i>0; i--) {
					snake[i][0]=snake[i-1][0];
					snake[i][1]=snake[i-1][1];
					gotoxy(snake[i][0],snake[i][1]);
					color(14);
					cout<<"��"<<endl;
				}
				if(kbhit()) {
					gotoxy(0,N+2);
					ch=getche();
				}
				switch(ch) {
					case 'w':
						snake[0][1]--;
						break;
					case 's':
						snake[0][1]++;
						break;
					case 'a':
						snake[0][0]--;
						break;
					case 'd':
						snake[0][0]++;
						break;
					default:
						break;
				}
				gotoxy(snake[0][0],snake[0][1]);
				color(14);
				cout<<"��"<<endl;
				Sleep(abs(200-0.5*score));
				if(snake[0][0]==apple[0]&&snake[0][1]==apple[1]) { //�Ե�ƻ�����߷�����1���߳���1
					score++;
					len++;
					snake=(int**)realloc(snake,sizeof(int*)*len);
					snake[len-1]=(int*)malloc(sizeof(int)*2);
					apple[0]=rand()%N+1;
					apple[1]=rand()%N+1;
					gotoxy(apple[0],apple[1]);
					color(12);
					cout<<"��"<<endl;
					gotoxy(N+5,3);
					color(20);
					cout<<score<<endl;
				}
				if(snake[0][1]==0||snake[0][1]==N||snake[0][0]==0||snake[0][0]==N) { //ײ��Χǽ��ʧ��
					gotoxy(N/2,N/2);
					color(30);
					system("cls");
					for(i=0; i<=100; i++) {
						cout<<"     ";
					}
					system("color 4C");
					cout<<"             ʧ�ܣ�����"<<endl;
					cout<<"       |          |"<<endl;
					cout<<"        |        |"<<endl;
					cout<<"         |      |"<<endl;
					cout<<"          |    |"<<endl;
					cout<<"           |  |"<<endl;
					cout<<"            ||"<<endl;
					cout<<"           |  |"<<endl;
					cout<<"          |    |"<<endl;
					cout<<"         |      |"<<endl;
					cout<<"        |        |"<<endl;
					cout<<"       |          |"<<endl;

					cout<<"                                       �÷�:"<<score;

					for(i=0; i<len; i++)
						free(snake[i]);
					Sleep(INFINITE);
					exit(0);
				}
			}
			return 0;
		} else {
			system("mode con cols=1000 lines=100");
			maint();
		}

	}

//��Ϸ
	else if(y==1) {
		cout<<"1.+ 2.- 3.* 4./ 5.! 6.�̣� 7.�O 8.�ֽ�������"<<endl;
		cin>>q;
		if(q==1) {
			cout<<"������2������"<<endl;
			cin>>l>>v;
			cout<<l+v<<endl;
			system("pause");
		} else if(q==2) {
			cout<<"������2������"<<endl;
			cin>>u>>r;
			cout<<u+r<<endl;
			system("pause");
		} else if(q==3) {
			cout<<"������2������"<<endl;
			cin>>ew>>er;
			cout<<ew*er<<endl;
			system("pause");
		} else if(q==4) {
			cout<<"������2������"<<endl;
			cin>>hj>>jk;
			cout<<hj/jk;
			system("pause");
		} else if(q==5) {
			cout<<"n*(n-1)*...*1 ������1����(n)��"<<endl;
			scanf("%lld",&a1);
			s=1;
			for(i=1; i<=a1; i++) {
				s=s*(s+1);
			}
			cout<<s<<endl;
		} else if(q==6) {
			cout<<"������1����,���п�������"<<endl;
			cin>>a0;
			sqrt(a0);
			cout<<a0<<endl;
		} else if(q==7) {
			cout<<"������2������n��m�η���"<<endl;
			long long x9,y9,ans=1,cnt=x9;
			cin>>x9>>y9;
			while(y9) {
				if(y9&1) {
					ans*=cnt;
				}
				cnt*=cnt;
				y9>>=1;
			}
			cout<<ans;
		} else if(q==9) {
			cout<<"1.��Ԫһ�η��� 2.һԪ���η���"<<endl;
			cin>>qq;
			if(qq==1) {
				cout<<"nԪһ��(1��n��3)"<<endl;
				cin>>qq;
				if(qq=1) {
					cout<<"��ʼ"<<endl;
					cin>>a;
					cout<<"x+";
					cin>>b;
					cout<<"=";
					cin>>c;
					cout<<fixed<<setprecision(100)<<c/(a+b);
				}
				if(qq=2) {
					cout<<"��ʼ"<<endl;
					cin>>a1;
					cout<<"x+";
					cin>>b1;
					cout<<"y=";
					cin>>c1;
					cin>>a2;
					cout<<"x+";
					cin>>b2;
					cout<<"y=";
					cin>>c2;
				}

			} else if(qq==2) {
				cout<<"��ʼ"<<endl;
				cin>>a;
				cout<<"x^2+";
				cin>>b;
				cout<<"x+";
				cin>>c;
				cout<<"=0"<<endl;
				cout<<a<<"x^2+"<<b<<"x+"<<c<<"=0";
				cout<<endl;
				if((b*b-4*a*c)>=0) {
					cout<<"��="<<fixed<<setprecision(100)<<b*b-4*a*c<<endl;
					cout<<"x1="<<fixed<<setprecision(100)<<(-b*b-sqrt(b*b-4*a*c)/2/a)<<endl;
					cout<<"x2="<<fixed<<setprecision(100)<<(-b*b+sqrt(b*b-4*a*c)/2/a)<<endl;
				} else {
					cout<<"�޽�";
				}
			}
		} else if(q==8) {
			cin>>a0;
			cout<<a0<<"=1";
			if(a0%2==0)
				cout<<"*2";
			for(int i=3; i<=sqrt(a0); i+=2) {
				if(a0%i==0)
					cout<<"*"<<i;
			}
			cout<<endl;
			cout<<a0<<"��������:";
			for(int i=1; i<=a0; i++) {
				if(a0%i==0)
					cout<<' '<<i;
			}
		}
	} 
	else if(y==3) {
		cout<<"1.�ٶ� 2.360 3.bing 4.google\n";
		cin>>xyz;
		cout<<"��������Ҫ���������ݣ�";
		if(xyz==1)
		{
		char t[10],cmd[2000]="start https://www.baidu.com/s?word=";
			cin>>t;
			system(strcat(cmd,t));
		}
		else if(xyz==3)
		{
			char t[10],cmd[2000]="start https://www.bing.com/search?q=";
			cin>>t;
			system(strcat(cmd,t));
		}
		else if(xyz==2)
		{
			char t[10],cmd[2000]="start https://www.so.com/s?q=";
			cin>>t;
			system(strcat(cmd,t));
		}
		else if(xyz==4)
		{
			char t[10],cmd[2000]="start https://www.google.com.hk/search?client=";
			color(12);cout<<"<��ע�⣬����Google�˳��й���½,�����޷�����>";
			cin>>t;
			system(strcat(cmd,t));
		}
		HWND hWnd=FindWindow("ConsoleWindowClass",NULL);
		ShowWindow(hWnd,SW_HIDE);\
		GetConsoleHwnd();
		system("pause");
	} 
	else if(y==4) {
		cout<<"1.΢�� 2.�绰 3.��ǩ"<<endl;
		cin>>qwe;
		if(qwe==1) {
			cout<<"������"<<endl;
			cin>>wer;
			cout<<"������������������������"<<endl;
			system("start https://wx.qq.com"); 
			system("pause");
		} else if(qwe==2) {
			cin>>ert;
			cout<<"���ں���������"<<endl;
			for(i==1; i<=100; i++)
				cout<<" "<<endl;
			cout<<"��忨"<<endl;
			system("pause");
		} else if(qwe==3) {
			char*rty;
			scanf("&d","rty");
			freopen("δ����","r",stdout);
			printf("&d","rty");
		}

		system("pause");
	} 
	else if(y==5) {
		cout<<"1.��С 2.�ػ� 3.ʱ�� 4.���� 5.���� 6.�˳���¼"<<endl;
		cin>>yui;
		if(yui==1) {
			cout<<"1.���� 2.��Ļ"<<endl;
			cin>>qqq;
			if(qqq==1)
				cin>>i;
			else
				cin>>a;
			system("pause");
		} else if(yui==2) {
			system("title C���Թػ�����");//����cmd���ڱ���
			system("mode con cols=48 lines=25");//���ڿ�ȸ߶�
			system("color 0B");
			system("date /T");
			system("TIME /T");
			char cmd[20]="shutdown -s -t ";
			char t[5]="0";
			print_gj();
			int c;
			scanf("%d",&c);
			getchar();
			switch(c) {
				case 1:
					printf("�����ڶ�������Զ��رռ��������0~600��\n");
					scanf("%s",t);
					system(strcat(cmd,t));
					break;
				case 2:
					system("shutdown -p");
					break;
				case 3:
					system("shutdown -l");
					break;
				case 0:
					break;
				case 4:
					system("mode con cols=1000 lines=100");
					system("shutdown -?");
					break;
				default:
					printf("Error!\n");
			}
			system("pause");
			exit(0);
		} 
		else if(yui==3) {
			cout<<"1.ʱ�� 2.ʱ���� 3.��ʱ 4.����"<<endl;
			cin>>a;
			if(a==1) {
				cout<<"1.English 2.�й�"<<endl;
				cin>>i;
				cout<<"OK"<<endl;
				system("pause");
			} else if(a==2) {
				cout<<"1.(24) 2.(12)"<<endl;
				cin>>i;
				system("pause");
				system("time");
			} 
			else if(a==3)
			{
				timer();
				SYSTEMTIME sys;
   				GetLocalTime( &sys );
				int tst1=sys.wMinute;
				int tst2=sys.wHour;
				color(15);
				while(1)
				{
					SYSTEMTIME sys;
   					GetLocalTime( &sys );
					cout<<sys.wHour-tst1<<"Сʱ"<<sys.wMinute<<"����"<<sys.wSecond<<"��",system("cls");
					Sleep(100);
				}
				
			}
			else
			{
				int x,y,z;
				cout<<"Сʱ:";cin>>x;cout<<"����:";cin>>y;cout<<"��:";cin>>z;
				timer();
				SYSTEMTIME sys;
   				GetLocalTime( &sys );
				int tst1=sys.wHour;
				int tst2=sys.wMinute;
				int tst3=sys.wSecond;
				while(1){
					SYSTEMTIME sys;
   					GetLocalTime( &sys );
					if(sys.wHour-tst1>=x && sys.wMinute-tst2>=y)
					{
						Sleep(sys.wSecond*100);
						cout<<"��ʱ";
						break;
					}
					else
					continue;
				}
				
				MessageBox(NULL,TEXT("���趨�����ӵ�ʱ��"),TEXT("��ʱ"),MB_ICONEXCLAMATION);
				main2(); 
//MessageBox(m_hWnd,_T(),_T,  ); 
			}
//				cout<<"������  2.ֹͣ"<<endl;
//			const int MOD=1000000;
//			int a,n,s=0;
//			scanf("%d",&n);
//			for(int i=1; i<=n; ++i) {
//				int factorial=1;
//				for(int j=1; j<=i; ++j)
//					factorial=(factorial*j%MOD);
//				s=(s+factorial)%MOD;
//			}
			printf("%d\n",s);
			scanf("%d",&a);
			printf("Time used=%.21f\n",(double)clock()/CLOCKS_PER_SEC);
		}
		if(yui==4) {
			cout<<"1.WiFi 2.�ƶ� 3.����"<<endl;
			cin>>d;
			if(d==1) {
				cout<<"����ˢ��"<<endl;
				cout<<"����û�п�����WiFi"<<endl;
				system("pause");
			} else if(d==2) {
				cout<<"�㻹û�й���û���ƶ�����"<<endl;
			} else {
				cout<<"1.�� 2.��"<<endl;
				cin>>i;
				if(i==1)
					cout<<"�Ѿ���"<<endl;
				else
					cout<<"�Ѿ��ر�"<<endl;
			}
		} else if(yui==5) {
			for(i==1; i>=1;) {
				cout<<" "<<endl;
			}
		}
		else if(yui==6)
		{
			main2();
		}
	}
	else if(y==8)
	{
		cout<<"1.���� 2.idarkSP 3.�ļ����� 4.�ļ�����";
		int y8;
		cin>>y8;
		if(y8==1)
		system("upd.exe");
		if(y8==2)
		{
			system("cd C:\\Program Files\\Windows Defender\\");
			system("MpCmdRun -Scan -ScanType 3 -File 2");
		}
		if(y8==3)
		{
			system("md \\1file"); 
			cout<<"�뽫�����ļ��ų���Ŀ¼�е�1flle�ļ���";
			system("pause");
			system("rar a -pIidarkissOSafe here 1file");
			system("ren here.rar here.idk");
			system("cls");
			cout<<"�����ļ��ڳ���Ŀ¼here.idk";
			system("pause");
		}
		if(y8==4)
		{
			cout<<"�뽫�����ļ�here.idk�ų���Ŀ¼";
			system("ren here.idk here.rar");
			system("unrar e -pIidarkissOSafe here.rar");
			
			system("cls");
			cout<<"�ļ��ڳ���Ŀ¼";
			system("pause");
		}
	 } 
	mains();
}
int main2(){
	system("cls");
	cout<<"���ڿ���"<<endl;
	Sleep(1000);
	cout<<"������3λ�û�����"<<endl;
	cin>>x;
	cout<<"������4λ���룺"<<endl;
	char ch,str[100];
	int i=0;
	while(1) {
		ch=getch();
		if(ch!=13) {
			str[i]=ch;
			i++;
			printf("*");//" "�пɶ��塣
		} else {
			break;
		}
	}
	printf("\n");
	if(x[0]=='1') {
		freopen("yhmm","r",stdin);
		cin>>yhmm;
		if(yhmm==1) {
			mains();
		} else
			return 0;
	} else if(x[0]!='f'||x[1]!='s'||x[2]!='c'||str[0]!='0'||str[1]!='4'||str[2]!='2'||str[3]!='1')
		//if(z!=1)
	{
		cout<<"����/�û�������      ";
		system("color 0C");
		cout<<"[1.���ע��]"<<endl;
		cin>>tyu;
		if(tyu=1) {
			system("cls");
			cout<<"�������ֻ��ţ�";
			long long syt;
			cin>>tyu2;
			if(/*(tyu2<19000000000)&&(tyu2>12111111111)*/tyu2!=0) {
				system("color 02");
				cout<<"|  ��|"<<endl;
				cout<<"|�ɹ�|"<<endl;
			} else {
				cout<<"��������ȷ���ֻ���"<<endl;
			}
		} else {
			cout<<"������һ��:";
			cout<<"������3λ�û�����"<<endl;
			cin>>x;
			cout<<"������4λ���룺"<<endl;
			cin>>z;

		}
	}
	//freopen("yhmm","w",stdout);
	//cout<<1;
	mains();
}
struct Button{
    int x,y,color;
    const char *name;
    int len;
};
void GetPos(POINT &pt){
    HWND hwnd=GetForegroundWindow();
    GetCursorPos(&pt);
    ScreenToClient(hwnd,&pt);
    pt.y=pt.y/16,pt.x=pt.x/16;
}
void gto(int x,int y)
{
    COORD pos;pos.X=y*2;pos.Y=x;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

Button NewButton(int x,int y,int color,const char *name){
    Button t;
    t.x=x,t.y=y,t.name=name;
    t.color=color;
    t.len=strlen(name);
    return t;
}
bool Preserve(Button A){
    gto(A.x,A.y),color(A.color),printf("%s",A.name);
    POINT pt;
    GetPos(pt);
    if(pt.y==A.x&&(pt.x>=A.y&&pt.x<=A.y+A.len/2)){
        color(A.color);
		gto(A.x,A.y),printf("%s",A.name);
        if(KEY_DOWN(MOUSE_MOVED)) return 1;
    }
    return 0;
}
int kcb(int n); 
POINT Windowpos1()
{
    POINT pt;
    GetCursorPos(&pt);
    HWND h=GetForegroundWindow();
    ScreenToClient(h,&pt);
    pt.x/=8;pt.y/=16;
    return pt; 
}
void Go(int x,int y)
{
    COORD coord;
    coord.X=y;
    coord.Y=x;
    HANDLE a=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(a,coord); 
}
struct node{
	long long many,score;
	bool life;
}player;
int timer()
{
    SYSTEMTIME sys;
    GetLocalTime( &sys );
    printf( "%4d��%02d��%02d�� %02d:%02d:%02d\n",sys.wYear,sys.wMonth,sys.wDay,sys.wHour,sys.wMinute, sys.wSecond);
    sys.wHour%=12;
	if(sys.wHour==12)
	printf(
	"���ששש�\n"
	"��  ��  ��\n"
	"��  ��  ��\n"
	"��      ��\n"
	"���ߩߩߩ�");
	if(sys.wHour==1)
	printf(
	"���ששש�\n"
	"��    ����\n"
	"��  ��  ��\n"
	"��      ��\n"
	"���ߩߩߩ�");
	if(sys.wHour==2)
	printf(
	"���ששש�\n"
	"��    ����\n"
	"��  ��  ��\n"
	"��      ��\n"
	"���ߩߩߩ�");
	if(sys.wHour==3)
	printf(
	"���ששש�\n"
	"��      ��\n"
	"��  �贈��\n"
	"��      ��\n"
	"���ߩߩߩ�");
	if(sys.wHour==4)
	printf(
	"���ששש�\n"
	"��      ��\n"
	"��  ��  ��\n"
	"��    ����\n"
	"���ߩߩߩ�");
	if(sys.wHour==5)
	printf(
	"���ששש�\n"
	"��      ��\n"
	"��  ��  ��\n"
	"��    ����\n"
	"���ߩߩߩ�");
	if(sys.wHour==6)
	printf(
	"���ששש�\n"
	"��      ��\n"
	"��  ��  ��\n"
	"��  ��  ��\n"
	"���ߩߩߩ�");
	if(sys.wHour==7)
	printf(
	"���ששש�\n"
	"��      ��\n"
	"��  ��  ��\n"
	"�ǩ�    ��\n"
	"���ߩߩߩ�");
	if(sys.wHour==8)
	printf(
	"���ששש�\n"
	"��      ��\n"
	"��  ��  ��\n"
	"�ǩ�    ��\n"
	"���ߩߩߩ�");
	if(sys.wHour==9)
	printf(
	"���ששש�\n"
	"��      ��\n"
	"�ǩ���  ��\n"
	"��      ��\n"
	"���ߩߩߩ�");
	if(sys.wHour==10)
	printf(
	"���ששש�\n"
	"�ǩ�    ��\n"
	"��  ��  ��\n"
	"��      ��\n"
	"���ߩߩߩ�");
	if(sys.wHour==11)
	printf(
	"���ששש�\n"
	"�ǩ�    ��\n"
	"��  ��  ��\n"
	"��      ��\n"
	"���ߩߩߩ�\n");
	cout<<"\n       ";color(1);
	for(int i=1;i<=30;i++)
	{
		if(i%7==0)
		cout<<'\n';
		if(i==sys.wDay)
		color(10);
		
		cout<<i<<' ';
		color(1);
	}
	
}
int blue();
//{
//	timer();
////	char t[10],cmd[2000]="start https://www.bing.com/search?q=";
////	cin>>t;
////	system(strcat(cmd,t));
//	return 0;
//}
void power()
{
	int f1[13]={13,14,15,14,13,12,11,12,13,14,15,16,15};
	int f2[13]={13,14,15,16,17,16,15,14,13,14,15,16,17};
	for(int j=1;j<=10;j++)
	for(int i=0;i<=13;i++)
	{
		Go(13,15);
		cout<<"���ڿ���"; 
		Go(f1[i],f2[i]);
		color(10);
		cout<<"��";
		system("cls");
		color(7);
	}
	
}

int last6()
{
	last_6=true;
	bool std=true;
	while(std)
	{
		power();
		color(7);
		main2();
		if(!last_6)
		{
			return 0;
		}
	}
	
}
int kcb(int n);
int first();
int windows()
{
	window_s=true;int mo;
	POINT pt=Windowpos1();
	if(!window_s)return 0;
	
	if(last_6)
	{
		Go(160,20);
		color(14);
    	Go(161,36);
    	printf("������������");
    	Go(162,37);
    	printf("�����°� 6��");
    	Go(163,38);
    	printf("������������");
	}
	if(main_1)
	{
		Go(164,21);
		color(14);
    	Go(165,46);
    	printf("������������");
    	Go(166,46);
    	printf("��ϵͳ�ؼ���");
    	Go(167,46);
    	printf("������������");
    }
    	if(kcb_1)
	{
		Go(168,20);
		color(14);
    	Go(169,56);
    	printf("������������");
    	Go(170,56);
    	printf("�����γ̱�");
    	Go(171,56);
    	printf("������������");
    	
	}
		color(10);
		Go(169,56);
    	printf("������������");
    	Go(170,56);
    	printf("��idark��");
    	Go(171,56);
    	printf("������������"); 
	cin>>mo;
	if(mo==0){
    		window_s=0; 
    	}
	else if(mo==2){
    		main_1=0; 
    	}
	else if(mo==1){
    		last_6=0; 
    	}
    else if(mo==3){
    		kcb_1=0; 
    	}
    else if(mo==4){
    		idark_1=0;
	}
	else
	{
		first();
	}
	if(!window_s)
	return 0;
}
int first()
{
	POINT pt=Windowpos1();
	Go(20,20);
	color(14),cout<<"1   ->";
    Go(21,36);
    printf("��---------��");
    Go(22,36);
    printf("�����°� 6��");
    Go(23,36);
    printf("��---------��");
    Go(24,20);
	color(14),cout<<"2   ->";
    Go(25,36);
    printf("��---------��");
    Go(26,36);
    printf("�����ڹ���");
    Go(27,36);
    printf("��---------��");
    Go(28,20);
	color(14),cout<<"3   ->";
    Go(29,36);
    printf("��---------��");
    Go(30,36);
    printf("�����γ̱�");
    Go(31,36);
    printf("��---------��");
    color(14),cout<<"4   ->";
    Go(32,36);
    printf("��---------��");
    Go(33,36);
    printf("��idarkone��");
    Go(34,36);
    printf("��---------��");
    
    
    
	int mo;
	cin>>mo;
	if(mo==1)
	last6();
	else if(mo==2)
	windows();
	else if(mo==3)
	kcb(1);
	else if(mo==4)
	idark();
}
void idark()
{		
system("cls");
		Go(20,20);
		cout<<"������"; 
		for(int jm=1;jm<=100;jm++)
		Go(22,jm),cout<<"<",Sleep(2000);
	for(int im=1;im<=100000;im++)
	{
		
		Go(15,15);
		cout<<"����԰�װ����"; 
		POINT pt = {0,0};
		GetCursorPos(&pt);
		Go(pt.y/14,pt.x/14);
		cout<<"�I";
		system("cls");
		if(KEY_DOWN(VK_LBUTTON) && pt.y/14==15 && pt.x/14)
		break; 
	}
	Go(20,20);
	cout<<"��װ������"; 
	for(int jm=1;jm<=20;jm++)
	Go(22,jm),cout<<"<",Sleep(1000);
	blue(2);
	first();
}
int kcb(int n)
{
	kcb_1=true;
	int fm[10]={30,10,0,10,10,0,50};
	int fh[10]={7,8,9,10,11,14,14};
	int ys;
	SYSTEMTIME sys;
    GetLocalTime( &sys );
    cout<<"1.�γ̱� 2.���� 3.n 4.��ʦ��\n";
    cin>>ys;
    if(ys==1)
    {
    	while(n<=6)
    	{
    		SYSTEMTIME sys;
    		GetLocalTime( &sys );
			if(!kcb_1)
			return 0;
    		if(sys.wHour==fh[n] && sys.wMinute==fm[n])
    		{
    			MessageBox(NULL,TEXT("�Ͽ���"),TEXT("��ʱ"),MB_ICONEXCLAMATION);
    			n++;
    			kcb(n);
			}
    		
		}
	}
	else if(ys==3)
    {
    	cin>>n;
    	while(n<=6)
    	{
    		system("cls");
    		SYSTEMTIME sys;
    		GetLocalTime( &sys );
			if(!kcb_1)
			return 0;
    		if(sys.wHour>=fh[n] && sys.wMinute>=fm[n])
    		{
    			MessageBox(NULL,TEXT("�Ͽ���"),TEXT("��ʱ"),MB_ICONEXCLAMATION);
    			n++;
    			kcb(n);
			}
    		
		}
	}
	else if(ys==2)
	windows();
	else if(ys==4)
	{
		int xsn;
		cout<<"____����Ŀ\r\b\r";
		cin>>ys;
		cout<<"____��ѧ��\r\b\r";
		cin>>xsn;
		struct node_1{
			string name;
			int bj,xh,cj[50];
		}xs[1001];
		cout<<"����   �༶   ѧ��   �ɼ�\n";
		for(int i=1;i<=xsn;i++)
		{
			cin>>xs[i].name>>xs[i].bj>>xs[i].xh;
			for(int j=1;j<=ys;j++)
			{
				cin>>xs[i].cj[j];
			}
		}
		cout<<"\n\n 1.���� 2.����\n";
		cin>>ys;
		if(ys==1)
		{
			freopen("�ɼ�.csv","w",stdout);
			cout<<"����,�༶,ѧ��,�ɼ�\n";
			for(int i=1;i<=xsn;i++)
			{
				cout<<xs[i].name<<','<<xs[i].bj<<','<<xs[i].xh;
				for(int j=1;j<=ys;j++)
				{
					cout<<','<<xs[i].cj[j];
				}
				cout<<endl;
			}
			exit(0);
		}
		else
		{
//			sort(xs,xs+1000);
		}
	}
	if(!kcb_1)
	return 0;
	
}
int sightp()
{
	sight_p=true;
	int f1[20]={13,13,14,15,16,17,18,19,19,16,16,16,15,17,16,16,16,15,17};
	int f2[20]={14,13,12,11,11,11,12,13,14,15,16,17,16,16,19,20,21,20,20};
	Button A=NewButton(10,10,303,"����");
    while(1){
        if(Preserve(A))
        {
	if(!sight_p)
	{
		return 0;
	}
	for(int i=1;i<=19;i++)
	{
			Go(f1[i],f2[i]);
			color(i*100);
			cout<<" ";
			Sleep(500);
	}
	Go(30,1);
	color(7);
	timer();
	return 0;
		}
		else
		color(10);
	}
}
int blue(int n)
{
	system("cls");
	system("color 19");
	cout<<"A problem has been detected and last_7 has been shut down to prevent damage to your comprter.\nDRIVER-IRQL-NOT-Less-or-equal \n";
	cout<<"If this is the first time you're seen this stop error screen,restart your computer. \n";
	cout<<"If this screen appears again,follow these steps: Check to make sure any mew hardware or software is properly installed. \n";
	cout<<"If this is a new installation,ask your hard ware or software manuacturer for any windows updates you might need. \n";
	cout<<"If problems continue,disable or remove any newly installed hard ware or software. \nDisable BIOS memory options such as caching or shadowing.\n";
	cout<<"If you need to use safte Mode to remore or disable components,restart your computer,press Ctrl+C to select Advacnced Startup Options,and then select safe Mode. \n";
	cout<<"Technical information: ***stop:";
	cout<<"0x0000000"<<n;
	cout<<"\nretime:            ";
	
	for(int iti=99;iti>=1;iti--)
	cout<<"\b\b"<<iti,Sleep(1000);
	FILE*fileb=fopen("data.log","r+");
	cout<<n;
	fclose(fileb);
	int iti=0;
	cout<<1/iti;
}
int main()
{
	main_1=true;
	sightp();
	sight_p=0;
	color(7);
	first();
	windows();
	
	if(!main_1)
	{
		blue(0);
		return 0;
	}
	main();
}
