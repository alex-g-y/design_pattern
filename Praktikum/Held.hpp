#pragma once 
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Held
{

    
    protected:
        int lebenspunkte_;
        int mana_;
        std::vector<std::string> ausruestung_;

    
   
    public:

       Held();
       Held(int, int);
       virtual ~Held() = default;

       virtual  int lebenspunkte() const;
       virtual  int mana() const ;
       virtual  std::vector<std::string> ausruestung() const ;
       virtual void displayEigenschaften() const;
    

        //void addAusruestung(std::string);
         
    
};