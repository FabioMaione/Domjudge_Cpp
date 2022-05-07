#include <iostream>
using namespace std;

int main()
{
	bool ok=false;
	char x;
	cin>>x;

	while(x!='*')
	{
		if(x>='0' && x<='9')
			ok=true;
		cin>>x;
	}

	if(ok==true)
		cout<<"ALMENO UNA";
	else
		cout<<"NESSUNA";

	return 0;
}
