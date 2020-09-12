#include<iostream>
using namespace std;

void passByValue(int x,int y)
{
	int z = x;
	x=y;
	y=z;
}
void passByRefrence(int &x,int &y)
{
	int z=x;
	x=y;
	y=z;
}
void passByAddress(int *x,int *y)
{
	int z = *x;
	*x = *y;
	*y = z;
}

int main()
{
	int a=5,b=6;
	cout << "before swapping " << endl << "a: " << a << endl << "b: " << b << endl << endl;
	// call function
	passByAddress(&a,&b);
	
	cout <<"After swapping " << endl <<"a: " << a << endl <<"b: " << b <<endl <<endl;
	return 0;
}
