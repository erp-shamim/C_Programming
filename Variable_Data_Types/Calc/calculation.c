#include<stdio.h>
#include<math.h>

int main(){
    int a, b;
    printf("Input a:");
    scanf("%d", &a);

    printf("Input b:");
    scanf("%d", &b);
    // add two intiger values
    int result = a+b;
    printf("Answer Addition is = %d", result);
    
    // sub two intiger values
    int result1 = a-b;
    printf("\nAnswer Subtraction is = %d", result1);

    // multiply two intiger values
    int result2 = a*b;
    printf("\nAnswer Multiplied is = %d", result2);

    // Division two intiger values
    int result3 = a/b;
    printf("\nAnswer Divided is = %d", result3);

    return 0;

}