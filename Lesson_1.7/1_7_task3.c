/*
Задача факторизации (разложения числа на множители) имеет важное применение в криптографии. Сейчас не существует эффективного алгоритма, который бы разложил большое число порядка 102000​ на множители за разумное время. В криптосистеме RSA чтобы взломать шифр злоумышленнику необходимо разложить большое число на два множителя. При этом известно, что данное число является произведением двух простых чисел.

Числа, которые умещаются в диапазон представления типа int, гораздо меньше, почти всегда меньше 1055​​, поэтому мы можем и располагая достаточно небольшими вычислительными ресурсами наивно разложить число на произведение двух других чисел.

Заполните тело функции, которая принимает число n​​ и с помощью указателей заполняет два числа a​​ и b​​ так, что:

Если n=1n=1 или  nn простое, то положим a = 1, b = na=1,b=n. 
Если nn составное, то:
  

{ 
ab=n
1<a≤b
​
 
​​  и a наименьший делитель n, больший единицы.

Гарантируется, что n>0​​.
 

 

Если ваше решение делает слишком много лишних действий, то оно не пройдёт  проверку по времени в тесте №7. Но это не алгоритмическая задача, никаких особых оптимизаций тут делать не нужно. Для решения достаточно проверить делители в цикле от 2 до \frac{n}{2} 
2
n
​
 . 

Sample Input:

20
Sample Output:

2 10
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

void factorize( int n, int* a, int* b )
{
    if ( (n == 1) || is_prime(n)) {
        *a = 1;
        *b = n;
    }
    else 
        for (int i = 2; i <= n/2; i++) {
            if (n%i == 0) {
                *a = i;
                *b = n/(*a);
                break;
            }
        }
}
