#ifndef __soccer_H_
#define __soccer_H_

typedef struct Joueur joueur;
typedef struct Equipe equipe;

struct Joueur{
  char* nom;
  char* prenom;
  char* poste;
  int num;
  int age;
  int nbButs;
};

struct Equipe{
  char* nom;
  char* pays;
  char* championnat;
  int classement;
  int nbjoueurs;
  joueur mesJoueurs[3];
};

void creationJoueur(joueur** j);
void afficherJoueur(joueur j);
void creationEquipe(equipe** e);
void afficherEquipe(equipe e);
joueur* meilleurButeur(equipe e);
int compareEquipe(equipe e1,equipe e2);
void ajouterJoueur(equipe* e, joueur* j);

#endif
