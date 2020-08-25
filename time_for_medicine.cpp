#include <iostream>
using namespace std;
int main()
{
	int y,m,d,t;
	char ch;

	cin>>t;
	while(t--)
	{
		cin >> y >> ch >>  m >> ch >> d;

		if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
		{
			cout<<(31-d)/2+1<<endl;
		}
		else if(m==4 || m==6 || m==9 || m==11)
		{
			cout<<(30-d+31)/2+1<<endl;
		}
		else if(m==2)
		{
			if((y%4==0 && y%100!=0)||y%400==0) //Leap Year
				cout<<(29-d)/2+1<<endl;
			else
				cout<<(28-d+31)/2+1<<endl;
		}
	}
	return 0;
}

