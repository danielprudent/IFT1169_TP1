#ifndef VOLCHARTER
#define VOLCHARTER
#include"Vol.h"
#include <string>
//include date.h et avion.h
#include "Avion.h"
#include "Date.h"

using namespace std;


	class VolCharter {

				
				public :
					Avion typeAvion;
					bool repas; 
					bool resSiege;
					bool bar;
					bool divertissement;
					bool wifi;
					bool systemePayant;
					bool priseAlimentation; 
					
		
	};
	#endif
