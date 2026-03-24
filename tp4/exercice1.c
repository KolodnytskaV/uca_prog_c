#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    int i;
    printf("Valeur de argc: %d\n", argc);
    for (i=0; i<argc; i++)
    {
        printf("Argu. n° %d: %s (%lu)\n", i, argv[i], strlen(argv[i]));
    }
    return 0;
}

