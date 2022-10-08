/*
Теперь нужно научиться добавлять элементы в список. 
Сначала будем добавлять элемент к началу списка, это проще и быстрее.

struct list {
   int64_t value;
   struct list* next;
};


// список
struct list* mylist = ... ;
Вспомним, что список задаётся указателем на его первый элемент. 
Чтобы добавить элемент в начало списка, нужно:

создать новый элемент;
прицепить старый список к нему;
перенаправить указатель на первый элемент так, чтобы он указывал на новое начало списка.
Чтобы иметь возможность изменить указатель на первый элемент, 
мы должны передать в функцию его (указателя) адрес, то есть указатель на указатель 
на первый элемент списка.

Определите функцию, которая добавит один элемент в начало списка.
*/

// Вам доступна функция
struct list* node_create( int64_t value );

void list_add_front( struct list** old, int64_t value ) {
    struct list* new = node_create( value );
    new->next = *old;
    *old = new;
}