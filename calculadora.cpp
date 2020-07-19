#include <iostream>

using namespace std;

float soma(float num1, float num2)
{
    return num1 + num2;
}

int main()
{
    float num1, num2, resultado;
    char operacao;
    bool opValida = true;

    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;
    cout << "Digite a operação: ";
    cin >> operacao;

    // Operações básicas
    switch (operacao)
    {
    case '+':
        resultado = soma(num1, num2);
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
        opValida = false;
        break;
    }

    if (opValida)
    {
        cout << "Resultado: " << resultado << endl;
    }
    else
    {
        cout << "Operação inválida" << endl;
    }

    return 0;
}