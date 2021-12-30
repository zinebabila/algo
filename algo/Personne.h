#pragma once
#include <iostream>
#include <unordered_map>
using namespace std;
class Personne
{
private :
	string nom;
	string adresse;
	string num_tel;
public :
	Personne(string a, string b, string c);
	string recuperer(string nom, int choix);
};

