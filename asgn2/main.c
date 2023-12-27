#include "myl.h"


int main(){
    int len;
    char str1[]="Testing printStr function, then a newline character";
    char newline[]="\n";
    printStr(str1);
    printStr(newline);


    printStr("Taking 2 numbers 6 and 1789 and testing printInt function");
    printStr(newline);
    int int_num1=6;
    int int_num2=1789;
    printStr("Integer : ");
    len=printInt(int_num1);
    printStr(" with length ");
    printInt(len);
    printStr(newline);
    printStr("Integer : ");
    len=printInt(int_num2);
    printStr(" with length ");
    printInt(len);
    printStr(newline);
    printStr(newline);

    printStr("Taking 2 numbers 5.07 and -1.230200 and testing printFlt function");
    printStr(newline);
    float float_num1=5.07;
    float float_num2=-1.230200;
    printStr("Floating point number : ");
    len=printFlt(float_num1);
    printStr(" with length ");
    printInt(len);
    printStr(newline);
    printStr("Floating point number : ");
    len=printFlt(float_num2);
    printStr(" with length ");
    printInt(len);
    printStr(newline);
    printStr(newline);

     char s[]="\nTesting readInt function\n";
     printStr(s);
    int int_read;
    printStr("Enter an integer : ");
    if(readInt(&int_read)){
        printInt(int_read);
        printStr(" read successfully!\n");
    }
    else{
        printStr("Reading int failed\n");
    }

    printStr("Enter another integer : ");
    if(readInt(&int_read)){
        printInt(int_read);
        printStr(" read successfully!\n");
    }
    else{
        printStr("Reading int failed\n");
    }

     char s1[]="\nTesting readFlt function\n";
     printStr(s1);
    float float_read;
    printStr("Enter a floating point number : ");
    if(readFlt(&float_read)){
        printFlt(float_read);
        printStr(" read successfully!\n");
    }
    else{
        printStr("Reading float failed\n");
    }

    printStr("Enter another floating point number : ");
    if(readFlt(&float_read)){
        printFlt(float_read);
        printStr(" read successfully!\n");
    }
    else{
        printStr("Reading float failed\n");
    }


}