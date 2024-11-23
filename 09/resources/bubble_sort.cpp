// Ilie Dumitru
#include<iostream>
#include<vector>

int N;
std::vector<int> v;

int main()
{
	int i, k;
	int inversiuni=0;
	bool schimb=true;

	std::cin>>N;
	v.resize(N+1);

	for(i=1;i<=N;++i)
		std::cin>>v[i];

	for(k=1;k<=N && schimb;++k)
	{
		schimb=false;
		for(i=1;i<=N-k;++i)
		{
			if(v[i]%10>v[i+1]%10) // Daca sunt in ordinea inversa. Daca vrem alta ordine doar modificam aici
			{
				std::swap(v[i], v[i+1]);

				// Optimizare mica, spune sa se opreasca odata ce vectorul e sortat
				schimb=true;

				// Asta e o metoda de a calcula inversiunile
				++inversiuni;
			}
		}
	}

	for(i=1;i<=N;++i)
		std::cout<<v[i]<<' ';

	return 0;
}
