#ifndef ELEVADOR_H
#define ELEVADOR_H

#include <iostream>
using namespace std;

class elevador
{
private:
    int quant_pessoas;
    int capacidade_pessoas;
    int andar_atual;
    int andares_total;

public:
    elevador();
    elevador(int andares, int cap);

    void entra(int pessoas);
    void sai(int pessoas);
    void sobe(int subindo);
    void desce(int subindo);

    int get_quant_pessoas();
    int get_capacidade_pessoas();
    int get_andar_atual();
    int get_andares_total();
};

void get_status_elevador(elevador *x);

#endif // ELEVADOR_H
