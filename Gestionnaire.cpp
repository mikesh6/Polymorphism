#include "Gestionnaire.h"

vector<Usager *> Gestionnaire::obtenirUsagers() const
{
    return usagers_;
}

void Gestionnaire::afficherLesProfils() const
{
    // TODO
	// est ce que on doit  defrenecer le vecteur  ?
	 
	for (int i = 0; i < usagers_.size(); i++) {	 

			cout << "Usagers " << usagers_[i];
		}
}

double Gestionnaire::obtenirChiffreAffaires() const
{
    // complete not tested
	//polymoprhism, the method obternirTotalApayer is made 
	// virtual, therefore, the base class knows where to find 
	//this methods in the dervied classes 
	// the method has been defined for both classes (indicate polymorphism)
	double totalAPayer = 0;

	for(int i =0; i < usagers_.size(); i++){
		totalAPayer += usagers_[i]->obtenirTotalAPayer();
	}

	return totalAPayer;
}

void Gestionnaire::ajouterUsager(Usager *usager)
{
    // completed, Check if the this and the client are the same
	// if not the same then add the new Usager
	// add new usages, not sure if we need to verify
	// they are passsed by refrence in the main
	// is this correct ?? 
	// to be tested


	for (int i = 0; i < usagers_.size(); i++)
	{
		if (this->usagers_[i] != usager)
			usagers_.push_back(new Usager(*usager));
	}
	
}

void Gestionnaire::reinitialiser()
{
    // Missing: reinitialiser in both daughter classes
	// method in usager is virtual
	// this method needs to be completed with the specifications
	// in the dervied classes to match the requirements
	// vider panier


	for (int i = 0; i < usagers_.size(); i++) {

		usagers_[i]->reinitialiser();
		
	}

}

void Gestionnaire::encherir(Client *client, ProduitAuxEncheres *produit, double montant) const
{
    // Produit aux enchers is composed of of usager
	// prouit aux encher inherits from produit
	// client has products 
	// client is a user
	// i didnt udnerstand anything, we just had to use 
	// this methods

	
	if ( montant > produit->obtenirPrix()) {
		
		produit->mettreAJourEnchere(client, montant);
	}




}
