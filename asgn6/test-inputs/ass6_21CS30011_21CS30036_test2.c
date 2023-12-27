int printStr (char *ch);
int printInt (int n);
int readInt (int *eP);

int sum(int n) {
    if (n != 0){
    	return n + sum(n-1); 
    } 
    return n;
}

int main() {

    int result;

    printStr("This test takes in a positive integer X and calculates the sum of the consecutive positive integers till X\nEnter a positive integer: ");
    readInt(&result);

    result = sum(result);

    printStr("Sum = ");
    printInt(result);
    return 0;
}
