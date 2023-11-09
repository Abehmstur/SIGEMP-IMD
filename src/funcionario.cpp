#include "funcionario.hpp"
#include "pessoa.hpp"

//Construtor 
Funcionario::Funcionario(){
}
//Construtor parametrizado
Funcionario::Funcionario(const std::string& _matricula, float _salario, const std::string& _departamento, int _cargaHoraria, const std::string& _dataIngresso)
    : matricula(_matricula), salario(_salario), departamento(_departamento), cargaHoraria(_cargaHoraria), dataIngresso(_dataIngresso) {
}

//Getters
std::string Funcionario::getMatricula() const {
    return matricula;
}

float Funcionario::getSalario() const {
    return salario;
}

std::string Funcionario::getDepartamento() const {
    return departamento;
}

int Funcionario::getCargaHoraria() const {
    return cargaHoraria;
}

std::string Funcionario::getDataIngresso() const {
    return dataIngresso;
}

//Setters
void Funcionario::setMatricula(const std::string& novaMatricula) {
    matricula = novaMatricula;
}

void Funcionario::setSalario(float novoSalario) {
    salario = novoSalario;
}

void Funcionario::setDepartamento(const std::string& novoDepartamento) {
    departamento = novoDepartamento;
}

void Funcionario::setCargaHoraria(int novaCargaHoraria) {
    cargaHoraria = novaCargaHoraria;
}

void Funcionario::setDataIngresso(const std::string& novaDataIngresso) {
    dataIngresso = novaDataIngresso;
}
