#ifndef VOL_H
#define VOL_H

#include <string>

using namespace std;

class Vol {
	protected:
			int nbVol;
			string destination;
			int date;
			int nbTotalReservation;
	public:
			//Vol();
			Vol(int, string, int, int);
			~Vol();
			
			int getnbVol();
			string getDestination();
			int getDate();
			int getnbTotalReservation();
			
			void setnbVol(int);
			
			void setDestination(string);
			
			void setDate(int);
			void setnbTotalReservation(int);
			
			string afficherVol();
};
#endif
