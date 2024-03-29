/*Задача5.Всесчастливыечисла 
Ввести натуральное число и напечатать все числа от 10 до введенного числа, у которых сумма цифр равна
произведению цифр 
Данные на входе: Одно натуральное число большее 10 
Данные на выходе: Числа, у которых сумма цифр равна произведению цифр через пробел в порядке возрастания, не
превосходящие введенное число. 

Пример №1 Данные на входе: 200 
Данные на выходе: 22 123 132 

Пример №2 Данные на входе: 1000 
Данные на выходе: 22 123 132 213 231 312 321

Пример №3 Данные на входе: 22 Данные на выходе: 22*/

#include <stdio.h>

int main(void) {
    int num;
    scanf("%d", &num);

    for (int i = 10; i <= num; i++)
    {
        int sum = 0, mult = 1, n = i;
        while (n > 0) 
        {
            sum += n % 10;
            mult *= n % 10;
            n /= 10;
        }
    
        if (sum == mult)
        {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;

}