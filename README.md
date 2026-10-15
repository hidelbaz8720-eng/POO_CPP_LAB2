# TP 2 : Maîtriser l'Encapsulation en C++

##  Présentation du projet

Ce projet est réalisé dans le cadre de la formation **Programmation Orientée Objet (POO) en C++** sur la plateforme MLIAEdu.

L'objectif principal est de maîtriser le principe d'encapsulation en C++, de protéger les données des classes et de mettre en place des associations entre objets, tout en assurant la cohérence et la robustesse du programme.



##  Technologies utilisées

- **Langage :** C++
- **Concepts :** Programmation Orientée Objet, encapsulation et associations
- **Bibliothèque standard :** STL (`vector`, `string`, `stdexcept`, etc.)
- **Environnement :** Visual Studio Code ou tout compilateur C++ compatible


*Remarque : cette structure est un exemple. Adapte les noms des fichiers à ceux réellement présents dans ton projet.*

##  Fonctionnalités principales

### 1. Classe `Etudiant`
- Stockage des informations de l'étudiant.
- Protection des attributs grâce à l'encapsulation.
- Accès aux données via des getters et setters.
- Vérification de la validité des notes.

### 2. Classe `Filiere`
- Gestion des informations de la filière.
- Association entre un étudiant et sa filière.
- Inscription et gestion de plusieurs étudiants.
- Prévention des inscriptions en double.

### 3. Gestion des erreurs
- Vérification des pointeurs nuls (`nullptr`).
- Détection des étudiants déjà inscrits.
- Prévention de l'inscription d'un étudiant dans plusieurs filières.
- Utilisation des exceptions avec `std::invalid_argument` et `std::runtime_error`.

## Tests réalisés

Les tests permettent de vérifier le fonctionnement des classes, les associations entre objets, la gestion des inscriptions et le traitement des erreurs.



#### Test 1 — Classe `Etudiant`

Vérification de la création d'un étudiant, de ses attributs et de l'encapsulation.
<img width="1366" height="768" alt="test1" src="https://github.com/user-attachments/assets/d61b4e37-4fb0-44e7-993b-d51b885b1657" />


> **À ajouter :** capture d'écran du premier test.

#### Test 2 — Association Étudiant–Filière (1-1)

<img width="1366" height="768" alt="test_1-1" src="https://github.com/user-attachments/assets/0bd58af3-ffa6-4489-b929-4d791b89cfe1" />


#### Test 3 — Filière et liste d'étudiants (1-N)

Vérification de l'inscription et de la gestion de plusieurs étudiants dans une même filière.
<img width="1366" height="768" alt="test_1-N" src="https://github.com/user-attachments/assets/2fd17b45-17f8-4858-8ceb-051b52749c57" />


Vérification du traitement des pointeurs nuls, des inscriptions en double et des étudiants déjà affectés à une autre filière.

<img width="1366" height="768" alt="test_final" src="https://github.com/user-attachments/assets/c25ee525-e0e5-4116-84a3-e455758d557c" />


## Compilation et exécution

Si les fichiers `.cpp` sont organisés comme dans la structure proposée, utilise les commandes suivantes avec un compilateur compatible avec C++11 ou une version plus récente.



*Adapte la commande de compilation si ton projet possède d'autres fichiers source.*

## Résultats attendus

- Les classes respectent le principe d'encapsulation.
- Les associations entre étudiants et filières fonctionnent correctement.
- Les inscriptions valides sont acceptées.
- Les doublons et les associations invalides sont détectés.
- Les erreurs sont traitées proprement grâce aux exceptions.

## Conclusion

Ce TP m'a permis de renforcer mes connaissances en programmation orientée objet avec C++, notamment en matière d'encapsulation, d'associations entre objets, de validation des données et de gestion des erreurs.

Il constitue une étape importante dans l'apprentissage de la conception de programmes C++ structurés, fiables et maintenables.


**Formation :** Programmation Orientée Objet — C++  
**Plateforme pédagogique :** MLIAEdu  
**Auteur :** Hamza ID EL BAZ
