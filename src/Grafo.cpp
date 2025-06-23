#include "Grafo.h"
#include "Aresta.h"
#include "No.h"

Grafo::Grafo() {
}

Grafo::~Grafo() {
}

vector<char> Grafo::fecho_transitivo_direto(char id_no) {
    vector<char> resultado;
    vector<bool> visitado(ordem, false);

    int indice = indice_no(id_no);
    if (indice == -1) return resultado;

    dfs_fecho_transitivo(lista_adj[indice], visitado, resultado);
    return resultado;
}

vector<char> Grafo::fecho_transitivo_indireto(char id_no) {
    cout<<"Metodo nao implementado"<<endl;
    return {};
}

vector<char> Grafo::caminho_minimo_dijkstra(char id_no_a, char id_no_b) {
    cout<<"Metodo nao implementado"<<endl;
    return {};
}

vector<char> Grafo::caminho_minimo_floyd(char id_no, char id_no_b) {
    cout<<"Metodo nao implementado"<<endl;
    return {};
}

Grafo * Grafo::arvore_geradora_minima_prim(vector<char> ids_nos) {
    cout<<"Metodo nao implementado"<<endl;
    return nullptr;
}

Grafo * Grafo::arvore_geradora_minima_kruskal(vector<char> ids_nos) {
    cout<<"Metodo nao implementado"<<endl;
    return nullptr;
}

Grafo * Grafo::arvore_caminhamento_profundidade(char id_no) {
    cout<<"Metodo nao implementado"<<endl;
    return nullptr;
}

int Grafo::raio() {
    cout<<"Metodo nao implementado"<<endl;
    return 0;
}

int Grafo::diametro() {
    cout<<"Metodo nao implementado"<<endl;
    return 0;
}

vector<char> Grafo::centro() {
    cout<<"Metodo nao implementado"<<endl;
    return {};
}

vector<char> Grafo::periferia() {
    cout<<"Metodo nao implementado"<<endl;
    return {};
}

vector<char> Grafo::vertices_de_articulacao() {
    cout<<"Metodo nao implementado"<<endl;
    return {};
}

void Grafo::dfs_fecho_transitivo(No* no, vector<bool>& visitado, vector<char>& resultado) {
    int indice = indice_no(no->id);
    if (indice == -1 || visitado[indice]) return;

    visitado[indice] = true;

    for (auto* aresta : no->arestas) {
        int dest_indice = indice_no(aresta->destino->id);
        if (dest_indice != -1 && !visitado[dest_indice]) {
            resultado.push_back(aresta->destino->id);
            dfs_fecho_transitivo(aresta->destino, visitado, resultado);
        }
    }
}

int Grafo::indice_no(char id_no) {
    for (int i = 0; i < lista_adj.size(); i++) {
        if (lista_adj[i]->id == id_no) return i;
    }
    return -1;
}
