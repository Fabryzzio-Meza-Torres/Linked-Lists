#include <iostream>
#include "forward_list.h"
#include "Doubly_Linked_List.h"

int main()
{
    // FowardList:
    cout << "FowardList tests:" << endl;
    ForwardList<int> Listagod;
    Listagod.push_front(7);
    Listagod.push_front(1);
    Listagod.push_front(3);
    Listagod.push_front(6);
    Listagod.push_front(4);
    Listagod.push_front(5);
    Listagod.print();

    Listagod.front();
    Listagod.back();
    Listagod.push_back(12);
    Listagod.push_back(2);
    Listagod.push_back(8);
    Listagod.pop_back();
    Listagod.pop_front();
    Listagod.print();

    Listagod[3];
    Listagod.empty();
    Listagod.size();
    Listagod.sort();
    Listagod.print();

    Listagod.reverse();
    Listagod.print();
    Listagod.clear();
    Listagod.print();
    cout << endl;

    // Doubly Linked List
    cout << "Doubly Linked List tests:" << endl;
    DoublyLinkedList<int> prueba;
    prueba.push_front(5);
    prueba.push_front(7);
    prueba.push_front(16);
    prueba.push_back(17);
    prueba.print();

    cout << prueba.front() << endl;
    cout << prueba.back() << endl;
    prueba.pop_back();
    prueba.print();
    prueba.pop_front();
    prueba.print();

    prueba.insert(2, 1);
    prueba.print();
    prueba.remove(1);
    prueba.print();
    cout << prueba[1] << endl;
    cout << prueba.empty() << endl;
    cout << prueba.size() << endl;
    prueba.reverse();
    prueba.print();

    prueba.clear();
    prueba.print();
}
