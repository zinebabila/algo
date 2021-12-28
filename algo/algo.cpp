// algo.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <deque>
#include <string.h>
#include <list>
#include <algorithm>
#include <stack>
using namespace std;
void qst1() {
	string c;
	int a;
	deque<string> dec;
	list <string>lst;

	cout << "donner le nombre de mots saisi\n";
		cin >>a;
   cout << "donner des mots\n";

   for (int i = 0; i < a; i++) {
	   cin >> c;
	   dec.push_back(c);
   }

   for (auto c : dec)
	   lst.push_back(c);

  // lst.sort();
   sort(lst.begin(), lst.end());
   cout << "****************list trier*********************" << endl;
   for (auto c : lst)
	   cout << c << endl;
   
}

template<class T>
stack<T> Reverse_stack(stack<T> orj) {
	stack<T> St = new stack<T>();
	while (!orj.empty())
	{
		St->push(orj.top());
		orj.pop();
	}
	return St;
}
void isPalindrome()
{
	stack<char> phrase;
	stack<char> phrase1;
	char car_lu;
	do
	{
		cin >> car_lu;
		if (car_lu == '\n')break;
		phrase.push(car_lu);
	} while (getchar() != '\n');
	 phrase1 = Reverse_stack(phrase);
	if (phrase1 == phrase)
	{
		cout << "yes";
	}
	else {
		cout << "no";
	}
}
int main()
{
	cout << "**************qst1***************\n";
	qst1();
	cout << "**************qst2***************\n";
	isPalindrome();
    
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
