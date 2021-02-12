#include "DoubleLinkedList.h"
#include "List.h"
#include <iostream>

int main()
{
  /*DoubleLinkedList list;   // Создание пустого списка

  list.insertHead(2);      // Добавление элементов
  list.insertHead(3);
  list.insertHead(1);
  list.insertTail(4);
  list.outAll();           // Печать элементов

  std::cout << ((list.searchItem(1)) ? "1 find" : "1 not find") << std::endl;
  std::cout << ((list.searchItem(8)) ? "8 find" : "8 not find") << std::endl;

  DoubleLinkedList  list1; // (list);  // Копирование списка
  list1.insertHead(4);         // Добавление элемента
  list1.insertHead(5);         // Добавление элемента
  list1.deleteHead();          // Удаление головного
  list1.outAll();
  list1.insertHead(6);
  list1.deleteHead();
  list1.outAll();        // Печать результата
*/

  {//single linked list
    List list1;
    list1 += 10;
    list1 += 34;
    list1 += 204;
    List list2;
    list2 += 34;
    list2 += 10;
    list2 += 204;
    std::cout << "List 1: " << list1 << std::endl;
    std::cout << "List 2: " << list2 << std::endl;
    if (list1 == list2)
      std::cout << "list1 = list2" << std::endl;
    else
      std::cout << "list1 != list2" << std::endl;
    List list3(list1 & list2);
    std::cout << "operator &        " << list3 << std::endl;
    List list5;
    list5 += 10;
    list5 += 12;
    list5 += 198;
    list5 += 204;
    list5 += 103;
    std::cout << "List5: " << list5 << std::endl;
    List list4(list2 | list5);
    if (list1 == list5)
      std::cout << "list1 = list5" << std::endl;
    else
      std::cout << "list1 != list5" << std::endl;
    std::cout << "operator |        " << list4 << std::endl;
    List list6;
    list6.merge(list1);
    std::cout << "method merge: " << list6 << std::endl;
  }
  std::cout << std::endl << "test DoubleLinkedList: " << std::endl;
  {//double linked list
    DoubleLinkedList list1;
    list1 += 10;
    list1 += 34;
    list1 += 204;
    DoubleLinkedList list2;
    list2 += 34;
    list2 += 10;
    list2 += 204;
    std::cout << "List 1: " << list1 << std::endl;
    std::cout << "List 2: " << list2 << std::endl;
    if (list1 == list2)
        std::cout << "list1 = list2" << std::endl;
    else
        std::cout << "list1 != list2" << std::endl;
    DoubleLinkedList list3(list1 & list2);
    std::cout << "operator &        " << list3 << std::endl;
    DoubleLinkedList list5;
    list5 += 10;
    list5 += 12;
    list5 += 198;
    list5 += 204;
    list5 += 103;
    std::cout << "List5: " << list5 << std::endl;
     DoubleLinkedList list4(list2 | list5);
    if (list1 == list5)
        std::cout << "list1 = list5" << std::endl;
    else
        std::cout << "list1 != list5" << std::endl;
    std::cout << "operator |        " << list4 << std::endl;
    DoubleLinkedList list6;
    list6.merge(list1);
    std::cout << "method merge: " << list6 << std::endl;
  }
  return 0;
}