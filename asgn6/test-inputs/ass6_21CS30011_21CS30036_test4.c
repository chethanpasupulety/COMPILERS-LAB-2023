int printStr (char *ch);
int printInt (int n);
int readInt (int *n);

// function to see whether there exists 2 integers in array with sum = X
int isPossible(int arr[],int x)
{
    int i = 0, j = 4;
    while(i < j)
    {
        if(arr[i]+arr[j] < x)
        i++;
        else if(arr[i] + arr[j] > x)
        j--;
        else
        return 1; // arr[i]+arr[j] = x
    }
    return 0;
}

int main()
{
    

    int arr[5];
    arr[0] = 2; 
    arr[1] = 3;
    arr[2] = 6;
    arr[3] = 10;
    arr[4] = 11;


    printStr("This implements a function to check if there is a sum of 2 integers in an array with sum=x\n The array elements are hardcoded as following 2,3,6,10,11\n");
    // printSTr("The array elements are hardcoded as following 2,3,6,10,11\n");

    int x, temp;
    printStr("Enter x : ");
    readInt(&x);

    // x = printInt(&temp);

    if(isPossible(arr,x))
    printStr("Yes the sum exists");
    else
    printStr("No the sum doesn't exist");
    
    return 0;
}