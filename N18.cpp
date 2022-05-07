#include <iostream>
using namespace std;

int main()
{
	char x;
	bool end=false;
	int cont=0;

	while (end==false)
	{
		cin>>x;
		cont++;
		if (x=='o')
		{
			cin>>x;
			if (x=='k')
			{
				cont--;
				end=true;
			}
			else
				cont++;
		}
	}
cout<<cont;

return 0;
}
