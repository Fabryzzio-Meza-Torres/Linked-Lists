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
    void push_back(T value)
    { // Agrega un elemento al final
        Node *new_node = new Node;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->data = value;
        new_node->next = NULL;
    }

    T pop_front()
    { // Remueve el elemento al comienzo
        temp = head;
        head = head->next;
        delete temp;
    }

    T pop_back()
    { // Remueve el elemento al final
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        delete temp;
    }

    T operator[](int); // Retorna el elemento en la posición indicada

    bool empty()
    { // Retorna si la lista está vacía o no
        if (head == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int size()
    { // Retorna el tamaño de la lista
        int counter = 0;
        while (temp->next != NULL)
        {
            counter++;
            temp = temp->next;
        }
        return counter;
    }
    void clear()
    { // Elimina todos los elementos de la lista
        temp = head;
        while (temp->next != NULL)
        {
            delete temp;
            temp = temp->next;
        }
    }
    void sort()
    { // Implemente un algoritmo de ordenacion con listas enlazadas)
    }
    void reverse(); // Revierte la lista
};
