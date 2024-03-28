/*
A variable is the name of the memory location. It is used to store information. Its value can be altered and reused several times. It is a way to represent memory location through symbols so that it can be easily identified.
More Details: https://www.javatpoint.com/variables-in-c
*/

#include<stdio.h>
#include<string.h>

int main(){
    int a = 12;
    float b=1.25;
    char S[]= "Hello";
    printf(" (int) integer %d;\n ", a);
    printf(" (float) floting point %.2f;\n", b);
    printf("(char)character/String value %s\n", S);
    
    return 0;
}