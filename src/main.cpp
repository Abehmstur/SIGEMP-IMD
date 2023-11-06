#include <iostream>
#include <string>
#include <map>
#include "endereco.hpp"

using namespace std;

int main()
{
    Endereco novoEndereco;
    novoEndereco.setNumero(123);

    cout << "Número: " << novoEndereco.getNumero(); // Alterei "Rua" para "Número"
    return 0;
}
