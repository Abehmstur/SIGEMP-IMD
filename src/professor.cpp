#include "professor.hpp"
#include "funcionario.hpp"

Professor::Professor(){

}
//Construtor parametrizado
Professor::Professor(Nivel _nivel, Formacao _formacao, const std::string& _disciplina)
    : nivelProfessor(_nivel), formacaoProfessor(_formacao), disciplina(_disciplina) {
}

//Getters
Professor::Nivel Professor::getNivelProfessor() const {
    return nivelProfessor;
}

Professor::Formacao Professor::getFormacaoProfessor() const {
    return formacaoProfessor;
}

std::string Professor::getDisciplina() const {
    return disciplina;
}

//Setters
void Professor::setNivelProfessor(Nivel novoNivel) {
    nivelProfessor = novoNivel;
}

void Professor::setFormacaoProfessor(Formacao novaFormacao) {
    formacaoProfessor = novaFormacao;
}

void Professor::setDisciplina(const std::string& novaDisciplina) {
    disciplina = novaDisciplina;
}
