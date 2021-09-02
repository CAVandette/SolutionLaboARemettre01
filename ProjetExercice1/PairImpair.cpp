// But : Écrire un programme qui lit un entier et qui détermine et affiche 
// s’il s’agit d’un entier pair ou d’un entier impair.
// Auteur : Charles-Auguste Vandette
// Date : 2021-09-01

#include<iostream>

void main() // Fonction principale (Premier bloc d'instruction)
{
	setlocale(LC_ALL, "");

	int nombre1; // Déclaration d'une variable de type int (entier)

	std::cout << "Veuillez entrer un nombre entier pour tester la parité : ";
	std::cin >> nombre1;
	// On demande à l'utilisateur d'entrer un nombre entier

	std::cout << std::endl;
	// On saute une ligne

	if (nombre1 % 2 == 0) // Si le résultat de nombre1 mod 2 est égale à 0, le nomlbre est pair
	{
		std::cout << "Ce nombre est pair" << std::endl;
	}
	else // Sinon, il est impair
	{
		std::cout << "Ce nombre est impair" << std::endl;
	}
}

//			Plan de test V.1
//		Essaie		Donnée		Résultat
//		no1			0			"Ce nombre est pair"
//		no2			1			"Ce nombre est impair"
//		no3			-1			"Ce nombre est impair"
//		no4			10			"Ce nombre est pair"
//		no5			11			"Ce nombre est impair"
//		no6			125			"Ce nombre est impair"
//		no7			-150		"Ce nombre est pair"