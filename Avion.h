#ifndef AVION_H
#define AVION_H

#include <string>

using namespace std;
enum courrier { courtC, moyenC, longC};
enum classeA { premiere, affaires, economique};

class avion {
	private:
			string type ;
			int nombrePlaces;
			courrier rayon_action;
			classeA classe; 
	public:
		int getNombrePlaces () ; 
			
			
			

};
#endif
