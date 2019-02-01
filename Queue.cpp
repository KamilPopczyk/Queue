#include <iostream>
#include "Queue.h"

using namespace std;
Queue::Queue(){
    head=tail=0;
}
Queue::Queue(int i,Queue *in = 0){
    element = i;
    next = in;
}

int Queue::getFElement(){
    Queue *temp = head;
    return temp->element;
}
void Queue::addElement(int nowyEl){
    count++;								     // zliczanie elementow kolejki
    if(tail == 0){								// kolejka jest pusta
        head = tail = new Queue(nowyEl);
    }
    else                                         // kolejka ma juz elementy
    {										     // (stary) ostatni element posiada wskaznik na nowy element kolejki
        tail->next = new Queue(nowyEl);
        tail = tail->next;						// wskanznik tail wskazuje na nowy ostatni element kolejki
    }
}

int Queue::deleteFront(){

    int el = head->element;
    Queue *tmp = head;

    if(head == tail) {        // przypadek dla jednego elementy listy
        head = tail = 0;
    }
    else
        head =head->next;
    delete tmp;
    return el;
}

void Queue::printAll(){
    if(count == 0){
        cout << "Kolejka jest pusta ! " << endl;
    }
    else{
// identyczna petla z klasy lista
        for(Queue *tmp = head;tmp != 0; tmp = tmp->next){
            cout << tmp -> element << "  ";
        }
        cout << endl;
    }
}


int Queue::sum(){
    return count;
}

void Queue::deleteAll(){  // funkcja dziala na podstawie petli wykorzystujacecej juz wczesniej napisana metode usuwajaca element z listy na przodzie
    count = 0;    // wyzerowna zmienna przechowujaca ilosc elementow listy
    for(int i=0;i<sum();i++){
        deleteFront();
    }
}



Queue::~Queue() {
    // TODO Auto-generated destructor stub
}

