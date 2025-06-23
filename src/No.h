#ifndef NO_H
#define NO_H

#include <vector>

class Aresta;

class No {
public:
    No(char id);  
    ~No();

    char id;
    std::vector<Aresta*> arestas;  
};

#endif 