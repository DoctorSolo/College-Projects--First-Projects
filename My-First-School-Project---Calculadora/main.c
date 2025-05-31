#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cal{
char op;
double num[1];
};

int main()
{
    struct cal C;

    printf("Enter the first number: ");     scanf(" %lf",&C.num[0]);

    do{
        printf("Operation: ");                  scanf(" %c",&C.op);
            while(C.op != '+' && C.op != '-' && C.op != '='){
                    printf("Math error: ");
                    scanf(" %c",&C.op);
            }
        if (C.op == '='){
                break;
                    }
        printf("Enter the second number: ");    scanf(" %lf",&C.num[1]);

        if (C.op == '+'){
            C.num[0] = C.num[0] + C.num[1];
        }   else {
            C.num[0] = C.num[0] - C.num[1];
        }
        printf("Result: %lf \n",C.num[0]);
    }while (C.op != '=');

printf("Final result: %lf",C.num[0]);

    return 0;
}
