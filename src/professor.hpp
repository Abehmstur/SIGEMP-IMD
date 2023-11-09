#ifndef PROFESSOR_HPP
#define PROFESSOR_HPP

#include <string>
#include "funcionario.hpp"

class Professor : public Funcionario {
public:
    //Enumerações
    enum Nivel { I, II, III, IV, V, VI, VII, VIII };
    enum Formacao { ESPECIALIZACAO, MESTRADO, DOUTORADO };

private:
    Nivel nivelProfessor;
    Formacao formacaoProfessor;
    std::string disciplina;

public:
    //Construtor padrao
    Professor();
    //Construtor parametrizado
    Professor(Nivel _nivel, Formacao _formacao, const std::string& _disciplina);

    //Getters
    Nivel getNivelProfessor() const;
    Formacao getFormacaoProfessor() const;
    std::string getDisciplina() const;

    //Setters
    void setNivelProfessor(Nivel novoNivel);
    void setFormacaoProfessor(Formacao novaFormacao);
    void setDisciplina(const std::string& novaDisciplina);
};

#endif
