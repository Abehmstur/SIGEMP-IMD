#ifndef TECNICO_ADM_HPP
#define TECNICO_ADM_HPP

#include "funcionario.hpp"
#include <string>

class TecnicoADM : public Funcionario {
private:
    float adicionalProdutividade = 0.25;
    std::string funcaoDesempenhada;

public:
    // Construtor parametrizado
    TecnicoADM(float _adicionalProdutividade, const std::string& _funcaoDesempenhada);

    // Getters
    float getAdicionalProdutividade() const;
    std::string getFuncaoDesempenhada() const;

    // Setters
    void setAdicionalProdutividade(float novoAdicionalProdutividade);
    void setFuncaoDesempenhada(const std::string& novaFuncaoDesempenhada);
};

#endif
