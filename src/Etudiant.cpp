
#include "Etudiant.h"
#include <stdexcept>

void Etudiant::verifierNote(double note) {
    if (note < 0 || note > 20) {
        throw std::invalid_argument(
            "La note doit etre comprise entre 0 et 20."
        );
    }
}

Etudiant::Etudiant(std::string nom, std::string cin,
                   double n1, double n2, double n3)
    : nom(nom), cin(cin),
      note1(n1), note2(n2), note3(n3),
      filiere(nullptr) {

    if (nom.empty() || cin.empty()) {
        throw std::invalid_argument(
            "Le nom et le CIN sont obligatoires."
        );
    }

    verifierNote(n1);
    verifierNote(n2);
    verifierNote(n3);
}

std::string Etudiant::getNom() const {
    return nom;
}

std::string Etudiant::getCin() const {
    return cin;
}

double Etudiant::getNote1() const {
    return note1;
}

double Etudiant::getNote2() const {
    return note2;
}

double Etudiant::getNote3() const {
    return note3;
}

void Etudiant::setNom(const std::string& nouveauNom) {
    if (nouveauNom.empty()) {
        throw std::invalid_argument("Nom invalide.");
    }
    nom = nouveauNom;
}

void Etudiant::setCin(const std::string& nouveauCin) {
    if (nouveauCin.empty()) {
        throw std::invalid_argument("CIN invalide.");
    }
    cin = nouveauCin;
}

void Etudiant::setNote1(double note) {
    verifierNote(note);
    note1 = note;
}

void Etudiant::setNote2(double note) {
    verifierNote(note);
    note2 = note;
}

void Etudiant::setNote3(double note) {
    verifierNote(note);
    note3 = note;
}

double Etudiant::calculerMoyenne() const {
    return (note1 + note2 + note3) / 3.0;
}

void Etudiant::setFiliere(Filiere* f) {
    filiere = f;
}

Filiere* Etudiant::getFiliere() const {
    return filiere;
}
