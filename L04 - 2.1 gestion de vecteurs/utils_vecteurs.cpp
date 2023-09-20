#include <iostream>
#include <conio.h>
#include <vector>
#include "utils_vecteurs.h";
#include <math.h>

using namespace std;

void AfficherVecteur(vector <Position_s> Vector)
{
	cout << "[";
	for (int i = 0; i < Vector.size(); i++)
	{
		if (i < Vector.size() - 1)
		{
			cout << "(" << Vector[i].x << ", " << Vector[i].y << ", " << Vector[i].z << "), ";
		}
		else if (i < Vector.size())
		{
			cout << "(" << Vector[i].x << ", " << Vector[i].y << ", " << Vector[i].z << ")]";
		}
	}
}

double DistanceEntre2Positions(vector <Position_s> Vector) // POSITION 3D: SQ ROOT OF SUM OF EACH POINT*POINT 
{
	

	double DistanceX = Vector[1].x - Vector[0].x;
	double DistanceY = Vector[1].y - Vector[0].y;
	double DistanceZ = Vector[1].z - Vector[0].z;

	return sqrt(pow(DistanceX, 2) + pow(DistanceY, 2) + pow(DistanceZ, 2));
}

vector <Position_s> PositionsCommunes(vector <Position_s> Vector1, vector <Position_s> Vector2) // ?? comparer x y z au meme temps ou non
{
	vector <Position_s> Vector3;

	for (int i = 0; i < Vector1.size(); i++) // vector 1
	{
		for (int k = 0; k < Vector2.size(); k++) // vector 2
		{
			if (Vector1[i].x == Vector2[k].x && Vector1[i].y == Vector2[k].y && Vector1[i].z == Vector2[k].z)
			{
				Vector3.push_back(Vector1[i]);
			}
		}
	}

	return Vector3;
}

vector <Position_s> AjoutVecteur(vector <Position_s> Vector1, vector <Position_s> Vector2)
{
	vector <Position_s> Vector3;

	for (int i = 0; i < Vector1.size(); i++) // vector 1
	{
		Vector3.push_back(Vector1[i]);
	}

	for (int k = 0; k < Vector2.size(); k++) // vector 2
	{
		Vector3.push_back(Vector2[k]);
	}

	return Vector3;
}