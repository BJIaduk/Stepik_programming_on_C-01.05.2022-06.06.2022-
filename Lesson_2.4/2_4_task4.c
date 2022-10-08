/*
Теперь определим функцию list_destroy, которая освободит всю память, выделенную под элементы списка. 

Вот пример неправильной реализации list_destroy. Почему?

void list_destroy( struct list* list ) {
   while (list) {
      free( list );
      list = list -> next; 
   }
}
Проблема в том, что мы освобождаем память под элемент списка, а затем к ней обращаемся в выражении list->next. Стандарт языка напрямую запрещает обращаться к освобождённой памяти.

В самом деле, даже на практике мы можем представить ситуацию, когда между освобождением памяти и обращением к ней происходило выделение памяти в куче. Тогда память по адресу list может принадлежать уже другому блоку памяти и иметь другие значения.

Sample Input:

5 4 3 2 1

Sample Output:

5 4 3 2 1 
*/

void list_destroy( struct list* list ) {
    while (list) {
      struct list* a = list->next;
      free( list );
      list = a; 
   }
}
