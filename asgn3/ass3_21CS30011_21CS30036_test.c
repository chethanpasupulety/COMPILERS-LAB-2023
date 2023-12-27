/*
Compilers labaratory 
Assignment number: 3
Name : Chethan Krishna Venkat, Bannuru Rohit Kumar Reddy
Roll No. 21CS30036, 21CS30011
*/


#include <stdio.h>
#define ASSGN 3
struct student{
    int roll;
    char name[30];
};

void main()
{
    float f = .87e-03;
    int n = 32;
    double d = 25.;
    float t = 43.46;
    char ch = 'ascii';
    char buff[30] = "testing\n\t";
    char arr[4] = "";


    // This is a singleline comment

    /* This is a multi line comment */

    /*
    This is multi line comment
    which spans
    more than one line 
    and continues
    */


    switch (n)
    {
        case 5:
            printf("Hello");
            break;
        
        default:
            break;
    }


   do{
        printf("Infinite do while loop");
    }while(1);

    extern int d;
    static int x=5;
    long e=100;


       do{
        printf("Infinite do while loop");
    }while(1);


 
}