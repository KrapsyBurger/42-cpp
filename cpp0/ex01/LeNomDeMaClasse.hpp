#include <iostream>

class nomdemaclasse
{
	/*
	private : acces que a l'interieur de la classe
	(dans le fichier .cpp)
	public : peut etre accede de partout
	*/
	private:
		int a;
		std::string oui;
	public:
		nomdemaclasse(int b, std::string non);
		~nomdemaclasse();
		nomdemaclasse();
		int getInt();
		std::string getString();
};