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
	
	/* le constructeur qui permet d’initialiser le nom de la compagnie. De plus, le constructeur par appel à une 
fonction chargerVols() va faire l’ouverture et la lecture du fichier (Cie Air Relax.txt situé dans 
Studium) de façon à créer des instances des classes de spécialisation mais la liste est une liste de Vol, la 
généralisation. Le fichier Cie Air Relax.txt est déjà trié par les numéros de vol. Le parcours se fait par un 
pointer comme par exemple Vol *p  */
