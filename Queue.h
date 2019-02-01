#ifndef QUEUE_H_
#define QUEUE_H_

class Queue {
public:
    int count = 0;    // zlicza elementy w kolejce , poczatkowa wartosc 0, przy kazdym dodatniu elementu do kolejki  count++
    int element;      // zmienna przechowujaca wartosc elementu
    Queue *next;	  // wskaznik do następnego elementu w kolejce
    Queue *head, *tail;    // wskazniki na poczatek oraz koniec
public:
    Queue();
    Queue(int i,Queue *in); //drugi konstruktor gdy uzytkownik poda wartosc elementu
    void addElement(int);
    int getFElement();  // get first element
    int deleteFront();
    int sum();
    void printAll();
    void deleteAll();
    virtual ~Queue();
};

#endif
