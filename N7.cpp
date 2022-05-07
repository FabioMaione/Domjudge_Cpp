#include <iostream>
using namespace std;

int main()
{
	int n;
	bool trovato=false;
	cin>>n;

	while(n!=5)
	{
		if(n%5==0)
			trovato=true;
		cin>>n;
	}
	if(trovato==true)
		cout<<"ALMENO 1";
	else
		cout<<"NESSUNO";

	return 0;
}
