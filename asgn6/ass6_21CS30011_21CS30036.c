#include "myl.h"
#define BUFF 22


int printStr(char *c)
{
    int length = 0;
    while (c[length] != '\0')
    {
        length++;
    }
    

    // extra byte for printing the null character
    int bytes = length + 1;

    __asm__ __volatile__(
        "movl $1, %%eax \n\t"       // sets the value 1 (syscall number for "write") into the EAX register.    
        "movq $1, %%rdi \n\t"       // stdout file no 1 passed to rdi
        "syscall \n\t"              // syscall
        :
        : "S"(c), "d"(bytes)        // char array pointed by c to be printed with the given bytes

    );

    return length;
}

int printInt(int n)
{
    // result stores the number n as string
    char result[BUFF];

    int isNegative = 0;
    int length = 0;

    if (n == 0)
    {
        result[length++] = '0';
    }

    else
    {
        if (n < 0)
        {
            isNegative = 1;
            n = -n;
        }
        // Convert number to character array in reverse order
        while (n)
        {
            result[length++] = (n % 10) + '0';
            n /= 10;
        }

        // Add negative sign if necessary
        if (isNegative)
        {
            result[length++] = '-';
        }

        // Add null-terminator
        result[length] = '\0';

        // Reverse the character array to get the correct order
        int start = 0;
        int end = length - 1;
        while (start < end)
        {
            char temp = result[start];
            result[start] = result[end];
            result[end] = temp;
            start++;
            end--;
        }
    }

    //if the num is negative removing the contribution of - from length
    if (isNegative)
        length--;

    //extra byte for null character
    int bytes = length + 1;

    __asm__ __volatile__(
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :
        : "S"(result), "d"(bytes)

    );

    return length;
}

int readInt(int *n) {
    int length, i = 0, sign = 1;
    long long ans = 0;
    char num[BUFF];
    num[0]='\0';

    // Take integer as input
    __asm__ __volatile__(
        "movl $0, %%eax \n\t"
        "movq $0, %%rdi \n\t"
        "syscall \n\t"
        : "=a"(length)
        : "S"(num), "d"(BUFF)
    );

    // if nothing is entered or a single character like -/+ which isnt a number is entered
    if (length <= 0 || (length == 2 && (num[0] < '0' || num[0] > '9'))) {
        return ERR;
    }

    // If num has - sign at first then it means integer is negative
    if (num[i] == '-') {
        i++;
        sign = -1;
    } else if (num[i] == '+') {
        i++;
    }

    // Calculate the value of the integer and return error if any character is not numeric 
    
    while (i < length && num[i]!='\n' ){
        if (num[i] < '0' || num[i] > '9') {
            return ERR;
        }
        ans=ans*10+(num[i]-'0');
        i++;
    }

    // making the pointer point to the reconstructed int
    *n = (int)(sign*ans);
    return OK;
}


int readFlt(float *f) {
    char num[BUFF];
    int len, i = 0, sign = 1;
    float ans = 0.0;
    num[0] = '\0';

    // Scan the float number
    __asm__ __volatile__(
        "movl $0, %%eax \n\t"
        "movq $0, %%rdi \n\t"
        "syscall \n\t"
        : "=a"(len)
        : "S"(num), "d"(BUFF)
    );

    // Check if input is valid
    if (len <= 0) {
        return ERR;  // No input
    }

    // Check for sign
    if (num[i] == '-') {
        sign = -1;
        i++;
    } else if (num[i] == '+') {
        i++;
    }

    // Parse the integer part
    while (i < len && num[i] != '.' && num[i] != '\n') {
        if (num[i] < '0' || num[i] > '9') {
            return ERR;  // Invalid character
        }
        ans = ans * 10 + (num[i] - '0');
        i++;
    }

    // Parse the decimal part
    if (i < len && num[i] == '.') {
        i++;
        float divisor = 10.0;
        while (i < len && num[i] != '\n') {
            if (num[i] < '0' || num[i] > '9') {
                return ERR;  // Invalid character
            }
            ans += (num[i] - '0') / divisor;
            divisor *= 10;
            i++;
        }
    }

    *f = (float)ans * sign;
    return OK;
}




int printFlt(float f) {
    char result[BUFF];
    
    int length = 0;

    // Handle negative numbers
    if (f < 0) {
        
        result[length++] = '-';
        f = -f;
    }

    int intPart = (int)f;
    float fracPart = f - intPart;

    // Convert integer part to string
    int intLength = 0;
    do {
        result[length++] = '0' + (intPart % 10);
        intPart /= 10;
        intLength++;
    } while (intPart > 0);

    // Reverse the integer part in the result
    for (int i = 0; i < intLength / 2; i++) {
        char temp = result[length - 1 - i];
        result[length - 1 - i] = result[length - intLength + i];
        result[length - intLength + i] = temp;
    }

    // Add decimal point
    result[length++] = '.';

    // Convert fractional part to string
    int fracLength = 0;
    if(fracPart==0) {
        while(fracLength<6){
            result[length++]='0';
            fracLength++;
        }
    }
    else {
    while (fracPart > 0 && fracLength < 6) {
        fracPart *= 10;
        result[length++] = '0' + (int)fracPart;
        fracPart -= (int)fracPart;
        fracLength++;
    }
    }

    // Add null-terminator
    result[length] = '\0';

    // Printing the string
    __asm__ __volatile__(
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :
        : "S"(result), "d"(length)
    );

    return length;
}