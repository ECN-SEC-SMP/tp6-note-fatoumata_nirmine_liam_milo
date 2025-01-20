#ifndef joueur_hpp
#define joueur_hpp

#include <stdexcept>
#include <string>
#include <iostream>

using namespace std;

class Joueur{
    private :
        bool faillite;
        string nom;
        int solde;
        int position;
        int nb_cartes_liberte;
        bool en_prison;

    public : 
    
        Joueur(bool faillite, string nom, int solde, int position, int nb_cartes_liberte, bool en_prison);
        //getter setter
        bool getFaillite() const;
        void setFaillite(bool faillite);
        string getNom() const;
        void setNom(string nom);
        int getSolde() const;
        void setSolde(int solde);
        int getPosition() const;
        void setPosition(int position);
        int getNbCartesLiberte() const;
        void setNbCartesLiberte(int nb_cartes_liberte);
        bool getEnPrison() const;
        void setEnPrison(bool en_prison);
        void jouerTour();
        bool estEnFaillite() const;
        void contruire( case& case);
        int* lancer_des(void);
        
        

};

#endif // joueur_hpp

