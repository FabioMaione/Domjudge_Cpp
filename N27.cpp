#include<iostream>
using namespace std;

int main()
{
	 int n;
	bool consecutivi=false;
	cin>>n;
	 int a;
	cin>>a;
	int cont=0;
	if (n==0)
		consecutivi=true;
	else
	{
		while (a!=-1)
		{
			if (a<=n)
				cont++;
			else if (a>n && cont<n)
				cont=0;
			cin>>a;
		}
		if (cont>=n)
			consecutivi=true;
		else
			consecutivi=false;
	}
	if (consecutivi==true)
		cout<<"OK";
	else
		cout<<"NO";
return 0;
}
