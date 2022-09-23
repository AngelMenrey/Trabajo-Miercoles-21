//ANGEL EMANUEL MENDOZA REYES 
//PROGRAMACION ORIENTADA A OBJETOS
//PARCIAL 2
//LUIS MANUEL MORALES MEDINA
//TRABAJO MIERCOLES 21
#include <iostream> //SE INCLUYE LIBRERIAS
using namespace std;
class Date{
	//ATRIBUTOS DE LA CLASE DATE
		private:
				int day;
					int month;
						int year;
				//METODOS DE LA CLASE DATE
				public:
	  				 bool date();
};
 bool Date::date(){ // HACEMOS EL CONSTRUCTOR 
 	        int day,month,year;
 			cout<<"I ENTER THE DATE"<<endl;
			cout<<" ENTER THE DAY:"<<endl;
			cin>>day;
			cout<<"ENTER THE MONTH: "<<endl;
			cin>>month;
			cout<<"ENTER THE YEAR: "<<endl;
			cin>>year;
 		if (month>12 or day>31 or month<=0 or day<=0 or year<=0){
				cout<<"THE DATE IS NOT VALID"<<endl;
			return false;	
			}
			else {
			 cout<<"THE DATE IS VALID \n THE DATE IS : \n "<<year<<" / " <<month<< " / "<<day<<" / "<<endl;
			 if (year%4==0 and year%100!=0){
			cout<<"THE YEAR IS LEAP"<<endl;
			return true;
			} else{
				cout<<"THE YEAR IS NOT A LEAP YEAR"<<endl;
			 
			}
			 return true;
			 }
            
	
 }
int main (){
	Date fecha;
	fecha.date();
}
