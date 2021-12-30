// algo.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Personne.h"
#include "algo.h"
using namespace std;

int main()
{
	cout << "**************qst1***************\n";
	//qst1();
	cout << "**************qst2***************\n";
	//isPalindrome();
	cout << "**************qst3***************\n";
	//qst3();
	cout << "**************exercice2***************\n";
	cout << "**************qst2***************\n";
	//repertoire1();
	cout << "**************qst1***************\n";
	//repertoire2();



	cout << "**************exercice3***************\n";
	string nom;
	int choix;
	std::unordered_multimap<string,Personne> q;
	Personne p1("zineb", "mohmmadia", "05332567");
	
	Personne p2("houda", "casablanca", "0876543");
	q.insert(std::make_pair("zineb", p1));
	q.insert(std::make_pair("houda", p2));
	cout << "donner le nom\n";
	cin >> nom;
	cout << "donner le choix\n";
	cin >> choix;
	for (auto i : q) {
		if(i.second.recuperer(nom, choix)!="")
		cout << i.second.recuperer(nom, choix) << endl;
		
	}


    return 0;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
