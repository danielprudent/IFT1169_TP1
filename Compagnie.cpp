#include <Compagnie.h>
/*ol::Vol(int nbVol, string destination, int date, int nbTotalReservation){
	this->setnbVol(nbVol);
	this->destination = destination;
	this->setDate(date);
	this ->setnbTotalReservation(nbTotalReservation);
}
*/
	Compagnie(string nom){
		this->nom = nom; 
		liste = this->chargerVols();
		
		
	};
	
	/* le constructeur qui permet d�initialiser le nom de la compagnie. De plus, le constructeur par appel � une 
fonction chargerVols() va faire l�ouverture et la lecture du fichier (Cie Air Relax.txt situ� dans 
Studium) de fa�on � cr�er des instances des classes de sp�cialisation mais la liste est une liste de Vol, la 
g�n�ralisation. Le fichier Cie Air Relax.txt est d�j� tri� par les num�ros de vol. Le parcours se fait par un 
pointer comme par exemple Vol *p  */
