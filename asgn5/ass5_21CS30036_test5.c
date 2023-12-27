// recursive functions & nested if-else

int findMin3(int a, int b, int c)
{
    if(a > b)
    {
        if(b > c)
        return c;
        else
        return b;
    }
    else
    {
        if(a < c)
        return a;
        else
        return c;
    }
    return -1;
}

int fibonacci(int n)
{
    if(n <= 1)
    return n;
    return fibonacci(n-1) + fibonacci(n-2);
}


int main()
{
    int a = 5, b = 6, c = 3;
    printf("%d\n", findMin3(a, b, c));
    printf("%d\n", fibonacci(5));
    return 0;
}