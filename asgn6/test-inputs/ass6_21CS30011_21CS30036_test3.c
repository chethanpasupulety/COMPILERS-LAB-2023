int printStr (char *ch);
int printInt (int n);
int readInt (int *n);

int main()
{
    int x, y, temp;

    printStr("This test takes in 2 integers X and Y and Outputs the sum - X+Y\nEnter integer x : ");
    readInt(&x);
    // printInt(x);
    printStr("\nEnter integer y : ");
    readInt(&y);

    temp = x + y;
    printStr("x + y = ");
    printInt(temp);
    
    printStr("\n");


    return 0;
}
