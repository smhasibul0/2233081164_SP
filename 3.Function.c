#include <stdio.h>

void call_by_value (int a)
{

    printf("Inside call_by_value a = %d before adding \n", a);

    a += 10;

    printf("Inside call_by_value a = %d after adding \n", a);

}

void call_by_ref (int *a)
{

    printf("Inside call_by_ref a = %d before adding \n", *a);

    *a += 10;

    printf("Inside call_by_ref a = %d after adding \n", *a);

}

int factorial (int i)

{

    if(i <= 1){
        return 1;
    }

    return i * factorial(i - 1);
}

int main()
{

    int a=10;

    printf("a = %d before function call_by_value.\n", a);

    call_by_value (a);

    printf("a = %d after function call_by_value.\n", a);

    printf("a = %d before function call_by_ref.\n", a);

    call_by_ref (&a);

    printf("a = %d after function call_by_ref.\n", a);

    int i;

    printf("Enter a number to get its factorial:");

    scanf("%d", &i);

    printf("Factorial of %d is: %d\n", i, factorial(i));

    return 0;

}