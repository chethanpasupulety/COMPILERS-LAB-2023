// multi-dimensional arrays
// loops and nested lopps

int a[5][5];
int checkPrime(int n)
{
    int i = 2;
    while(i*i <= n)
    {
        if(n%i == 0)
        return 0;
        i++;
    }
    return 1;
}

void build2darray()
{
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        a[i][j] = 1;
    }
}

int main()
{
    build2darray();
    // printing primes till 100

    int n = 2;
    do
    {
        if(checkPrime(n))
        printf("%d\n", n);
        n++;
    }
    while(n <= 100);
}