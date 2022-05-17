#include "Boat.h"
#include<cstring>

using namespace std;

Boat::Boat()
{
	strcpy(Boat_name,"");
	strcpy(Boat_id,"");
	strcpy(Boat_type,"");
	capacity=0;
	
}

void Boat::setDetails(char bName[], char bId[], char bType[], int bCapacity) 

{
	strcpy(Boat_name, bName);
	strcpy(Boat_id, bId);
	strcpy(Boat_type, bType);
	capacity = bCapacity;
}

void Boat::displayBoatdetails()
{
	
}

void Boat::updateBoatdetails()
{
		
}

void Boat::deleteBoatdetails()
{
	
}

Boat::~Boat()
{
	
}
