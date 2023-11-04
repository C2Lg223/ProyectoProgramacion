#include"ServicioClase.h"




string Servicio::NombreA(string categoria) {
	//Aviones comerciales
	if (categoria == "310") { return "Airbus A320"; }
	if (categoria == "747") { return "Boeing 747"; }
	if (categoria == "767") { return "Boeing 767"; }
	if (categoria == "777") { return "Boeing 777"; }
	if (categoria == "130") { return "Concorde"; }
	if (categoria == "850") { return "DC-8-50"; }
	//aviones de carga
	if (categoria == "A319") { return "AIRBUS 319"; }
	if (categoria == "A320") { return "AIRBUS 320"; }
	if (categoria == "A321") { return "AIRBUS 321"; }
	if (categoria == "A330") { return "AIRBUS 330"; }
	if (categoria == "A340") { return "AIRBUS 340"; }
	if (categoria == "B737") { return "BOEING 737"; }
	if (categoria == "B777") { return "BOEING 777"; }

	//aviones militares
	if (categoria == "M300") { return "AIRBUS 300-600"; }
	if (categoria == "M130") { return "ANTONOV"; }
}


int Servicio::Pasajeros(string categoria) {
	//aviones comerciales
	if (categoria == "310") { return 250; }
	if (categoria == "747") { return 470; }
	if (categoria == "767") { return 250; }
	if (categoria == "777") { return 375; }
	if (categoria == "130") { return 130; }
	if (categoria == "850") { return 145; }

	//aviones de Carga
	if (categoria == "A319") { return 156; }
	if (categoria == "A320") { return 220; }
	if (categoria == "A321") { return 220; }
	if (categoria == "A330") { return 335; } //iGUAL van de 293 a 335
	if (categoria == "A340") { return 419; }//iGUAL van de 261 a 419
	if (categoria == "B737") { return 215; }
	if (categoria == "B777") { return 550; }


}
//aviones Comerciales
int  Servicio::Rango(string categoria) {

	if (categoria == "310") { return  8300; }
	if (categoria == "747") { return  6700; }
	if (categoria == "767") { return 12300; }
	if (categoria == "777") { return  7450; }
	if (categoria == "130") { return  6400; }
	if (categoria == "850") { return 14000; }
}
string Servicio::ACarga(string categoria) {
	//******** AVIONES DE CARGA ************
	if (categoria == "A319") { return  "27.7"; }
	if (categoria == "A320") { return "37.40"; }
	if (categoria == "A321") { return "51.70"; }
	if (categoria == "A330") { return "158.4"; } //va de 132,4 a 158, 4 revisar
	if (categoria == "A340") { return "207.6"; } //va de 162.8 a 207.6
	if (categoria == "B737") { return  "52.5"; }
	if (categoria == "B777") { return   "653"; }//va de 162 a 653


	//---------AVIONES MILITARES------------
	if (categoria == "M300") { return "1400"; }
	if (categoria == "M130") { return "1300"; }
}
int Servicio::Velocidad(string categoria) {
	if (categoria == "310") { return  895; }
	if (categoria == "747") { return  980; }
	if (categoria == "767") { return  885; }
	if (categoria == "777") { return  980; }
	if (categoria == "130") { return 2200; }
	if (categoria == "850") { return  875; }
}

int Servicio::Precio(string categoria) {
	if (categoria == "310") { return 120; }
	if (categoria == "747") { return 200; }
	if (categoria == "767") { return 120; }
	if (categoria == "777") { return 180; }
	if (categoria == "130") { return 350; }
	if (categoria == "850") { return  80; }
}

string Servicio::Alcance(string categoria) {
	//******** AVIONES DE CARGA ************
	if (categoria == "A319") { return  "7.200"; }
	if (categoria == "A320") { return  "1.200"; } //va de 3.100 a 1.200
	if (categoria == "A321") { return  "5.600"; }
	if (categoria == "A330") { return "13.450"; } //va de 7.400 a 13.450
	if (categoria == "A340") { return "14.630"; }
	if (categoria == "B737") { return  "9.955"; }
	if (categoria == "B777") { return "17.370"; }


	//---------AVIONES MILITARES------------
	if (categoria == "M300") { return "46300"; }
	if (categoria == "M130") { return  "4000"; }
}

