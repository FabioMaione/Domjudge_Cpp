#include <iostream>
using namespace std;

int main()
{
	char x;
	bool ok=false;

	cin>>x;

	while(x!='.')
	{
		if((x>='a' && x<='z') || (x>='A' && x<='Z'))
			ok=true;
		cin>>x;
	}

	if(ok==true)
		cout<<"SI";
	else
		cout<<"NO";

	return 0;
}
