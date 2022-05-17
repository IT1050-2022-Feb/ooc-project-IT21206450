#include<iostream>
#include<cstring>
#include "Boatdriver.h"

#define SIZE 10

class Boat
	{
		protected:
			  char Boat_name[20];
		    char Boat_id[5];
		    char Boat_type[20];
		    int capacity;

        Boatdriver * boatdriver[SIZE]
			
		public:
			Boat();
			Boat(const char bName[],const char bId[],const char bType[], int bCapacity);
			void updateboatdetails();
			void displayBoatdetails();
			void deleteBoatdetails();
			~Boat();
				
	};