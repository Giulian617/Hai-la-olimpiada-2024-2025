// Ilie Dumitru
#include<iostream>
#include<vector>

int N;
std::vector<int> v;

int main()
{
	int i, j, minPos;

	std::cin>>N;
	v.resize(N+1);

	for(i=1;i<=N;++i)
		std::cin>>v[i];

	for(i=1;i<=N;++i)
	{
		minPos=i;
		for(j=i+1;j<=N;++j)
		{
			if(v[j]%10<v[minPos]%10) // v[j] trebuie pus mai inainte de v[minPos]
			{
				minPos=j;
			}
		}
		std::swap(v[i], v[minPos]);
	}

	for(i=1;i<=N;++i)
		std::cout<<v[i]<<' ';

	return 0;
}
