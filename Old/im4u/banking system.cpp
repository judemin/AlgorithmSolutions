/*
#include<iostream>
using namespace std;

class bank
{
private:
	int money;
	int id;
	char name[100];
	int amoney;
public:
	bank()
	{
		money = 0;
		amoney = 0;
		id = 0;
	}
	~bank()
	{
		money = money;
		id = id;
		amoney = 0;
	}
	void Make()
	{
		cout << "ID:";
		cin >> id;
		cout << "Name:";
		cin  >> name;
		cout << "Input Money:";
		cin >> amoney;
		money += amoney;
	}
	void IPMoney()
	{
		cout <<"Input Money:";
		cin >> amoney;
		money += amoney;
		cout <<"Complete!"<<endl;
	}
	void OPMoney()
	{
		cout <<"Input Money:";
		cin >> amoney;
		money -= amoney;
		cout <<"Complete!"<<endl;
	}
	void OutPut() const
	{
		cout << "ID:"<<id<<endl<<"Name:"<<name<<endl<<"Money:"<<money<<endl;
	}
	int CheckID() const
	{
		return id;
	}
};

int main()
{
	int aid;
	int i,l;
	int hm = 0;
	bank b[100];
	int sel = 0;
	while(true)
	{
		cout << "계좌관리기"<<endl<<"1:계좌개설2:입금3:출금4:출력5:지우기6:종료 ::";
		cin >> sel;
		if(sel == 1)
		{
			b[hm].Make();
			hm++;
		}
		if(sel == 2)
		{
			cout << "Input id that you want to find:";
			cin >> aid;
			for(i = 0;i < hm;i++)
			{
				if(aid == b[i].CheckID())
					b[i].IPMoney();
				else
					l++;
			}
			if(l == hm)
				cout << "ERROR!"<<endl;
			l = 0;
		}
		if(sel == 3)
		{
			cout << "Input id that you want to find:";
			cin >> aid;
			for(i = 0;i < hm;i++)
			{
				if(aid == b[i].CheckID())
					b[i].OPMoney();
				else
				{
					l++;
				}
			}
			if(l == hm)
				cout << "ERROR!"<<endl;
			l = 0;
		}
		if(sel == 4)
		{
			cout << "Input id that you want to find:";
			cin >> aid;
			for(i = 0;i < hm;i++)
			{
				if(aid == b[i].CheckID())
					b[i].OutPut();
				else
				{
					l++;
				}
			}
			if(l == hm)
				cout << "ERROR!"<<endl;
			l = 0;
		}
		if(sel == 5)
			system("cls");
		if(sel > 5 || sel <1)
		{
			system("cls");
			cout <<"이용해주셔서감사합니다!" << endl;
			break;
		}
		l = 0;
	}
	hm = 0;
}
*/