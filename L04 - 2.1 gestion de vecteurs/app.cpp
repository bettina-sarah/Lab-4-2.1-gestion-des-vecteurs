#include <iostream>
#include <conio.h>
#include <vector>
#include "utils_vecteurs.h";

using namespace std;

void main(void)
{
	vector <Position_s> Vecteur1 = { {1,2,3}, {4,5,6}, {7,8,9}, {11,22,33} };
	vector <Position_s> Vecteur2 = { {7,8,9}, {2,2,2}, {1,2,3} };
	
	//Distance entre 2eme elem Vecteur1 et 3eme elem Vecteur2 + afficher

	vector <Position_s> Vecteur3;

	Position_s Position;
	Position = Vecteur1[1];
	Vecteur3.push_back(Position);
	Position = Vecteur2[2];
	Vecteur3.push_back(Position);
	cout << DistanceEntre2Positions(Vecteur3) << "\n\n\n";
	AfficherVecteur(Vecteur3);

	//Afficher positions identiques entre vecteur 1 et vecteur 2
	cout << "\n\n\nPositions communes : ";
	AfficherVecteur(PositionsCommunes(Vecteur1, Vecteur2));


	cout << "\n\nAjout vecteur  : ";
	AfficherVecteur(AjoutVecteur(Vecteur1, Vecteur2));

}