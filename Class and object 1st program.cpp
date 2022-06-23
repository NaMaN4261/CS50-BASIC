#include <iostream>
#include <string>
using namespace std;

class CAR{//class is used to define the user defined datatype and CAR is a datatype
/*In simple terms we can say that the CAR is the template under which we write the object and that objects have some property which would be the members of the CAR class*/
public://public is used to specify that the members that we use in the class can accessible to the outer part of the class
	string name;
	string color;/*these name color and weight are the attributes of the CAR datatype that tell use what are things would be consider to be datatype*/
	int weight ;
};

int main(){
	CAR audi;//here audi is an object of CAR datatype
	audi.name="audi R8";
	//Thes things are just like in char datatype we use the propertieslike char.upper but here we are providing the values to the properties of CAR object
	
	audi.color="red";//These are the properties class that the audi can access due to public specifier
	audi.weight=2;
	
	
	cout << "Name:"<<audi.name<<endl;
	cout <<"Color:"<<audi.color<<endl;
	cout << "weight:"<<audi.weight<< endl;
}
