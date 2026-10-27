//
// Created by nyenn on 25.10.2026.
//
#include <iostream>
#include <vector>
#include <memory>

class Held{
public:
    virtual int lebenspunkte() const = 0;
    virtual int mana() const = 0;
    virtual std::vector<std::string> ausruestung() const = 0;
    virtual ~Held() = default;
};

class HeldDekorator : public Held{
protected:
    // eine sammlung von Held
    ///werde nachher smartpointer werden.
    std::shared_ptr<Held> held;
public:
     // contructor
     explicit HeldDekorator(std::shared_ptr<Held> basisHeld ): held(basisHeld){}

     int lebenspunkte() const override{
         return held->lebenspunkte();
     }
     int mana() const override{
         return held->mana();
     }
     std::vector<std::string> ausruestung() const override{
         return held->ausruestung();
     };
};
/// Konkrete Klassen
class Ritter: public Held{
public:

    int lebenspunkte() const override{
        int punkt = 10;
        return punkt;
    }
    int mana() const override{
        int m = 0;
        return m;
    }
    std::vector<std::string> ausruestung() const override{
        std::vector<std::string> items;
        items.push_back("100 Gold");
        return items;
    }
};

class Magier: public Held{
public:
    int lebenspunkte() const override{
       int punkt = 5;
        return punkt;
    }
    int mana() const override{
        int m = 1;
        return m;
    }
    std::vector<std::string> ausruestung() const override{
        std::vector<std::string> items;
        items.push_back("Rune der Teleportation");
        return items;
    }
};
// this belongs
class Schwert: public HeldDekorator {
public:
    explicit Schwert(std::shared_ptr<Held> basisHeld) : HeldDekorator(std::move (basisHeld)) {}
    // füge ich ”Exkalibur” zue AUsruestung
    std::vector<std::string> ausruestung() const override{
        std::vector<std::string> items = held->ausruestung();
        items.push_back("Exkalibur");
        return items;
    }
};

class Ruestung : public HeldDekorator{
public:
    explicit Ruestung(std::shared_ptr<Held> basisHeld)
     : HeldDekorator(std::move(basisHeld)){}

     std::vector<std::string> ausruestung() const override{
        std::vector<std::string> items = held->ausruestung();
        items.push_back("Metallruestung");
        return items;
    }
    int lebenspunkte() const override{
        return held->lebenspunkte() + 3;
    }

};

class MagischerRing : public HeldDekorator{
public:

    explicit MagischerRing(std::shared_ptr<Held> basisHeld): HeldDekorator(std::move(basisHeld)){}

    std::vector<std::string> ausruestung() const override {
        std::vector<std::string> items = held->ausruestung();
        items.push_back("Magischer Ring");
        return items;
    }
     int lebenspunkte() const override{
        return held->lebenspunkte() + 2;
    }
    int mana() const override{
        return held->mana() + 2;
    }
};


int main(){
    //Ritter
   std::shared_ptr<Held> ritter = std::make_shared<Ritter>();
   ritter = std::make_shared<Ruestung>(ritter);
   ritter = std::make_shared<Schwert>(ritter);

   //Auggabe
   std::cout <<"--Ritter--" <<std::endl;
   std::cout << "Lebenspunkte : " << ritter->lebenspunkte() << std::endl ;
   std::cout << "Mana : " <<ritter->mana() << std::endl ;
   std::cout << "Gegenstaende : " ;
    for ( const std::string& s : ritter->ausruestung())
    {
        std::cout << " " << s ;
    }
    std::cout <<std::endl << std::endl;

    //Magier
    std::shared_ptr<Held> magier = std::make_shared<Magier>();
    magier = std::make_shared<MagischerRing>(magier);
    //Ausgabe
    std::cout <<"--Magier--" <<std::endl;
    std::cout << "Lebenspunkte : " << magier->lebenspunkte() << std::endl ;
    std::cout << "Mana : " <<magier->mana() << std::endl ;
    std::cout << "Gegenstaende : " ;
    for ( const std::string& s : magier->ausruestung())
    {
        std::cout << " " << s ;
    }
    std::cout <<std::endl << std::endl;

}