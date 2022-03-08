#include <stdio.h>


// void returns nothing (void) -> get nothing
// this function has only side effects

//in order to use the meow function we need to create a pointer here. Because the function is delcared before it will be used.
void meow(int n);

int main(void)
{
    meow(3);
}

void meow(int n)
{
    for(int i = 0; i < n; i++)
        {
            printf("meow\n");
        }
}