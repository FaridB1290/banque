#include<iostream>
#include'compte.h'
Compte::Compte()
    {
        this->numCompte=0;
        this->nomProprietaire=
        this->solde=0.0;


    }
void Compte::consultersolde()
    {
        cout<<"le solde de compte est"<<solde<<"\n";
    }
bool Compte::retirerargent(double r )
    {
        bool a;
        if(r>solde)
            {
                a= false ;
            }
        else
            {
                solde=solde-r;
                a= true ;
            }
            return a;

    }
void Compte::deposerargent(double z)
        {
            solde=solde+z;
        }
void Compte::transfereargent(double a ,Compte c)
    {
        if(retirerargent(a)==true)
            {
                c.deposerargent(a);
            }
    {
        else
        {
            cout<<"tu ne peux pas ";
        }
    }

}
    