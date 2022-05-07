#include <iostream>
using namespace std;

bool nondec(int x)
{
	if(x<0 || x>9)
		return true;
	return false;
}

int main()
{
	int n;
	cin>>n;
	bool trovato=false;
	unsigned long int tmp=0;
	bool vuoto=false;

	if(n==-1)
		vuoto=true;

	while(n!=-1)
	{
		if(nondec(n))
			trovato=true;
		else
		{
			tmp=tmp*10+n;
		}
		cin>>n;
	}

	if(vuoto==true)
		cout<<"VUOTO";
	else
	{
		if(trovato==true)
			cout<<"ERRORE";
		else
		{
			cout<<tmp<<endl;
			if(tmp%3==0)
				cout<<"SI";
			else
				cout<<"NO";
		}
	}



	return 0;
}
