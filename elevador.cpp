#include "elevador.h"

elevador::elevador()
{
    quant_pessoas = 0;
    capacidade_pessoas = 6;
    andar_atual = 0;
    andares_total = 9;
}

elevador::elevador(int andares, int cap)
{
    quant_pessoas = 0;
    capacidade_pessoas = cap;
    andar_atual = 0;
    andares_total = andares;
}

void elevador::entra(int pessoas)
{
    if (quant_pessoas + pessoas > capacidade_pessoas)
        quant_pessoas = capacidade_pessoas;
    else
        quant_pessoas += pessoas;
}

void elevador::sai(int pessoas)
{
    if (quant_pessoas - pessoas < 0)
        quant_pessoas = 0;
    else
        quant_pessoas -= pessoas;
}

void elevador::sobe(int subindo)
{
    if (andar_atual + subindo > andares_total)
        andar_atual = andares_total;
    else
        andar_atual += subindo;
}

void elevador::desce(int subindo)
{
    if (andar_atual - subindo < 0)
        andar_atual = 0;
    else
        andar_atual -= subindo;
}

int elevador::get_quant_pessoas()
{
    return quant_pessoas;
}

int elevador::get_capacidade_pessoas()
{
    return capacidade_pessoas;
}

int elevador::get_andar_atual()
{
    return andar_atual;
}

int elevador::get_andares_total()
{
    return andares_total;
}

void get_status_elevador(elevador *x)
{
    cout << "\tELEVADOR\n";
    if (x->get_andar_atual() > 0)
        cout << "Andar:   " << x->get_andar_atual() << " / " << x->get_andares_total() << endl;
    else
        cout << "Andar:   T" << " / " << x->get_andares_total() << endl;

    cout << "Pessoas: " << x->get_quant_pessoas() << " / " << x->get_capacidade_pessoas() << endl;
}
