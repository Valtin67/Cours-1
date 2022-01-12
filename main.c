/*
Programme qui calcule le salaire à verser à un-e employé-e.

Auteur: Valentin Peter
Date: 11-01-2022
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double taux_horaire;
	unsigned int nb_heures;
	double salaire;

	//test avec un caractere

	char mon_caractere = 'A';

	printf("Le contenue de la variable mon_caractere est : %c\n", mon_caractere);
	printf("Le contenue de la variable mon_caractere est : %d\n", mon_caractere);

	//Affectation

	nb_heures = 100;

	//Demander le taux horaire
	printf("Saisir le taux horaire: ");
	scanf("%lf", &taux_horaire);

	//Demander le nombre d'heure
	printf("Saisir le nombre d'heure: ");
	scanf("%d", &nb_heures);

	//Calcul du salaire
	salaire = taux_horaire * nb_heures;

	//Afficher le salaire a payer
	printf("Le salaire a payer est : %.2lf\n", salaire);

	//Mettre le système en pause pour pouvoir lire l'information
	system("pause");

		return EXIT_SUCCESS;

}