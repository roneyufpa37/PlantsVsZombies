#include <iostream>
#include "Zombies.h"
#include "Data.h"

using std::cout;
using std::endl;
using std::string;


int main()
{
    Zombies z;
    Data d1 (1,2,2017);
    
    cout << "Numero total de Zumbis" << z.getName() << endl;
    cout << d1 << endl;
	return 0;
}
