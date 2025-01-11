Probleme si un pic despre combinatorica

Permutari, Aranjamente, Combinari


https://www.pbinfo.ro/probleme/1091/expozitie
Implementare Invers modular:
unsigned long long xlan(int x,int n)
{
    if(n==0)return 1;
    else
    {
        unsigned long long p=xlan(x,n/2);
        if(n%2==0)p=p*p%mod;
        else p=p*p*x%mod;
        return p;
    }
}
https://www.pbinfo.ro/probleme/1110/spion1
https://www.pbinfo.ro/probleme/2000/sir9

Problema:
Avem 23 de cifre de 0 si 7 cifre de 1. In cate moduri le puntem aseza astfel incat sa nu avem 2 cifre de 1 una langa alta?

https://www.pbinfo.ro/probleme/3718/tort2
