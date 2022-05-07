#include <iostream>
using namespace std;

bool vocale(char t)
{
	if(t=='a' || t=='e' || t=='i' || t=='o' || t=='u')
		return true;
	return false;
}


int main()
{
	char x;
	cin>>x;
	bool trovata=false;

	while(x!='*')
	{
		if(vocale(x))
			trovata=true;
		cin>>x;
	}

	if(trovata==true)
		cout<<"ALMENO 1 VOCALE";
	else
		cout<<"NESSUNA VOCALE";


	return 0;
}
