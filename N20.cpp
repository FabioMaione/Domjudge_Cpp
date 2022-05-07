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

	if(x=='.')
		cout<<"SI";
	else
	{
		while(x!='.')
		{
			if(!lettera(x))
				trovato=true;
			cin>>x;
		}

		if(trovato==false)
			cout<<"SI";
		else
			cout<<"NO";
	}


	return 0;
}
