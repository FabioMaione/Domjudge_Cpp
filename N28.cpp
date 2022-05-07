#include <iostream>
using namespace std;


int main()
{
	char x;
	char tmp;
	bool ok=false;

	cin>>x;

	while(x!='*')
	{
		tmp=x;
		cin>>x;

		if(tmp==x)
			ok=true;
	}

	if(ok==true)
		cout<<"SI";
	else
		cout<<"NO";

	return 0;
}
