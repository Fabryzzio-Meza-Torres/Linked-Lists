#include <iostream>
using namespace std;

template <class T>
struct Node
{
    Node *next;
    T data;
    Node(T value)
    {
        data = value;
        next = NULL;
    }
};

template <class T>
class List
{
    Node *head;
    Node *temp;

public:
    T front()
    { // Retorna el elemento al comienzo
        if (head != NULL)
            return head->data;
        else
        {
            return;
        }
    }

    T back()
    { // Retorna el elemento al final
        if (!empty())
        {
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            return temp->data;
        }
        else
        {
            return;
        }
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
        if (empty())
        {
            return;
        }
        else
        {
            temp = head;
            head = head->next;
            delete temp;
        }
    }

    T pop_back()
    { // Remueve el elemento al final
        if (empty())
        {
            return;
            else
            {
                while (temp->next != NULL)
                {
                    temp = temp->next;
                }
                delete temp;
            }
        }
    }
    T operator[](int index)
    { // Retorna el elemento en la posición indicada
        if (empty())
        {
            return;
        }
        else
        {
            int counter = 0;
            while (temp->next != NULL)
            {
                if (counter == index)
                {
                    return temp->data;
                }
                else
                {
                    counter++;
                    temp = temp->next;
                }
            }
        }
    }
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
        temp = head;
        Node *temp2 = temp->next;
        while (temp->next != NULL)
        {
            temp2 = temp->next;
            while (temp2->next != NULL)
            {
                if (temp->data > temp2->data)
                {
                    T auxiliar = temp->data;
                    temp->data = temp2->data;
                    temp2->data = auxiliar;
                }
                temp2 = temp2->next;
            }
            temp = temp->next;
        }
    }
    void reverse()
    { // Revierte la lista
        Node *prev = NULL;
        while (temp->next != NULL)
        {
            next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
        }
        head = prev;
    }
    void print()
    { // Imprime los elementos de la lista
        temp = head;
        while (temp->next != NULL)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
};
