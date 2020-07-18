#include <iostream>

using namespace std;

int main()
{
    int num1, num2, resultado;
    char operacao;

    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;
    cout << "Digite a operação: ";
    cin >> operacao;

    switch (operacao)
    {
    case '+':
        resultado = num1 + num2;
        break;

    case '-':
        resultado = num1 - num2;
        break;

    case '*':
        resultado = num1 * num2;
        break;

    case '/':
        resultado = num1 / num2;
        break;

    default:
        break;
    }

    cout << "Resultado: " << resultado << endl;

    return 0;
}