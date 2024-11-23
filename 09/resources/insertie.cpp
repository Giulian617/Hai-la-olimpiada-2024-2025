// Ilie Dumitru
#include<iostream>
#include<vector>

int N;
std::vector<int> v;

int main()
{
	int i, x;

	std::cin>>N;
	v.resize(N+2);

	for(i=1;i<=N;++i)
		std::cin>>v[i];

	std::cin>>x;

	for(i=N+1;i>1 && v[i-1]>x;--i) // v[i-1]>x ar trebui citit drept "x trebuie pus inaintea lui v[i-1]"
		v[i]=v[i-1];
	v[i]=x;
	++N;

	for(i=1;i<=N;++i)
		std::cout<<v[i]<<' ';

	return 0;
}
