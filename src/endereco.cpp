#include <iostream>
#include "endereco.hpp"

using namespace std;

// Getters
    string Endereco::getRua() const {
        return rua;
    }

    int Endereco::getNumero() const {
        return numero;
    }

    string Endereco::getBairro() const {
        return bairro;
    }

    string Endereco::getCidade() const {
        return cidade;
    }

    string Endereco::getCEP() const {
        return cep;
    }

    // Setters
    void Endereco::setRua(const std::string& newRua) {
        rua = newRua;
    }

    void Endereco::setNumero(int newNumero) {
        numero = newNumero;
    }

    void Endereco::setBairro(const std::string& newBairro) {
        bairro = newBairro;
    }

    void Endereco::setCidade(const std::string& newCidade) {
        cidade = newCidade;
    }

    void Endereco::setCEP(const std::string& newCEP) {
        cep = newCEP;
    }
