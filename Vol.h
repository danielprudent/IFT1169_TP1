#ifndef VOL_H
#define VOL_H

#include <string>
//include date.h et avion.h
#include "avion.h"
#include "date.h"

using namespace std;

class vol {
	protected:
			int numVol;
			string destination;
			date dateDepart;
			avion a; //??????? a voir avec le charge de lab
			int nbTotalReservation;
	public:
			//Vol();
			vol(int, string, date, avion, int);
		
			int getNumVol();
			string getDestination();
			date getDateDepart();
			avion getAvion();
			int getNbTotalReservation();
			
		
			void setDateDepart(date);
			void setNbTotalReservation(int);
			
			string afficherVol();
			
			

};
#endif
