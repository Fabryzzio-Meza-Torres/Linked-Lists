#include <iostream>
using namespace std;

template <class T>
struct Node
{
    Node *next;
    T data;
};

template <class T>
class List
{
    Node *head;
    Node *temp;

public:
    T front()
    { // Retorna el elemento al comienzo
        return head->data;
    }

    T back()
    { // Retorna el elemento al final
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        return temp->data;
    }
    void push_front(T value)
    { // Agrega un elemento al comienzo
        Node *new_Node = new Node;
        Node->data = value;
        new_Node->next = head;
        head = new_Node;
    }
    void push_back(T)
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
    }
    T pop_front();     // Remueve el elemento al comienzo
    T pop_back();      // Remueve el elemento al final
    T operator[](int); // Retorna el elemento en la posición indicada
    bool empty();      // Retorna si la lista está vacía o no
    int size();        // Retorna el tamaño de la lista
    void clear();      // Elimina todos los elementos de la lista
    void sort();       // Implemente un algoritmo de ordenacion con listas enlazadas)
    void reverse();    // Revierte la lista
};
