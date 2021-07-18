#include <stdio.h>

int main()
{
    char op;
    float num1,num2;
    printf("Selectionner un opérateur (* + - /):");
    scanf("%c",&op);
    printf("Taper vos 2 nombre:");
    scanf("%f %f",&num1,&num2);
    switch(op){
        case '*':
        printf("Result : %f\n",num1 * num2);
        break;
        case '+':
        printf("Result : %f\n",num1 + num2);
        break;
        case '-':
        printf("Result : %f\n",num1 - num2);
        break;
        case '/':
        printf("Result : %f\n", num1 / num2);
    };

    return 0;
}
