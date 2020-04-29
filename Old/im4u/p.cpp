/*#include<iostream>
#include<cstring>
using namespace std;

namespace COMP_POS {
	enum { CLEAK, SENIOR, ASSIST, MANAGER };
}
class NameCard
{
public:
private:
	char *name;
	char *workplace;
	char *pnum;
	int len;
	int pos;
public:
	NameCard(char *mname,char *mworkplace,char *mpnum,int pos)
	{
		len = strlen(mname)+1;
		name = new char[len];
		strcpy(name,mname);
		len = strlen(mworkplace)+1;
		workplace = new char[len];
		strcpy(workplace,mworkplace);
		len = strlen(mpnum)+1;
		pnum = new char[len];
		strcpy(pnum,mpnum);
		this->pos = pos;
	}
	void ShowNameCardInfo()
	{
		cout << "이름:"<<name<<endl<<"회사:"<<workplace<<endl<<"전화번호:"<<pnum<<endl<<"직급:";
		if(pos == COMP_POS::CLEAK)
			cout <<"사원";
		if(pos == COMP_POS::SENIOR)
			cout <<"주임";
		if(pos == COMP_POS::ASSIST)
			cout <<"대리";
		if(pos == COMP_POS::MANAGER)
			cout <<"부장";
		cout << endl<<endl;
	}
	~NameCard()
	{
		cout<<"deleted!"<<endl;
		delete[] name;
		delete[] workplace;
		delete[] pnum;
	}
};
int main()
{
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLEAK);
	NameCard copy1 = manClerk;
	NameCard manSenior("Hong","OrangeEng","010-3333-4444", COMP_POS::SENIOR);
	NameCard copy2 = manSenior;
	copy1.ShowNameCardInfo();
	copy2.ShowNameCardInfo();
	cout<<"end of main!"<<endl;
	return 0;
}
*/