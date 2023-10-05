#ifndef PILE_H
#define PILE_H

typedef struct Element{
    int maFleche;
    struct Element* Suivant;
}Element;

typedef struct Element* pile;

enum fleche{
  ROUGE, VERTE, BLEUE
};

/* Auteur : Zoé */
/* Date : 05/10/23 */
/* Entrees : pile et une fleche */
/* Sorties : la pile */
/* Résumé : Ajouter une fleche à une pile */
pile* initialiser(int valeur);

/* Auteur : Zoé */
/* Date : 05/10/23 */
/* Entrees : la pile et la valeur d'une fleche */
/* Sorties : la pile */
/* Résumé : Empiler une fleche à une pile */
pile empiler (pile p, int valeur);

/* Auteur : Zoé */
/* Date : 05/10/23 */
/* Entrees : le pointeur d'une pile */
/* Sorties : la pile */
/* Résumé : Dépiler une fleche à une pile */
int depiler (pile* p);

/* Auteur : Zoé */
/* Date : 05/10/23 */
/* Entrees : la pile */
/* Sorties : la pile */
/* Résumé : Afficher une pile */
void afficherP(pile p);

/* Auteur : Zoé */
/* Date : 05/10/23 */
/* Entrees : la pile et un accumulateur*/
/* Sorties : le nombre d'éléments */
/* Résumé : Compter le nombre d'éléments dans une pile */
int compterP(pile p, int acc);

/* Auteur : Zoé */
/* Date : 05/10/23 */
/* Entrees : la pile p1*/
/* Sorties : la pile inversée */
/* Résumé : Inverse la pile prise en entrée */
pile inverserP(pile p1);

/* Auteur : Zoé */
/* Date : 05/10/23 */
/* Entrees : la pile p*/
/* Sorties : la pile doublée */
/* Résumé : Double la pile prise en entrée */
pile doublerP(pile p);
     
/* Auteur : Zoé */
/* Date : 05/10/23 */
/* Entrees : la pile p*/
/* Sorties : la pile vide */
/* Résumé : Vide la pile prise en entrée */
pile viderP (pile p);

#endif