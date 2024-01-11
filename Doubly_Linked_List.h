#include <iostream>
using namespace std;
template<class T>
struct Node{
    T data;
    Node* next=nullptr;
    Node* prev=nullptr;
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
        temp->data=value;
        if(head == nullptr){
            head = temp;
            tail = temp;
        }else{
            head->prev=temp;
            temp->next=head;
            head=temp;
        }
    };
    void push_back(T value){
        Node<T>* temp = new Node<T>{value,nullptr};
        temp->data=value;
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
        if (empty()){
            return 0;
        }
        else{
            Node<T> *temp= head;
            head = head->next;
            head->prev=nullptr;
            temp->next=nullptr;
            delete temp;
            return 0;
        }
    };
    T pop_back(){
        if (empty()){
            return 0;
        }
        else{
            Node<T>*temp=tail;
            tail = tail->prev;
            tail->next = nullptr;
            temp->prev=nullptr;
            delete temp;
            return 0;
        }
    };
    void insert(T value ,int pos){
        int cont=0;
        Node<T>* node = new Node<T>;
        node->data=value;
        Node<T>* temp=head;
        if(pos==0){
            push_front(value);
            return;
        }
        else if(pos==size()){
            push_back(value);
            return;
        }
        else if(pos>size()){
            cout<<"Posicion no valida"<<endl;
            return;
        }
        while(cont++<pos-1){
            temp=temp->next;
        }
        node->next=temp->next;
        node->prev=temp;
        temp->next->prev=node;
        temp->next=node;
    };
    void remove(int pos){
        int cont=0;
        Node<T>* temp=head;
        if(pos==0){
            pop_front();
            return;
        }
        else if(pos==size()-1){
            pop_back();
            return;
        }
        else if(pos>size()){
            cout<<"Posicion no valida"<<endl;
            return;
        }
        else{
            while(cont++<pos){
                temp=temp->next;
            }
            if(temp->next){
                temp->next->prev = temp->prev;
            }
            if(!temp->prev){
                head = temp->next;
            }else{
                temp->prev->next = temp-> next;
            }
            delete temp;
        }

    };
    T operator[ ](int pos){
        int cont=0;
        Node<T>* temp=head;
        while(cont++<pos){
            temp=temp->next;
        }
        return temp->data;
    };
    bool empty(){
        if(head!=nullptr && tail !=nullptr){return false;}
        else{return true;}
    };
    int size(){
        int cont=0;
        Node<T>* temp;
        temp = head;
        if (empty()){
            return cont;
        }
        else{
            while(temp !=nullptr){
                cont++;
                temp=temp->next;
            }
            return cont;
        }

    };
    void clear(){
        Node<T>* temp;
        while(tail != NULL){
            temp = tail;
            tail = tail->prev;
            delete temp;
        }
        tail = NULL;
        head = NULL;
    }
    void reverse(){
        Node<T>* temp;
        Node<T>* temp1 = tail->next;
        head = tail;
        temp = tail;
        while(temp != NULL){
            temp->next = tail->prev;
            temp->prev = temp1;
            temp = temp->next;
        }

    }
    void print() {
        Node<T>* temp;
        temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};
