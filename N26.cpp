#include <iostream>
using namespace std;

bool maiusc(char x)
{
	if((x>='A')&&(x<='Z'))
		return true;
	else
		return false;
}

bool min(char x)
{
	if(x>='a' && x<='z')
		return true;
	return false;
}

int main()
{
	char c;
	char tmp;
	bool ok=false;

	cin>>c;

	while(c!='*')
	{
		tmp=c;
		cin>>c;

		if(maiusc(tmp) && maiusc(c))
			ok=true;
		if(min(tmp) && min(c))
		{
			if(tmp==c)
				ok=true;
		}
	}

	if(ok==true)
		cout<<"SI";
	else
		cout<<"NO";


	return 0;
}
