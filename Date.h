#ifndef DATE_H
#define DATE_H

#include <string>

using namespace std;

class date {
	private:
			int jour;
			int mois;
			int annee;
	public:
			date();
			date(int, int, int);
			//~Vol();
			
			int getJour();
			int getMois();
			int getAnnee();
			
			string afficherDate();
			
			void setJour(int);
			void setMois(int);
			void setAnnee(int);
			
			
			

};
#endif
