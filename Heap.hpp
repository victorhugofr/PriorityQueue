#include <iostream>
#include <vector>
#include "Node.hpp"
#ifndef HEAP_HPP
#define HEAP_HPP
template<typename T>
class Heap{
public:
    std::vector<Node<T> > nodes;
    int len;
    int size;
    Heap(){
        
    }
    void push (int priority, T data) {
        if (len + 1 >= size) {
            size = size ? size * 2 : 4;
            nodes.resize(size);
        }
        int i = len + 1;
        int j = i / 2;
        while (i > 1 && nodes[j].priority > priority) {
            nodes[i] = nodes[j];
            i = j;
            j = j / 2;
        }
        nodes[i].priority = priority;
        nodes[i].data = data;
        len++;
    }

    T pop () {
        int i, j, k;
        if (!len) {
            return NULL;
        }
        T data = nodes[1].data;
    
        nodes[1] = nodes[len];
 
        len--;
 
        i = 1;
        while (i!=len+1) {
            k = len+1;
            j = 2 * i;
            if (j <= len && nodes[j].priority < nodes[k].priority) {
                k = j;
            }
            if (j + 1 <= len && nodes[j + 1].priority < nodes[k].priority) {
                k = j + 1;
            }
            nodes[i] = nodes[k];
            i = k;
        }
    return data;
    }
};
#endif