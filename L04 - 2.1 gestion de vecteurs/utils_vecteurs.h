#ifndef UTILS_VECTEURS_H

#define UTILS_VECTEURS_H

#include <iostream>
#include <vector>

using namespace std; 


struct Position_s
{
	float x;
	float y;
	float z;
};

void AfficherVecteur(vector <Position_s> Vector);

double DistanceEntre2Positions(vector <Position_s> Vector);

vector <Position_s> PositionsCommunes(vector <Position_s> Vector1, vector <Position_s> Vector2);

vector <Position_s> AjoutVecteur(vector <Position_s> Vector1, vector <Position_s> Vector2);



#endif
