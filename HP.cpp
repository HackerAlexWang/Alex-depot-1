#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
using namespace std;
void Gotoxy(int x,int y){
	int xx=0x0b;
	HANDLE hOutput;
	COORD loc;
	loc.X=y;
	loc.Y=x;
	hOutput=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOutput,loc);
}
void SetNowCursor(bool f){
	HANDLE handle=GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursor_info;
	GetConsoleCursorInfo(handle,&cursor_info);
	cursor_info.bVisible=f;
	SetConsoleCursorInfo(handle,&cursor_info);
}
void Color(int color){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
}
void Welcome(){
	cout<<"-----------HarryPotter-----------"<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<"---------MADE BY HOGWARTS--------"<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<"-----PRESS ANY KEY TO START------"<<endl;
	system("pause");
}
void SlowSay(string s){
	for(int i=0;i<s.size();i++){
		cout<<s[i];
		Sleep(50);
	}
	cout<<endl;
}
void Inducts(string num){
	
}
void NewUser(string name,string password){
	
}
void GreenHand(){
	system("cls");
	SetNowCursor(false);
	cout<<"Choose the Language:"<<endl;
	cout<<"1.Chinese"<<endl;
	cout<<"2.English"<<endl;
	char c=getch();
	if(c=='1'){
		SlowSay("在一个晴朗的星期天，你正在小路上散步。"); 
		SlowSay("---!");
		SlowSay("一只猫头鹰飞来，留下了一封信。");
		SlowSay("你毫不犹豫地拆开了：");
		SlowSay("亲爱的同学：");
		SlowSay("    我们愉快地通知您，");
		SlowSay("    您已获准在霍格沃兹魔法学校就读。");
		SlowSay("    随信附上所需书籍及装备一览。");
		SlowSay("                          校长 阿不思·邓布利多");
		system("pause");
		system("cls");
		cout<<"-------------新手教学-------------"<<endl;
		cout<<"                                  "<<endl;
	}else{
		
	}
}
bool Login(){
	system("cls");
	cout<<"HarryPotter-Magic World"<<endl;
	cout<<"Login"<<endl;
	cout<<"Name:";
	string name;
	cin>>name;
	cout<<"Password:";
	string password;
	cin>>password;
	cout<<"1.Login 2.Register"<<endl;
	int ch;
	cin>>ch;
	if(ch==1){
		ifstream id("D:/HarryPotter/Users/UserList.usl");
		while(!id.eof()){
			string n,p,num;
			id>>n>>p>>num;
			if(n==name&&password==p){
				Inducts(num);
				cout<<"Welcome Back!"<<endl;
				Sleep(1000);
				return true;
			}
		}
		return false;
	}else{
		NewUser(name,password);
		cout<<"Welcome!"<<endl;
		Sleep(1000);
		cout<<"Needs Beginner Guide&Story?(y/n)"<<endl;
		char c=getch();
		if(c=='y')GreenHand();
		return true;
	}
}
int main(){
	SetNowCursor(false);
	Welcome();
	SetNowCursor(true);
	while(!Login()){}
	
	return 0;
}

