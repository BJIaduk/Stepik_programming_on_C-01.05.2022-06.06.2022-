/*
Простое число -- это число, большее единицы, которое делится только на 1 и на само себя. 

Напишите функцию is_prime, которая проверяет число на простоту и возвращает 1 если число простое и 0 в противном случае.

Функция должна корректно работать для любых знаковых чисел; так как отрицательные числа меньше единицы, они все не простые.

Sample Input:

13
Sample Output:

1
*/

int is_prime(int x) {
    if (x>1) {
        for (int i = 2; i < x; i++) {
            if (x%i == 0)
                return 0;
        }
        return 1;
    }
    return 0;
}