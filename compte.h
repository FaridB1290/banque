
Class Compte{
    private :
                int numCompte;
                char *nomProprietaire;
                double solde;
    public :
                bool retirerargent(double r);
                void deposerargent(double z);
                void consultersolde();
                void transfereargent(double a ,Compte C);
                Compte(int numCompte,char *nomProprietaire,double solde);
            }