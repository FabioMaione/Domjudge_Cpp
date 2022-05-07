#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
/*
	if(n%2==0)
		cout<<"PARI";
	else
		cout<<"DISPARI";*/
	 n%2 == 0 ? cout << "PARI" : cout << "DISPARI";

	return 0;
}
