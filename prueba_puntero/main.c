#include <stdio.h>
#include <stdlib.h>

void func (char *, char);

int main()
{
    char *letra1='A';
    char letra2='B';
    func(&letra1,letra2);
    printf("letras: %c y %c", letra1, letra2);
    return 0;
}

void func (char *p, char q)
{
    *p='D';
    q='C';
}
