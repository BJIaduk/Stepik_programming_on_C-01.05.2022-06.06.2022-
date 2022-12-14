/*
Напишите функцию fizzbuzz, которая принимает один аргумент типа int и напечатает на экран в точности одну из следующих строчек:

fizz, если аргумент делится на 3
buzz, если аргумент делится на 5
fizzbuzz, если аргумент делится и на 3 и на 5
no, если аргумент меньше или равен нулю, вне зависимости от делимости.
Подсказка: чтобы проверить делимость числа. используйте операцию % (остаток от деления). 

Не нужно писать полную программу, если об этом явно не сказано в задании. Если требуется написать функцию, то нужно написать только её (и можно добавлять вспомогательные функции); также не подключайте заголовочные файлы, даже если вы уже знаете, что это такое.

Sample Input:

3


Sample Output:

fizz
*/ 


void fizzbuzz(int x) {
    if (x<=0)
        printf("no");
    else
        if (x%3==0 && x%5==0)
            printf("fizzbuzz");
        else
            if (x%3==0)
                printf("fizz");
            else 
                if (x%5==0)
                    printf("buzz");
}
