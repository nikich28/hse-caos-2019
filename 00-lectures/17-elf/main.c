/*
Модельный пример для демонстрации как статической, так и динамической компоновки
 */

#include <stdio.h>

// эти переменные будут использоваться во внешней функции func
int A, B, C;

// внешнаяя функция, она будет линковаться как статически, так и динамически (см. Makefile)
void func(void);

int main()
{
    scanf("%d%d", &A, &B);
    func();
    func();
    printf("%d\n", C);
}