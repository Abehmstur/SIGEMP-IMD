#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "bancoDao.hpp"
#include "./exceptions.cpp"

using namespace std;

std::vector<Professor> professores;
std::vector<TecnicoADM> tecnicosADM;

void cadastrarProfessor(std::vector<Professor>& professores){
    //dados Pessoa
    std::string nome;
    std::string cpf;
    std::string dataNascimento;
    Endereco endereco;
    
    //dados Funcionario
    std::string matricula;
    float salario;
    std::string departamento;
    int cargaHoraria;
    std::string dataIngresso;

    //dados Professor
    
    std::string disciplina;

    //Testando try Catch do c++
    try
    {
        Professor* novoProfessor = new Professor();
        
        
        operacaoSucesso();

        delete novoProfessor;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        operacaoFalha();
    }
};

void listarProfessores(){

};

void deletarProfessor(int matricula){

};

void buscarProfessor(int matricula){

};
