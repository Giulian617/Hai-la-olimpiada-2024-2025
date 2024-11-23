// Ilie Dumitru
#include<iostream>
#include<vector>
#include<algorithm>

int N;
std::vector<int> v;

// return true atunci cand x este "mai mic" decat y (x trebuie pus inaintea lui y)
bool compara_ultima_cifra(int x, int y)
{
	if(x%10<y%10)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int i;

	std::cin>>N;
	v.resize(N+1);

	for(i=1;i<=N;++i)
		std::cin>>v[i];

	std::sort(v.begin()+1, v.begin()+N+1);
	// std::sort(v+1, v+N+1); // vector declarat static
	// Sau se poate
	// std::sort(v.begin()+1, v.end());

	// Criteriu de sortare ales de noi
	// std::sort(v.begin()+1, v.begin()+N+1, compara_ultima_cifra);
	// std::sort(v+1, v+N+1, compara_ultima_cifra); // vector declarat static

	// Pentru indexare de la 0 nu mai adaugati 1 nici in primul, nici in al doilea

	for(i=1;i<=N;++i)
		std::cout<<v[i]<<' ';

	return 0;
}
