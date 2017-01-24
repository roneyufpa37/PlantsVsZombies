#iFndef MOBILEGAMER_H
#define MOBILEGAMER_H
#include<iostream.h>

using std::string;

class MobileGamer
{
public:
	MobileGamer();
    MobileGamer(const string &)	;
	MobileGamer(const MobileGamer &);
   ~MobileGamer();
   void Messagebeggin()const;
   string getName();
   string getToughness();
   void setName(string);
   void setToughness(string);
private:
   string Name;
   string Toughness;
}