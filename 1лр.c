#include <stdio.h>
int main()
{
    int a;
    char b[1000];//объявление строки размером 1000 символов
    scanf ("%d %s", &a, b);//ввод с консоли с указателем адреса ячейки памяти
    //в котором хранится значение переменной a ,b
    printf ("%d %s", a, b);//вывод строки на консоль
}