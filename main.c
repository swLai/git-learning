#include <stdio.h>

void hello_world(void)
{
    printf("Hello world!\n");
}

void greet(const char* const name)
{
    printf("Hello, %s!\n", name);
}

int main(int argc, char* argv[])
{
    hello_world();
    greet(argv[1]);
    return 0;
}
