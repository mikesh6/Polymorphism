#include "ClientPremium.h"
#include <iostream>

ClientPremium::ClientPremium(unsigned int joursRestants)
    : Client(),
      joursRestants_(joursRestants)
{
}

ClientPremium::ClientPremium(const string &nom, const string &prenom, int identifiant,
                             const string &codePostal, unsigned int codeClient,
                             unsigned int joursRestants)
    : Client(nom, prenom, identifiant, codePostal, codeClient),
      joursRestants_(joursRestants)
{
}

unsigned int ClientPremium::obtenirJoursRestants() const
{
    return joursRestants_;
}

double ClientPremium::obtenirTotalAPayer() const
{
    

	Usager::obtenirTotalAPayer();
	double totalAPayer = 0;
	for (int i = 0; i < panier_.size(); i++) {
		
		if (panier_[i]->obtenirPrix() < 5) {

			totalAPayer += 0; // discount
			
		 }

		else {

			totalAPayer += panier_[i]->obtenirPrix() - 5;

		}

	}

	return totalAPayer;


}

void ClientPremium::afficherProfil() const
{

	Usager::afficherProfil();
	cout << joursRestants_;

}

void ClientPremium::modifierJoursRestants(unsigned int joursRestants)
{
    joursRestants_ = joursRestants_;
}
