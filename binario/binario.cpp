// binario.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>

std::string resultado = "";

void Conversor(int valor)
{
    int residuo = 0;

    if (valor > 1)
    {
        residuo = valor % 2;
        valor = valor / 2;

        resultado.append(std::to_string(residuo));
        Conversor(valor);
    }
    else {
        resultado.append(std::to_string(valor));

        std::reverse(resultado.begin(), resultado.end());
    }
}

int main()
{
    int numero = 0;
    std::cout << "Introduce un numero entero" << std::endl;
    std::cin >> numero;

    Conversor(numero);

    std::cout << resultado;
}