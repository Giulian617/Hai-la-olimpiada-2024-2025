// Ilie Dumitru
#include<iostream>
#include<vector>

int N;
std::vector<int> nr_div;

int main()
{
	int i, j;

	std::cin>>N;
	nr_div.resize(N+1);

	for(i=1;i<=N;++i)
		for(j=i;j<=N;j+=i)
			++nr_div[j];

	for(i=1;i<=N;++i)
		std::cout<<i<<" are "<<nr_div[i]<<" divizori\n";

	return 0;
}
