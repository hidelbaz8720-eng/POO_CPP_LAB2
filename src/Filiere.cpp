
#include "Filiere.h"
#include "Etudiant.h"

#include <iostream>
#include <algorithm>
#include <stdexcept>

Filiere::Filiere(std::string nom)
    : nomFiliere(nom) {

    if (nom.empty()) {
        throw std::invalid_argument(
            "Le nom de la filiere est obligatoire."
        );
    }
}

Filiere::~Filiere() {
    for (Etudiant* e : etudiants) {
        if (e != nullptr && e->getFiliere() == this) {
            e->setFiliere(nullptr);
        }
    }

    etudiants.clear();
}

std::string Filiere::getNomFiliere() const {
    return nomFiliere;
}

void Filiere::inscrireEtudiant(Etudiant* e) {
    if (e == nullptr) {
        throw std::invalid_argument(
            "Impossible d'inscrire un etudiant nul."
        );
    }

    // Verifier les doublons
    auto it = std::find(
        etudiants.begin(), etudiants.end(), e
    );

    if (it != etudiants.end()) {
        throw std::runtime_error(
            "Etudiant deja inscrit dans cette filiere."
        );
    }

    // Verifier l'association avec une autre filiere
    if (e->getFiliere() != nullptr) {
        throw std::runtime_error(
            "Etudiant deja inscrit dans une autre filiere."
        );
    }

    // Ajouter l'etudiant puis mettre a jour l'association
    etudiants.push_back(e);
    e->setFiliere(this);
}

void Filiere::retirerEtudiant(Etudiant* e) {
    auto it = std::find(
        etudiants.begin(), etudiants.end(), e
    );

    if (it == etudiants.end()) {
        throw std::runtime_error(
            "Etudiant introuvable dans cette filiere."
        );
    }

    if (e->getFiliere() == this) {
        e->setFiliere(nullptr);
    }

    etudiants.erase(it);
}

int Filiere::getNombreEtudiants() const {
    return static_cast<int>(etudiants.size());
}

void Filiere::afficherTous() const {
    std::cout << "\nFiliere : " << nomFiliere << '\n';
    std::cout << "Nombre d'etudiants : "
              << getNombreEtudiants() << '\n';

    if (etudiants.empty()) {
        std::cout << "Aucun etudiant inscrit.\n";
        return;
    }

    for (const Etudiant* e : etudiants) {
        if (e != nullptr) {
            std::cout << " - " << e->getNom()
                      << " | CIN : " << e->getCin()
                      << " | Moyenne : "
                      << e->calculerMoyenne()
                      << "/20\n";
        }
    }
}
