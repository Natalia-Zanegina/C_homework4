/*Задача3. Все цифры четные 
Ввести целое число и определить, верно ли, что все его цифры четные 
Данные на входе: Одно целое число 
Данные на выходе: YES или NO 

Пример №1 Данные на входе: 2684 Данные на выходе: YES 
Пример №2 Данные на входе: 2994 Данные на выходе: NO*/

#include <stdio.h>

int main(void) {
    int num;
    scanf("%d", &num);

    while (num > 0) 
    {
        if (num % 2 == 1)
        {
            printf("NO\n");
            return 0;
        }
        num /= 10;
    }
    printf("YES\n");
    return 0;
}