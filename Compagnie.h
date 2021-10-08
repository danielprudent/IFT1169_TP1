
#ifndef VOLCOMPAGNIE
#define VOLCOMPAGNIE

#include <string>
//include date.h et avion.h
#include "avion.h"
#include "date.h"

using namespace std;
#include <iostream>
	
	class Compagnie {
		
		private :
			string nom;
			Liste vols;
			
			
		public :	
			Compagnie(string, Liste);
			
			void chargerVols();

			
	}; 



