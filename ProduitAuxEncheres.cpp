#include "ProduitAuxEncheres.h"

ProduitAuxEncheres::ProduitAuxEncheres(double prix)
    : Produit(),
      prixInitial_(prix),
      encherisseur_(nullptr)
{
}

ProduitAuxEncheres::ProduitAuxEncheres(Fournisseur *fournisseur, const string &nom,
                                       int reference, double prix)
    : Produit(fournisseur, nom, reference, prix),
      prixInitial_(prix),
      encherisseur_(nullptr)
{
}

double ProduitAuxEncheres::obtenirPrixInitial() const
{
    return prixInitial_;
}

Client *ProduitAuxEncheres::obtenirEncherisseur() const
{
    return encherisseur_;
}

void ProduitAuxEncheres::afficher() const
{

	Produit::afficher();
    // TODO
}

void ProduitAuxEncheres::modifierPrixInitial(double prixInitial)
{
    prixInitial_ = prixInitial;
}

void ProduitAuxEncheres::mettreAJourEnchere(Client *encherisseur, double nouveauPrix)
{
    // TODO
	if (this->obtenirEncherisseur() != encherisseur) {

	

		//this->encherisseur_->enleverProduit(encherisseur_);
		this->modifierPrix(nouveauPrix);
		this->modifierEncherisseur(encherisseur);	
		encherisseur->ajouterProduit(this);
		

	}


		

}

void ProduitAuxEncheres::modifierEncherisseur(Client * encherisseur)
{
	encherisseur_ = encherisseur;
}
