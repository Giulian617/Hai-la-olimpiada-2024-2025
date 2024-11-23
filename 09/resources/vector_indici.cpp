// Ilie Dumitru
#include<iostream>
#include<vector>

int N;
std::vector<int> v, idx;

int main()
{
	int i, k;
	bool schimb=true;

	std::cin>>N;
	v.resize(N+1);
	idx.resize(N+1);

	for(i=1;i<=N;++i)
	{
		std::cin>>v[i];
		idx[i]=i;
	}

	for(k=1;k<=N && schimb;++k)
	{
		schimb=false;
		for(i=1;i<=N-k;++i)
		{
			if(v[idx[i]]>v[idx[i+1]]) // Daca sunt in ordinea inversa.
			{
				std::swap(idx[i], idx[i+1]);

				// Optimizare mica, spune sa se opreasca odata ce vectorul e sortat
				schimb=true;
			}
		}
	}

	for(i=1;i<=N;++i)
		std::cout<<v[idx[i]]<<' ';

	return 0;
}
