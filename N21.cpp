#include <iostream>
using namespace std;

bool lettera(char t)
{
	if((t>='a' && t<='z') || (t>='A' && t<='Z'))
		return true;
	return false;
}


int main()
{
	char x;
	cin>>x;
	bool trovato=false;

	while(x!='.')
	{
		if(lettera(x))
			trovato=true;
		cin>>x;
	}

	if(trovato==true)
		cout<<"NO";
	else
		cout<<"SI";


	return 0;
}
