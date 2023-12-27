// Function declarations
int printStr(char *s);
int readInt(int *eP);
int printInt(int n);

// Global variables
int f = 1;
int F = 1;

// Fibonacci number calculation function
int fibNum(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibNum(n - 1) + fibNum(n - 2);
    }
}

// Main function
int main() {
    // Variable declarations
    int n;
    int output;

    // Prompt user for input
    printStr("This test calculates the n'th Fibonacci number using Recursive functions\nEnter the value of n: ");
    
    // Read integer input from user and store it in 'start' variable
    readInt(&n);
    
    // Calculate Fibonacci number for the given input
    output = fibNum(n);

    // Print the calculated Fibonacci number
    printInt(output);

    // Return 0 to indicate successful execution
    return 0;
}
