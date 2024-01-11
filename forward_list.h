#include <iostream>
using namespace std;

template <class T>
struct Node
{
    Node *next;
    T data;
    Node() : next(nullptr) {}
    Node(T value)
    {
        data = value;
        next = nullptr;
    }
};

template <class T>
class ForwardList
{
private:
    Node<T> *head;

public:
    ForwardList() : head(nullptr) {}
    ~ForwardList()
    {
        Node<T> *newNode = head;
        while (newNode != NULL)
        {
            Node<T> *temp = newNode;
            newNode = newNode->next;
            delete temp;
        }
    }
    T front()
    { // Retorna el elemento al comienzo
        if (head != NULL)
        {
            T data = head->data;
            cout << data << endl;
            return data;
        }
        else
        {
            return T();
        }
    }

    T back()
    { // Retorna el elemento al final
        Node<T> *temp = head;
        if (head != NULL)
        {
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            T data = temp->data;
            cout << data << endl;
            return data;
        }
        else
        {
            return T();
        }
    }

    void push_front(T value)
    { // Agrega un elemento al comienzo
        Node<T> *new_Node = new Node<T>(value);
        new_Node->next = head;
        head = new_Node;
    }
    void push_back(T value)
    { // Agrega un elemento al final
        Node<T> *new_node = new Node<T>(value);
        Node<T> *temp = head;

        if (head == NULL)
        {
            head = new_node;
            return;
        }

        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->next = NULL;
    }

    T pop_front()
    { // Remueve el elemento al comienzo
        if (head == NULL)
        {
            return T();
        }
        else
        {
            Node<T> *temp = head;
            head = head->next;
            T data = temp->data;
            delete temp;
            return data;
        }
    }

    T pop_back()
    { // Remueve el elemento al final
        if (head == NULL)
        {
            return T();
        }
        else if (head->next == NULL)
        {
            T data = head->data;
            delete head;
            head = NULL;
            return data;
        }

        else
        {
            Node<T> *temp = head;
            Node<T> *temp2 = temp->next;
            while (temp->next != NULL)
            {
                temp2 = temp;
                temp = temp->next;
            }
            T data = temp->data;
            delete temp;
            temp2->next = NULL;
            return data;
        }
    }

    T operator[](int index)
    { // Retorna el elemento en la posición indicada
        if (head == NULL || index < 0)
        {
            return T();
        }
        else
        {
            Node<T> *temp = head;
            int counter = 0;
            while (temp != NULL)
            {
                if (counter == index)
                {
                    T datita = temp->data;
                    cout << datita << endl;
                    return datita;
                }
                else
                {
                    counter++;
                    temp = temp->next;
                }
            }
            return T();
        }
    }

    bool empty()
    { // Retorna si la lista está vacía o no
        bool isEmpty = (head == NULL) ? true : false;
        cout << boolalpha << isEmpty << endl;
        return isEmpty;
    }

    int size()
    { // Retorna el tamaño de la lista
        int counter = 0;
        Node<T> *temp = head;
        while (temp != NULL)
        {
            counter++;
            temp = temp->next;
        }
        cout << counter << endl;
        return counter;
    }

    void clear()
    { // Elimina todos los elementos de la lista
        Node<T> *temp = head;
        while (temp != NULL)
        {
            Node<T> *temp2 = temp;
            temp = temp->next;
            delete temp2;
        }
        head = NULL;
    }
    void sort()
    { // Implemente un algoritmo de ordenación con listas enlazadas
        if (head == NULL)
        {
            return;
        }
        Node<T> *temp = head;
        while (temp->next != NULL)
        {
            Node<T> *temp2 = temp->next;
            while (temp2 != NULL)
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
        if (head == NULL)
        {
            return;
        }
        Node<T> *prev = NULL;
        Node<T> *temp = head;
        while (temp != NULL)
        {
            Node<T> *next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
        }
        head = prev;
    }

    void print()
    { // Imprime los elementos de la lista
        if (head == NULL)
        {
            cout << "Lista vacia" << endl;
            return;
        }

        Node<T> *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
