#include <iostream>
#include <string.h>
using namespace std;

class car{
public:
	string Name;
	string Modelname;
	int Price;
	
	car(string name,string modelname,int price){
		Name = name;
		Modelname=modelname;
		Price=price;
	}
	void Getinfo(){
		cout << "Name: "<<Name<<endl;
		cout << "Modename: "<<Modelname<<endl;
		cout <<"Price: "<<Price<<endl;
		cout << endl;
	}
};
int main(){
	car obj("alto","20",29393);
	obj.Getinfo();
	car obj1("maruti","800",100000);
	obj1.Getinfo();
}
