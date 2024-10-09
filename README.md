<div align = center>


# **ChantierPlusPlus**
![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)



<img src="assets/chantierplusplusbanniere.webp" width="100%" height="30%" alt="fg logo">

</div>


Bienvenue dans **ChantierPlusPlus**, un projet de TP noté en C++.

## Objectif du projet

Le but de **ChantierPlusPlus** est d'apprendre les bases de la programmation objet, et de se familiariser avec.

### Fonctionnalités à implémenter :

1. **Ouvrier**  
   - Créer une classe `Ouvrier` représentant un travailleur sur le chantier.  
   - Attributs à inclure : `int compteur`, `boolean disponible`,`int id`
   - Méthodes à implémenter : `constructeur()`, `travailler()`, getter et setter.

2. **Chef**  
   - Créer une classe `CHef` représentant un chef sur le chantier et qui hérite de `Ouvrier`. 
   - Attributs à inclure : `int compteur`, `boolean disponible`,`int id`
   - Méthodes à implémenter : `constructeur()`, `travailler()`, getter, setter, et `ajouter(Ouvrier)`

3. **Adresse**  
   - Créer une classe `Adresse` représentant une adresse.  
   - Attributs à inclure : `string nom`, `double latitude`, `double longitude`
   - Méthodes à implémenter : Getter, setter et `toStream(ostream stream)`

4. **IndisponibleException**  
   - Une expetion si l'ouvrier n'est pas disponible

## Prérequis

Pour exécuter le projet, assurez-vous d'avoir un compilateur C++ installé :

- **Linux** : Installez `gcc` avec `sudo pacman -S gcc`. 
- **Windows** : Utilisez `MinGW` ou un IDE comme Visual Studio.
- **Mac** : Installez `Xcode` ou utilisez `Homebrew` pour installer `g++`.

## Installation

1. Clonez le dépôt ou téléchargez le fichier zip :
   ```bash
   git clone https://github.com/hodindorian/ChantierPlusPlus.git
   ```
2. Compilez le projet dans le dossier `src`: 
   ```bash
   g++ -Wall -o chantierplusplus main.cpp
   ```
3. Exécutez l'application : 
   ```bash
   ./chantierplusplus
   ```
## Structure du projet :
```bash
    src                                 #dossier source du projet
     ├── Autres                         #dossier Autres
     │    ├── adresse.cpp               #cpp de la classe adresse
     │    ├── adresse.hpp               #hpp de la classe adresse
     │    └── indisponibleException.cpp #exception si ouvrier indisponible
     ├── Chef                           #dossier Chef
     │    ├── chef.cpp                  #cpp de la classe chef
     │    └── chef.hpp                  #hpp de la classe chef
     ├── Ouvrier                        #dossier Ouvrier
     │    ├── ouvrier.cpp               #cpp de la classe ouvrier
     │    └── ouvrier.hpp               #hpp de la classe ouvrier  
     ├── chantierplusplus               #application ChantierPlusPlus
     └── main.cpp                       #main de l'application
```
       
## Auteur

Projet réalisé par Dorian HODIN dans le cadre du TP noté de C++ - ChantierPlusPlus.

- Dorian HODIN : dorian.hodin@etu.uca.fr

<div align="center">
<a href = "https://github.com/hodindorian">
<img src="https://avatars.githubusercontent.com/u/87948099?v=4" width="50" >
</a>
</div>