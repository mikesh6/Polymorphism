#include "Usager.h"
#include <iostream>

Usager::Usager(const string &nom, const string &prenom, int identifiant,
               const string &codePostal)
    : nom_(nom),
      prenom_(prenom),
      identifiant_(identifiant),
      codePostal_(codePostal)
{
}

string Usager::obtenirNom() const
{
    return nom_;
}

string Usager::obtenirPrenom() const
{
    return prenom_;
}

int Usager::obtenirIdentifiant() const
{
    return identifiant_;
}

string Usager::obtenirCodePostal() const
{
    return codePostal_;
}

double Usager::obtenirTotalAPayer() const
{
	cout << "Calulcating $$$" << endl;
	return  0 ; // what do we return ?
	
}

void Usager::afficherProfil() const
{
    // need to be tested
	// print the attributets that are general 
	// to all types of users
	// and call the afficherProfil() for child
	// to print the different parameters


	
	cout << nom_ << "   "  << prenom_ << "   ("  << identifiant_ << ")   " << endl;
	cout << "               Code postal : " << codePostal_ << endl;	
	


	
}

void Usager::modifierNom(const string &nom)
{
    nom_ = nom;
}

void Usager::modifierPrenom(const string &prenom)
{
    prenom_ = prenom;
}

void Usager::modifierIdentifiant(int identifiant)
{
    identifiant_ = identifiant;
}

void Usager::modifierCodePostal(const string &codePostal)
{
    codePostal_ = codePostal;
}

void Usager::reinitialiser()
{
	// empty the panier of client

	

}

void Usager::ajouterProduit(Produit * produit)
{
}

void Usager::enleverProduit(Produit * produit)
{
}
