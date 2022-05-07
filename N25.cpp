#include <iostream>
#include <vector>
using namespace std;


int main()
{
	int n;
	int sum=0;
	vector<int> vet;

	bool fine=false;

	cin>>n;

	while(fine!=true)
	{
		if(n!=0)
		{
			sum+=n;
			cin>>n;
		}
		else if(n==0)
		{
			vet.push_back(sum);
			sum=0;
			cin>>n;
			if(n==0)
				fine=true;
		}
	}

	for(unsigned i=0; i< vet.size(); i++)
		cout<<vet[i]<<endl;


	return 0;
}
