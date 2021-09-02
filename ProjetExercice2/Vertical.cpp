// But : Écrire un programme qui prend comme entrée un nombre de cinq chiffres. 
// Le programme vérifie qu'il y a bien 5 chiffres dans le nombre. Puis il affiche 
// le nombre verticalement
// Auteur : Charles-Auguste Vandette
// Date : 2021-09-01

#include<iostream>

void main() // Fonction principale (premier bloc d'instruction)
{
	setlocale(LC_ALL, "");

	int nombre1; // Déclaration de la variable à tester

	std::cout << "Veuillez entrer un entier à 5 chiffres : ";
	std::cin >> nombre1;
	// On demande à l'utilisateur d'entrer un nombre et il l'écrit

	if (nombre1 < 10000 || nombre1 > 99999) // On s'assure que le chiffre possède 5 chiffres et non 4 ou 6
	{
		std::cout << "Erreur, ce nombre ne contient pas 5 chiffres!";
		// Dans le cas d'une erreur, on l'indique à l'utilisateur
	}
	else // sinon : on affiche le résultat attendu
	{
		std::cout << (nombre1 / 10000) << std::endl; // Division pour obtenir le premier chiffre
		std::cout << (nombre1 / 1000) % 10 << std::endl; // Division + mod pour obtenir le second chiffre
		std::cout << (nombre1 / 100) % 10 << std::endl;
		std::cout << (nombre1 / 10) % 10 << std::endl;
		std::cout << (nombre1 % 10) << std::endl; // Mod pour obtenir le dernier chiffre
	}
}

//			Plan de test V.1
//		Essaie		Donnée		Résultat
//		no1			1234		"Erreur, ce nombre ne contient pas 5 chiffres!"
//		no2			123456		"Erreur, ce nombre ne contient pas 5 chiffres!"
//		no3			-1234		"Erreur, ce nombre ne contient pas 5 chiffres!"
//		no4			-123456		"Erreur, ce nombre ne contient pas 5 chiffres!"
//		no5			-12345		"Erreur, ce nombre ne contient pas 5 chiffres!"
//		no6			12345		1
//								2
//								3
//								4
//								5