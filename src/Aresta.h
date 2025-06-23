#ifndef ARESTA_H
#define ARESTA_H

class No;

class Aresta {
public:
    Aresta(int peso, No* destino);  
    ~Aresta();

    int peso;
    No* destino;
};

#endif // ARESTA_H