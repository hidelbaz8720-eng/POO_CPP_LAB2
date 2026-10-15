
#include <iostream>
#include <iomanip>
#include <exception>

#include "Etudiant.h"
#include "Filiere.h"

int main() {
    try {
        // Creation des objets
        Filiere f1("Informatique");

        Etudiant e1("Alice", "123", 15, 16, 17);
        Etudiant e2("Bob", "456", 12, 14, 16);
        Etudiant e3("Sara", "789", 18, 17, 19);

        std::cout << "=== INSCRIPTION DES ETUDIANTS ===\n";

        f1.inscrireEtudiant(&e1);
        f1.inscrireEtudiant(&e2);
        f1.inscrireEtudiant(&e3);

        // Affichage
        std::cout << "\n=== LISTE DES ETUDIANTS ===\n";
        std::cout << std::fixed << std::setprecision(2);
        f1.afficherTous();

        // Verification de l'association reciproque
        std::cout << "\n=== ASSOCIATION ===\n";

        if (e1.getFiliere() != nullptr) {
            std::cout << e1.getNom()
                      << " appartient a la filiere "
                      << e1.getFiliere()->getNomFiliere()
                      << '\n';
        }

        // Test d'un doublon
        std::cout << "\n=== TEST DU DOUBLON ===\n";

        try {
            f1.inscrireEtudiant(&e1);
        }
        catch (const std::exception& e) {
            std::cerr << "Erreur detectee : "
                      << e.what() << '\n';
        }

        // Test d'une note invalide
        std::cout << "\n=== TEST D'UNE NOTE INVALIDE ===\n";

        try {
            e1.setNote1(25);
        }
        catch (const std::exception& e) {
            std::cerr << "Erreur detectee : "
                      << e.what() << '\n';
        }

        // Test du retrait
        std::cout << "\n=== RETRAIT DE BOB ===\n";

        f1.retirerEtudiant(&e2);
        f1.afficherTous();

        std::cout << "\nProgramme termine correctement.\n";
    }
    catch (const std::exception& e) {
        std::cerr << "Erreur generale : "
                  << e.what() << '\n';
        return 1;
    }

    return 0;
}
