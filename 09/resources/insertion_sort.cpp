// Ilie Dumitru
#include<iostream>
#include<vector>

int N;
std::vector<int> v;

int main()
{
	int i, j, pivot;
	int inversiuni=0;

	std::cin>>N;
	v.resize(N+1);

	for(i=1;i<=N;++i)
		std::cin>>v[i];

	for(i=2;i<=N;++i)
	{
		pivot=v[i];
		for(j=i;j>1 && v[j-1]%10>pivot%10;--j) // v[j-1]>pivot ar trebui citit drept "pivotul trebuie pus inaintea lui v[j-1]"
		{
			v[j]=v[j-1];

			// Asta e o metoda de a calcula inversiunile
			++inversiuni;
		}
		v[j]=pivot;
	}

	for(i=1;i<=N;++i)
		std::cout<<v[i]<<' ';

	return 0;
}
