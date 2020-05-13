#include "elevador.h"

int main ()
{
    elevador x(50, 10);
    int opcao;
    int sobe_desce;
    int pessoas;

    get_status_elevador(&x);
    cout << "\n[1] SUBIR\n[2] DESCER\n[0] SAIR\n\nDigite opcao desejada: ";
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
}
