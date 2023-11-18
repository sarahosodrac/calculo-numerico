#include <iostream>
#include <iomanip> // Para formatação de saída
#include <cmath>   // Em vez de <math.h>
#include <locale.h> // para digitar com acento

using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");

    double x, fx, fx2, xk, divisaofxfx2;
    double tolerancia;

    cout << "Digite o valor aproximado:" << endl;
    cin >> x;
    cout << "Digite a tolerância:" << endl;
    cin >> tolerancia;
    int contador = 0;  // Inicializa o contador de iterações

    // Defina a largura das colunas para a formatação da tabela
    const int colWidth = 15;

    cout << left; // Alinhamento à esquerda

    // Cabeçalho da tabela
    cout << endl<< setw(colWidth) << "Iteração";
    cout << setw(colWidth) << "fx";
    cout << setw(colWidth) << "f'x";
    cout << setw(colWidth) << "fx/f'x";
    cout << setw(colWidth) << "xk" << endl;

    do {
        // Cálculos
        fx = (x * x) - (6 * x) + 2;
        fx2 = (2 * x) - 6;
        divisaofxfx2 = (fx / fx2);
        xk = x - divisaofxfx2;

        // Exibir os valores em colunas formatadas
        cout << setw(colWidth) << contador;
        cout << setw(colWidth) << fx;
        cout << setw(colWidth) << fx2;
        cout << setw(colWidth) << divisaofxfx2;
        cout << setw(colWidth) << xk << endl;

        x = xk;  // Atualize o valor aproximado
        contador++;  // Incrementa o contador de iterações

    } while (abs(fx) > tolerancia);

    return 0;
}
