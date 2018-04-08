#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    c='\0';
    printf("Para salir ingrese A: ");
    while(c!='A')
        c=getchar();
    return c;
}
