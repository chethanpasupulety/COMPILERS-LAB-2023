// pointers & type-casting

int linearSearch(int *arr, int n, int key)
{   
    int ind = -1;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key){
            ind = i;
            break;
        }
    }
    return ind;
}

int main()
{
    float f = 2.3;
    
    int arr[] = {1, 2, 3, 4, 5};
    printf("%d", linearSearch(arr, 5, 3));
    return 0;
}