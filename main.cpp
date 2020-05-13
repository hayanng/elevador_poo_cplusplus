#include "elevador.h"

int main ()
{
    int opcao, opcao1 = true;
    int andares, cap_pessoas;
    int sobe_desce;
    int pessoas;

    while (opcao1)
    {
        system("cls");

        cout << "> Digite a quantidade de andares do seu elevador: ";
        cin >> andares;
        cout << "\n> Digite a capacidade de pessoas do seu elevador: ";
        cin >> cap_pessoas;
        elevador x(andares, cap_pessoas);

        system("cls");

        get_status_elevador(&x);
        cout << "\n[1] SUBIR\n[2] DESCER\n[0] SAIR\n\n> Digite opcao desejada: ";
        cin >> opcao;

        while (opcao)
        {
            switch (opcao)
            {
                case 1: //subindo
                    cout << "\nAndares subindo: ";
                    cin >> sobe_desce;
                    x.sobe(sobe_desce);

                    cout << "\nPessoas entrando: ";
                    cin >> pessoas;
                    x.entra(pessoas);

                    cout << "\nPessoas saindo: ";
                    cin >> pessoas;
                    x.sai(pessoas);
                    break;

                case 2: // descendo
                    cout << "\nAndares descendo: ";
                    cin >> sobe_desce;
                    x.desce(sobe_desce);

                    cout << "\nPessoas entrando: ";
                    cin >> pessoas;
                    x.entra(pessoas);

                    cout << "\nPessoas saindo: ";
                    cin >> pessoas;
                    x.sai(pessoas);
                    break;
            }

            system("cls");
            get_status_elevador(&x);
            cout << "\n[1] SUBIR\n[2] DESCER\n[0] SAIR\n\nDigite opcao desejada: ";
            cin >> opcao;
        }
        cout << "\n> Digite 1 para criar um novo elevador ou 0 para sair do programa: ";
        cin >> opcao1;
    }
}
