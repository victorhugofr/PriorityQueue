#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include "Node.hpp"
#include "Heap.hpp"
#include <string>
using namespace std;

int main () {
    Heap<string> *h = new Heap<string>();
    h->push(3, "LP2");
    h->push(4, "SO");
    h->push(5, "PROBABILIDADE");
    h->push(1, "EDB2");
    h->push(2, "FMC2");
    int i;
    for (i = 0; i < 5; i++) {
        cout<<h->pop()<<endl;
    }
    return 0;
}