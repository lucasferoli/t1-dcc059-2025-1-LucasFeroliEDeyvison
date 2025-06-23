#include "No.h"
#include "Aresta.h"

No::No(char id) : id(id) {}
No::~No() {
    for (auto aresta : arestas) {
        delete aresta;
    }
}