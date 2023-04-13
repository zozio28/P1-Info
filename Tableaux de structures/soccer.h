#ifndef __soccer_H_
#define __soccer_H_

typedef struct Joueur joueur;
typedef struct Equipe equipe;

void creationJoueur(joueur* j);
void afficherJoueur(joueur j);
void creationEquipe(equipe* e);
void afficherEquipe(equipe e);
joueur meilleurButeur(equipe e);
int compareEquipe(equipe e1,equipe e2);

#endif
