#include <iostream>
#include <string>
#include <map>
#include "./endereco.cpp"
#include "./pessoa.cpp"
#include "./bancoDao.cpp"

using namespace std;

int main()
{
   /*  Endereco novoEndereco;
    Pessoa novaPessoa;
    Pessoa pessoa1("Arthur", "123456789", "11/02/1961", novoEndereco);

    cout << "====Novo Endereco====" << endl;
    novoEndereco.setNumero(123);
    cout << "Numero: " << novoEndereco.getNumero() << endl;

    novaPessoa.setNome("Joao Miguel");
    novaPessoa.setEndereco(novoEndereco);
    cout << "====Nova Pessoa====" << endl;
    cout << "Nome: " << novaPessoa.getNome() << endl;
    cout << "Endereco: " << novaPessoa.getEndereco().getNumero() << endl;

    cout << "====Nova Pessoa[1]====" << endl;
    cout << "Nome_p1: " << pessoa1.getNome() << endl;
    cout << "CPF_p1: " << pessoa1.getCPF() << endl;
    cout << "Nascimento_p1: " << pessoa1.getDataNascimento() << endl;
    cout << "Endereco_p1: " << pessoa1.getEndereco().getNumero(); */

    //Testes DAO
    
    cadastrarProfessor(professores);

    return 0;
}
