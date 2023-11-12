#include "Interfaz.h"
#include<iostream>

int Interfaz::menuPrincipal()
{
	int opc;
	system("cls");
	cout << "**************************** AEROPUERTO MENU ***************" << endl << endl;
	cout << "   (1). Ingresar" << endl;
	cout << "   (2). Mantenimiento " << endl;
	cout << "   (3). Reportes" << endl;
	cout << "   (4). Consulta" << endl;
	cout << "   (5). Salir" << endl;
	cout << "************************************************************" << endl << endl;
	cout << " Digitar una opcion" << endl;
	cin >> opc;
	return opc;
}




int Interfaz::menuIngresos(){
	int opc;
	system("cls");
	cout << "**************************** INGRESAR ******************************" << endl;
	cout << "(1). Avion " << endl;
	cout << "(2). Empleado" << endl;
	cout << "(3). Contrato " << endl;
	cout << "(4). Atras" << endl;
	cout << "********Digitar una opcion********" << endl;
	cin >> opc;
	return opc;
}


//*****************************************************************************************************************************************************
//                         INGRESOS EMPLEADOS 
int Interfaz::menuIngresoEmpleados()
{
	int opc;
	system("cls");
	cout << "**************************** INGRESAR EMPLEADO ******************************" << endl;
	cout << "(1). Piloto" << endl;
	cout << "(2). Copiloto " << endl;
	cout << "(3). Azafata " << endl;
	cout << "(4). Administrativos " << endl;
	cout << "(5). Miscelaneo" << endl;
	cout << "(6).Menu Anterior " << endl;
	cout << "********Digitar una opcion********" << endl;
	cin >> opc;
	return opc;
}


void Interfaz::ingresarPiloto(Aeropuerto* aero){
	Empleado* p = NULL;
	string ced, nom, ocu;
	int ed, aE;

	system("cls");
	cout << "-----------------INGRESAR UN PILOTO-----------------" << endl;
	cout << "Digite Cedula: " << endl;
	cin >> ced;
	cout << "Digite Nombre: " << endl;
	cin >> nom;
	cout << "Digite la Ocupacion: " << endl;
	cin >> ocu;
	cout << "Digite la Edad: " << endl;
	cin >> ed;
	cout << "Digite los Anios de Experiencia: " << endl;
	cin >> aE;
	cout << endl;

	p = new Piloto(ced, nom, ocu, ed, aE);
	aero->ingresarEmpleado(p);
	
}

void Interfaz::ingresaCopilotos(Aeropuerto* aero){
	string ced, nom, ocu, tel;
	int ed;
	Empleado* cop = nullptr;

	system("cls");

	cout << "----------INGRESAR UN COPILOTO--------------" << endl;
	cout << "Digite Cedula: " << endl;
	cin >> ced;
	cout << "Digite Nombre: " << endl;
	cin >> nom;
	cout << "Digite Ocupacion: " << endl;
	cin >> ocu;
	cout << "Digite Edad: " << endl;
	cin >> ed;
	cout << "Digite el Telefono: " << endl;
	cout << "--------------------------------------------" << endl;

	cop = new Copiloto(ced, nom, ocu, ed, tel);
	aero->ingresarEmpleado(cop);
}

void Interfaz::ingresaAzafata(Aeropuerto* aero){
	string ced, nom, ocu, nac;
	int ed;
	Empleado* az = nullptr;

	system("cls");
	cout << "------------INGRESAR UNA AZAFATA------------" << endl;
	cout << "Digite Cedula: " << endl;
	cin >> ced;
	cout << "Digite Nombre: " << endl;
	cin >> nom;
	cout << "Digite Ocupacion: " << endl;
	cin >> ocu;
	cout << "Digite Edad: " << endl;
	cin >> ed;
	cout << "Digite Nacionalidad: " << endl;
	cin >> nac;
	cout << "---------------------------------------------" << endl;

	az = new Azafata(ced, nom, ocu, ed, nac);
	aero->ingresarEmpleado(az);
}

void Interfaz::ingreasaAdministrativos(Aeropuerto* aero) {
	string tipAdmi, tit, ced, nom, ocu;
	int ed;
	Empleado* adm = nullptr;
	
	system("cls");
	cout << "------------INGRESAR UNA ADMINISTRATIVO------------" << endl;
	cout << "Digite Cedula: " << endl;
	cin >> ced;
	cout << "Digite Nombre: " << endl;
	cin >> nom;
	cout << "Digite Ocupacion: " << endl;
	cin >> ocu;
	cout << "Digite Edad: " << endl;
	cin >> ed;
	cout << "Digite Tipo Administrativo (Secretario, Recepcionista, etc): " << endl;
	cin >> ed;
	cout << "Digite Titulo Universitario: " << endl;
	cin >> tit;
	cout << "---------------------------------------------" << endl;
	adm = new Administrativa(tit, tipAdmi, ced, nom, ocu, ed);
	aero->ingresarEmpleado(adm);
}

void Interfaz::ingresaMiscelaneo(Aeropuerto* aero){
	int ed, escolaridad;
	string ced, nom, ocu, labor;
	Empleado* Mis = nullptr;

	system("cls");
	cout << "------------INGRESAR UNA ADMINISTRATIVO------------" << endl;
	cout << "Digite Cedula: " << endl;
	cin >> ced;
	cout << "Digite Nombre: " << endl;
	cin >> nom;
	cout << "Digite Ocupacion: " << endl;
	cin >> ocu;
	cout << "Digite Edad: " << endl;
	cin >> ed;
	cout << "Digite el Grado de Escolaridad: " << endl;
	cin >> escolaridad;
	cout << "Escriba el area donde Laboran: " << endl;
	cout << " 1. Area de Cargo" << endl << " 2. Area de Descarga" << endl << " 3. Aseo y ornato" << endl
		<< "4. Cuido en el edificio" << endl<<" 5. Pistas de aterrizaje" << endl << "6. Terminal " << endl;
	cin >> labor;
	cout << "---------------------------------------------" << endl;

	Mis = new Miscelaneos(escolaridad, labor, ced, nom, ocu, ed);
	aero->ingresarEmpleado(Mis);
}

//*****************************************************************************************************************************************************

//*****************************************************************************************************************************************************
//                           INGRESOS AERONAVES 

int Interfaz::MenuTiposAeronaves() {

	int opc;
	system("cls");
	cout << "............................................................" << endl;
	cout << ":              Ingresa Aviones                             : " << endl;
	cout << ":    1. Aviones Comerciales                                :" << endl;
	cout << ":    2. Aviones de Carga                                   :" << endl;
	cout << ":    3. Aviones Militares                                  :" << endl;
	cout << ":    4. Menu Anterior                                      :" << endl;
	cout << "............................................................" << endl << endl;
	cout << "Digite una opcion: ";
	cin >> opc;

	return opc;
}

void Interfaz::IngresarAvionComercial(Aeropuerto* aero) {
	string categ, pla, tipoAvio;
	int dia, mes, annio;
	Fecha* cre;
	double distar;
	Aeronaves* ae = nullptr;

	system("cls");
	cout << " ---------INGRESAR AVION COMERCIAL--------" << endl;
	cout << "  Ingrese la Categoria:  ";
	cin >> categ; cout << endl;
	cout << "  Ingrese la placa: ";
	cin >> pla; 
	cout << "\n Digite el tipo de avion  (PasilloUnico o DoblePasillo) " << endl;
	cin >> tipoAvio;
	cout << " Ingrese la fecha de Creacion: " << endl;
	cout << " Dia: ";
	cin >> dia;
	cout << " Mes: ";
	cin >> mes;
	cout << " Annio: ";
	cin >> annio;
	cout << "\n Ingrese la distancia Recorrida: ";
	cin >> distar;

	cre = new Fecha(dia, mes, annio);
    ae = new Comercial(categ, pla, tipoAvio, *cre, distar);
	aero->ingresarAeronave(ae);

}

void Interfaz::IngresarAvionesCargas(Aeropuerto* aero) {
	string categ, pla, tipoAvio;
	int dia, mes, annio;
	Fecha* cre;
	double distaR, anchoPuer, alturaPuer;
	Aeronaves* ae = nullptr;

	system("cls");
	cout << " ---------INGRESAR AVION DE CARGA--------" << endl << endl;
	cout << " Ingrese la Categoria:  ";
	cin >> categ; cout << endl;
	cout << "\n Digite el tipo de avion:  ( Escotilla y puerta lateral) )" << endl;
	cin >> tipoAvio;
	cout << " Ingrese la fecha de Creacion: " << endl;
	cout << "Dia: ";
	cin >> dia;
	cout << " Mes: ";
	cin >> mes;
	cout << " Annio: ";
	cin >> annio;
	cout << "\n Ingrese la distancia Recorrida: ";
	cin >> distaR;
	cout << "\n Ingrese el ancho de la puerta: ";
	cin >> anchoPuer;
	cout << "\n Ingrese la altura de la puerta: ";
	cin >> alturaPuer;
	cout << endl;

	cre = new Fecha(dia, mes, annio);
	ae = new Carga(categ, alturaPuer, anchoPuer, pla, tipoAvio, *cre, distaR);
	aero->ingresarAeronave(ae);

}

void Interfaz::IngresaAvionesMilitares(Aeropuerto* aero) {
	string categ, tipoAvio;
	int dia, mes, annio;
	Fecha* creacion;
	double distaR; 
	int veloc;
	Aeronaves* ae = nullptr;

	system(" cls");
	cout << " ---------INGRESAR AVION MILITAR --------" << endl;
	cout << "  Ingrese la Categoria:  ";
	cin >> categ; cout << endl;
	cout << " Escribe el tipo de avion: ";
	cout << tipoAvio; cout << endl;
	cout << " Digite la distancia recorrida: ";
	cin >> distaR;
	cout << "\n Digite la velocidad: ";
	cin >> veloc;
	cout << " Ingrese la fecha de Creacion del Avion: " << endl;
	cout << " Dia: ";
	cin >> dia;
	cout << "\n Mes: ";
	cin >> mes;
	cout << " \n Annio: ";
	cin >> annio;
	creacion = new Fecha(dia, mes, annio);
	if (aero->contarAeronave() == 15) {
		ae = new Militar(veloc, tipoAvio, categ, *creacion, distaR);
		aero->ingresarAeronave(ae);
	}
}
//*****************************************************************************************************************************************************





//-----------------------------------------------------------------------------------------------------------------------------------------------------
//Contratos Menu Principal y Ingresos 
int Interfaz::MenuTiposContratos() {
	int opc;

	system("cls");
	cout << "............................................................" << endl;
	cout << ":                Tipos Contratos                           :" << endl;
	cout << ":                                                          :" << endl;
	cout << ":       1. Contrato de servicio                            :" << endl;
	cout << ":       2. Plazo Fijo                                      :" << endl;
	cout << ":       3. Tiempo Intefinido                               :" << endl;
	cout << ":       4. Menu Anterio                                    :" << endl;
	cout << ":                                                          :" << endl;
	cout << "............................................................" << endl << endl;
	cout << "     Digite una opcio: ";
	cin >> opc;

	return opc;
}

void Interfaz::IngresarContratoServivio(Aeropuerto*) {

	system("cls");
	cout << " Completar esto " << endl;


}

void Interfaz::IngresarPlazoFijo(Aeropuerto*) {
	system("cls");
	cout << " Completar esto " << endl;

}

void Interfaz::IngresarTiempoIndefinido(Aeropuerto*) {
	system("cls");
	cout << " Completar esto " << endl;

}
//-----------------------------------------------------------------------------------------------------------------------------------------------------
// MANTENIMIENTO 

int Interfaz::menuMantenimiento() {
	int opc;
	system("cls");
	cout << "........................................................................" << endl;
	cout << ":                           Mantenimiento                              :" << endl;
	cout << ":                                                                      :" << endl;
	cout << ":                                                                      :" << endl;
	cout << ":                1. Empleado                                           :" << endl;
	cout << ":                2. Aeronaves                                          :" << endl;
	cout << ":                3. Contratos                                          :" << endl;
	cout << ":                4) Menu Anterior                                      :" << endl;
	cout << ":                                                                      :" << endl;
	cout << "........................................................................" << endl;            
    cout << "   Digitar una opcion: ";
	cin >> opc;
	return opc;
}

int Interfaz::menuMantEmpleado() {
	int opc;
	system("cls");
	cout << "2.Mantenimiento                               2.1 Empleados " << endl << endl;
	cout << " 1) Eliminar Empleado " << endl;
	cout << " 2) Modificar Datos " << endl;
	cout << " 3) Menu Anterior " << endl;
	cout << " Digitar una opcion: " << endl;
	cin >> opc;
	return opc;

}

void Interfaz::EliminarEmpleado(Aeropuerto* aer) {
	stringstream s;
	string ced;
	system("cls");
	cout << " Digite la cedula del Empleado que desea Eliminar: ";
	cin >> ced;
	aer->eliminarEmpleado(ced);
	if (aer->eliminarEmpleado(ced) == true) {
		s<<"El empleado ha sido eliminado";
	}
}
	

	

int Interfaz::menuMantAeronaves() {
	int opc;
	system("cls");
	cout << "..............................................................." << endl;
	cout << "2.Mantenimiento                               2.2 Aeronaves " << endl << endl;
	cout << " 1) Eliminar Aeronave " << endl;
	cout << " 2) Modificar Datos " << endl;
	cout << " 3) Menu Anterior " << endl;
	cout << "..............................................................." << endl << endl;
	cout << " Digitar una opcion: " << endl;
	cin >> opc;
	return opc;

}



int Interfaz::menuMantContratos() {
	int opc;
	system("cls");
	cout << "..............................................................." << endl;
	cout << " 2.Mantenimiento                               2.3 Contratos  " << endl << endl;
	cout << " 1) Eliminar Contrato " << endl;
	cout << " 2) Modificar Datos " << endl;
	cout << " 3) Menu Anterior " << endl;
	cout << "..............................................................." << endl << endl;
	cout << " Digitar una opcion: " << endl;
	cin >> opc;
	return opc;

}


void Interfaz::ModificarContrato(Aeropuerto* aer) {
	string puestto, cod;
	int salario;
	int opc, opc1;
	Contrato* ContratoAux = NULL;

	system("cls");
	cout << "Digite el codigo del Contrato : ";
	cin >> cod;
	ContratoAux = aer->getContenedorContrato()->busquedaPorCod(cod);
	if (ContratoAux != NULL) {
		cout << "Datos Actuales " << endl;
		cout << ContratoAux->toString();
		cout << " Digite: " << "\n 1. Modificar Datos" << "\n 2.Cancelar" << endl;
		cin >> opc1;

		if (opc1 == 1) {
			do {
				cout << "Modificar Datos del Contrato " << endl;
				cout << " 1. Puesto " << endl;
				cout << " 2. Salario " << endl;
				cout << " 3. Menu Anterior " << endl << endl;
				cout << " Digite una opcion: " << endl;
				cin >> opc;

				switch (opc) {
				case 1: cout << "Ingrese el puesto: ";
					cin >> puestto;
					ContratoAux->setPuesto(puestto);
					cout << " Mostar Informacion  Actualizada" << endl;
					cout << "----------------------------------" << endl;
					cout << ContratoAux->toString();
					break;
				case 2: cout << "Ingrese el Salario: ";
					cin >> salario;
					ContratoAux->setSalario(salario);
					cout << " Mostar Informacion  Actualizada" << endl;
					cout << "----------------------------------" << endl;
					cout << ContratoAux->toString();
					break;
				default:
					break;
				}
			} while (opc != 3);
			
		}
	}
}
	
void  Interfaz::ModificarEmple(Aeropuerto* aer) {
	int opc, opc1;
	string ced;
	string nombre, Ocupacion;
	int edad;
	Empleado* empleAux = NULL;

	system("cls");

	cout << "Digite la cedula del Empleado: ";
	cin >> ced;
	empleAux = aer->getContenedorEmpleados()->buscarConCedula(ced);
	if (empleAux != NULL) {
		cout << "Datos Actuales" << endl;
		cout << empleAux->toString();
		cout << " Digite: " << "\n 1. Modificar Datos" << "\n 2.Cancelar" << endl;
		cin >> opc1;
		system("pause"); 
		 if (opc1 == 1) {
				 cout << "Modificar Datos del Empleados " << endl;
				 cout << " 1. Nombre " << endl;
				 cout << " 2. Edad" << endl;
				 cout << " 3. Ocupacion " << endl;
				 cout << " 4. Atras " << endl << endl;
				 cout << " Digite una opcion: " << endl;
				 cin >> opc ;

				 switch (opc) {

				 case 1:
					 cout << " Ingrese el nombre: ";
					 cin >> nombre;
					 empleAux->setNombre(nombre);
					 cout << endl << endl;
					 cout << "Informacion Actualizada: " << endl;
					 cout << "-------------------------" << endl << endl;
					 cout << empleAux->toString();
					 break;
				 case 2:
					 cout << "Ingrese la edad: ";
					 cin >> edad;
					 empleAux->setEdad(edad);
					 cout << endl << endl;
					 cout << "Informacion Actualizada: " << endl;
					 cout << "-------------------------" << endl << endl;
					 cout << empleAux->toString();
					 break;
				 case 3:
					 cout << "Ingrese la Ocupacion: ";
					 cin >> Ocupacion;
					 empleAux->setOcupacion(Ocupacion);
					 cout << endl << endl;
					 cout << "Informacion Actualizada: " << endl;
					 cout << "-------------------------" << endl << endl;
					 cout << empleAux->toString();
					 break;
				 default:
					 break;
				 }

		}
	}
	

	
}

//Faltan metodo 



//******************************************************************************************************************
//                              REPORTES 
int Interfaz::menuReportes() {
	int opc;

	system("cls");
	cout << " <=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=>" << endl;
	cout << "                     3. REPORTES                                " << endl;
	cout << "  1.  Contratos con sus empleados " << endl;
	cout << "  2.  Aeronaves con su tripulación.  " << endl;
	cout << "  3.  Todas las Aeronaves " << endl;
	cout << "  4.  Pilotos de Aviones de Carga " << endl;
	cout << "  5.  Aviones con mas de 20 annios" << endl;
	cout << "  6.  Contratos de Servicios Profesionales " << endl;
	cout << "  7.  Contratos de Plazo Fijo " << endl;
	cout << "  8.  Contratos de Tiempo Indefinido" << endl;
	cout << "  9.  Tripulaciones de Aviones Comerciales " << endl;
	cout << " 10.  Contratos de Plazo Fijo excedidos " << endl;
	cout << " 11.  Avion de Carga con mayor area de acceso " << endl;
	cout << " 12.  Menu Anterior " << endl;
	cout << endl << endl;
	cout << " <=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=>" << endl;

	cout << "Digitar una opcion: " << endl;
	cin >> opc;
	return opc;

}
//opcion 1  REPORTES 
void Interfaz::MostrarContratos(Aeropuerto* aero) {

	cout<<" <=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=>" << endl;
	cout << "              Contratos los Empleado " << endl;
	aero->MostrarContratos();

}
//opcion 2  REPORTES

void Interfaz::ReportesAeronavesyTripula(Aeropuerto* aero) {

	cout << " <=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=>" << endl;
	cout << " Reportes de Aeronaves con su tripulacion " << endl; 
	aero->reporteAeronavesTripulacion();
}


//opcion 3 REPORTES
void Interfaz::MostrarAeronaves(Aeropuerto* aero) {
	cout << " <=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=>" << endl;
	cout << "      Mostrar todas las Aeronaves     " << endl;
	aero->MostrarAeronaves();
	cout << " <=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=>" << endl;
}

//opcion 4  REPORTES
void Interfaz::ReporteEmpleadoTodos(Aeropuerto* aero) {
	cout << " <=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=>" << endl;
	cout << " Mostrar todas los Empleados " << endl;
	cout<< aero->MostrarEmpleado();
}

//opcion 5 
void Interfaz::Pilotos_AvionesCarga(Aeropuerto*) {
	cout << " <=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=>" << endl;


}

//opcion 6 REPORTES

void Interfaz::ReporteContratoServicio(Aeropuerto* aero) {
	cout << " <=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=>" << endl;
	cout << " Reporte de Contrato de Servicios Profesional " << endl << endl;
	cout<< aero->ReporteContratoServicio();

}

//Opcion 7 Reportes 
void Interfaz::ReportaC_PlazoFijo(Aeropuerto* aero) {
	cout << " <=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=>" << endl;
	cout << " Reporte de Contrato de Plazo Fijo  " << endl << endl;
	cout << aero->ReportePlazoFijo();
}

//Opcion 8 Reportes 
void Interfaz::ReporteC_TiempoIndefinido(Aeropuerto* aero) {
	cout << " <=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=>" << endl;
	cout << " Reporte de Contrato de Plazo Fijo  " << endl << endl;
	cout << aero->ReporteTiempoIndefinido();
}

//Opcion 9 Reportes 
void Interfaz::R_Tripula_AvionComerciales(Aeropuerto*) {
	cout << " <=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=>" << endl;
}


//Opcion 10 Reportes 
void Interfaz::R_PlazoFijoExcedidos(Aeropuerto*) {
	cout << " <=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=>" << endl;
}



//Opcion 11 
void Interfaz::AvionC_MayorAreaAcceso(Aeropuerto*) {
	cout << " <=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=>" << endl;
}




//******************************************************************************************************************

//MENU CONSULTAS 
int Interfaz::menuConsulta() {
	int opc;

	system("cls");
	cout << "............................................................" << endl;
	cout << ":                    CONSULTA                              :" << endl;
	cout << ":                                                          :" << endl;
	cout << ":            1. Empleado                                   :" << endl;
	cout << ":            2. Contrato                                   :" << endl;
	cout << ":            3. Aeronave                                   :" << endl;
	cout << ":            4. Menu Anterios                              :" << endl;
	cout << "............................................................" << endl << endl;

	cout << "Digitar una opcion: ";
	cin >> opc;
	return opc;

}


//Opcion 2

void Interfaz::BusquedaContrato(Aeropuerto* aero) {
	string cod;
	system("cls");
	cout << " ========================================================================" << endl;
	cout << "  Digite la codigo del Contrato: " << endl;
	cin >> cod;
	aero->BusquedaConPorCod(cod);

}






//Mensajes 
void Interfaz::menjDefault() {
	stringstream s;
	s << "Opcion Invalida " << endl;
}





