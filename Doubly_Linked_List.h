#include <iostream>
using namespace std;
template<class T>
struct Node{
    T data;
    Node* next;
    Node* prev;
};
template<class T>
class List{
private:
    Node<T>* head;
    Node<T>* tail;
public:
    List(): head(nullptr), tail(nullptr){}
    T front(){
        return head->data;
    };
    T back(){
        return tail->data;
    };
    void push_front(T value){
        Node<T>* temp = new Node<T>{value,head};
        if(head == nullptr){
            head = temp;
            tail = temp;
        }else{
            head = temp;
        }
    };
    void push_back(T value){
        Node<T>* temp = new Node<T>{value,nullptr};
        if(tail == nullptr){
            tail = temp;
            head = temp;
        }else{
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
    };
    T pop_front(){
        Node<T> *temp;
        temp = head;
        head = head->next;
        delete temp;
        return 5;

    };
    T pop_back(){
        Node<T>*temp;
        temp = tail;
        tail = tail->prev;
        tail->next = nullptr;
        delete temp;
        return 5;
    };
    void insert(T,int){
    };
    void remove(int){


    };
    T operator[ ](int){

    };
    bool empty(){

    };
    int size(){};
    void print() {
        Node<T>* temp;
        temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

