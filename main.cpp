#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include "Node.hpp"
#include "Heap.hpp"
#include <string>
using namespace std;
// MIN HEAP
int main () {
    Heap<string> *h = new Heap<string>();
    h->push(3, "LP2");
    h->push(4, "SO");
    h->push(5, "PROBABILIDADE");
    h->pop();
    h->push(1, "EDB2");
    h->push(2, "FMC2");
    int max=h->len;
    int i;
    for (i = 0; i < max; i++) {
        cout<<h->top()<<endl;
    }
    return 0;
}