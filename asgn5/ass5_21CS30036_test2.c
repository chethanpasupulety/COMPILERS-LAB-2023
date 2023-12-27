// Function call
// Conditional statements


int findSum(int x, int y)
{
    int z = x + y;
    return z;
}

void printArray(int a[], int n)
{
    for(int i = 0; i < n; i++)
    printf("%d ", a[i]);
    printf("\n");
}

int findMinArray(int a[], int n)
{
    int minelem = 1000000;
    for(int i = 0; i < n; i++)
    {
        if(a[i] < minelem)
        minelem = a[i];
    }
    return minelem;
}


int main()
{
    int a[3];
    a[0] = 5, a[1] = 7;
    a[2] = findSum(a[0], a[1]);
    printArray(a, 3);
    findMinArray(a, 3);
    printf("%d\n", findMin3(a[0], a[1], a[2]));
    return 0;
}