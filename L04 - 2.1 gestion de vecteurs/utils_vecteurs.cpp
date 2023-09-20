#include <iostream>
#include <conio.h>
#include <vector>
#include "utils_vecteurs.h";

using namespace std;

struct Position_s
{
	float x;
	float y;
	float z;
};

void AfficherVector(vector <Position_s> Vector)
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

float DistanceEntre2Positions(vector <Position_s> Vector)
{
	float DistanceX = Vector[1].x - Vector[0].x;
	float DistanceY = Vector[1].y - Vector[0].y;
	float DistanceZ = Vector[1].z - Vector[0].z;

}