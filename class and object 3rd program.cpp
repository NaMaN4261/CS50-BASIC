#include <iostream>
#include <string.h>
using namespace std;

class Fruits{
public:
       int weight;
       string color;
       int number;
};
int main(){
	
Fruits mango;
mango.color="yellow";
mango.number=56459;
mango.weight=15;

//these color name weight are the propertiesthat canbe accessible ny the object 



Fruits apple;
apple.color="red";
apple.number=5659;
apple.weight=2;
/*In simple terms these are the properties that can be accessible by the objects that are inn the defined object*/

//here we use more than one object


cout << "COLOR "<<mango.color<<"  NUMBER "<<mango.number<<"  WEIGHT "<<mango.weight<<endl;
cout << "COLOR "<<apple.color<<"  NUMBER "<<apple.number<<"  WEIGHT "<<apple.weight<<endl;

}


