#include <iostream>
using namespace std;

bool voc(char x)
{
	if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u')
		return true;
	return false;
}



int main()
{
	char s;
	cin>>s;

	int cont=0;
	char tmp;

	while(s!='.')
	{
		tmp=s;
		cin>>s;
		if((voc(s) && voc(tmp)) || (!voc(s) && (!voc(tmp))) || (tmp=='.') || (s=='.'))
		cont++;
	}


	cout<<cont;

	return 0;
}
