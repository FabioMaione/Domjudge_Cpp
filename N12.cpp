#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;

	bool trovato=false;
	bool primo=false;

	if(n==1)
		primo=false;
	else if(n==2)
		primo=true;
	else
	{
		int x=2;
		if(n%x!=0)
		{
			while(x<n)
			{
				x++;
				if(n%x==0 && x!=n)
					trovato=true;
			}
			if (trovato==false)
				primo=true;
			else
				primo=false;
		}
		else
			primo=false;
	}

	if(primo==true)
		cout<<"SI";
	else
		cout<<"NO";

	return 0;
}
