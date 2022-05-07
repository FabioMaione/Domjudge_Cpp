#include <iostream>
#include <cmath>
using namespace std;


bool primo(int n)
{
	bool trovato=false;

	if(n==1)
		return false;
	else if(n==2)
		return true;
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
				return true;
			else
				return false;
		}
		else
			return false;
	}
}

bool gemelli(int a, int b)
{
	if(fabs(a-b)==2)
		return true;
	else
		return false;
}

int main()
{
	int x, y;
	cin>>x>>y;

	if((primo(x) && !primo(y)) || (!primo(x) && primo(y)) || (!primo(x) && !primo(y)))
		cout<<"non entrambi primi";
	else if(primo(x) && primo(y))
	{
		if(gemelli(x, y))
			cout<<"gemelli";
		else
			cout<<"non gemelli";
	}

	return 0;
}
