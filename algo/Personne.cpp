#include "Personne.h"

Personne::Personne(string a, string b, string c)
{
	this->nom = a;
	this->adresse = b;
	this->num_tel = c;
}

string Personne::recuperer(string nom, int choix)
{
	if (choix == 1) {
		if (nom == this->nom)
			return this->adresse;
	}
	if (choix == 2) {
		if (nom == this->nom)
			return this->num_tel;
	}
	return "";
}
