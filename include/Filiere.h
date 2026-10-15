
#ifndef FILIERE_H
#define FILIERE_H

#include <string>
#include <vector>

class Etudiant;

class Filiere {
private:
    std::string nomFiliere;
    std::vector<Etudiant*> etudiants;

public:
    explicit Filiere(std::string nom);
    ~Filiere();

    // Une filiere ne doit pas etre copiee
    // car elle gere une association avec des pointeurs.
    Filiere(const Filiere&) = delete;
    Filiere& operator=(const Filiere&) = delete;

    std::string getNomFiliere() const;

    void inscrireEtudiant(Etudiant* e);
    void retirerEtudiant(Etudiant* e);

    int getNombreEtudiants() const;
    void afficherTous() const;
};

#endif
