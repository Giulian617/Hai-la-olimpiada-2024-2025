// Ilie Dumitru
#include<iostream>
#include<vector>

int N;
std::vector<int> v, cnt;

int main()
{
	int i, j;

	std::cin>>N;
	v.resize(N+1);
	cnt.resize(4); // Daca presupunem ca avem doar valori in intervalul [0, 3]
	for(i=1;i<=N;++i)
		std::cin>>v[i];

	for(i=1;i<=N;++i)
		++cnt[v[i]];

	j=0;
	for(i=1;i<=N;++i)
	{
		while(cnt[j]==0)
			++j;

		v[i]=j;
		--cnt[j];
	}

	for(i=1;i<=N;++i)
		std::cout<<v[i]<<' ';

	return 0;
}
