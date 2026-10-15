
#ifndef ETUDIANT_H
#define ETUDIANT_H

#include <string>

class Filiere;

class Etudiant {
private:
    std::string nom;
    std::string cin;
    double note1;
    double note2;
    double note3;
    Filiere* filiere;

    static void verifierNote(double note);

public:
    Etudiant(std::string nom, std::string cin,
             double n1, double n2, double n3);

    std::string getNom() const;
    std::string getCin() const;

    double getNote1() const;
    double getNote2() const;
    double getNote3() const;

    void setNom(const std::string& nouveauNom);
    void setCin(const std::string& nouveauCin);

    void setNote1(double note);
    void setNote2(double note);
    void setNote3(double note);

    double calculerMoyenne() const;

    void setFiliere(Filiere* f);
    Filiere* getFiliere() const;
};

#endif
