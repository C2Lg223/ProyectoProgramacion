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
    ae = new Comercial(categ, tipoAvio, *cre, distar, pla);
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
	ae = new Carga(categ, alturaPuer, anchoPuer, tipoAvio, *cre, distaR, pla );
	aero->ingresarAeronave(ae);

}

void Interfaz::IngresaAvionesMilitares(Aeropuerto* aero) {
	string categ, tipoAvio, placa;
	int dia, mes, annio;
	Fecha* creacion;
	double distaR; 
	int veloc;
	Aeronaves* ae = nullptr;

	system(" cls");
	cout << " ---------INGRESAR AVION MILITAR --------" << endl;
	cout << "  Digite la Categoria:  ";
	cin >> categ; cout << endl;
	cout << " Digite el tipo de avion: ";
	cout << tipoAvio; cout << endl;
	cout << " Digite la distancia recorrida: ";
	cin >> distaR;
	cout << "\n Digite la velocidad: ";
	cin >> veloc;
	cout << " Digite la fecha de Creacion del Avion: " << endl;
	cout << " Dia: ";
	cin >> dia;
	cout << "\n Mes: ";
	cin >> mes;
	cout << " \n Annio: ";
	cin >> annio;
	cout << "Digite la Placa: " << endl;
	cin >> placa;
	cout << endl;
	creacion = new Fecha(dia, mes, annio);
	if (aero->contarAeronave() > 15) {
		ae = new Militar(veloc, tipoAvio, categ, *creacion, distaR, placa);
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

void Interfaz::IngresarContratoServicioP(Aeropuerto* aero) {
	Contrato* cont = nullptr;
	Aeronaves* av = nullptr;
	Fecha* inicio = nullptr;
	Fecha* final = nullptr;
	Empleado* em = nullptr;
	int sal, d, m, a;
	string horario, tipSer, cod, pues, ced, placa;

	system("cls");

	if (aero->listaEmpleadoVacia())  "***NO hay empleados***";
	else {
		cout << "---------------CREAR UN CONTRATO DE SERVICIOS PROFESIONALES---------------------";
		cout << endl;
		cout << "Ingrese Codigo del Contrato: " << endl;
		cin >> cod;
		cout << "Ingrese Descripcion del Puesto: " << endl;
		cin >> pues;
		cout << "Ingrese el Tipo de Servicio: " << endl;
		cin >> tipSer;
		cout << "Ingrese el Salario: " << endl;
		cin >> sal;
		cout << "----Ingrese la Fecha de Inicio---- " << endl;
		cout << "Dia: " << endl;
		cin >> d;
		cout << "Mes: " << endl;
		cin >> m;
		cout << "Anio: " << endl;
		cin >> a;
		cout << endl;
		inicio = new Fecha(d, m, a);

		cout << "----Ingrese la Fecha Final----" << endl;
		cout << "Dia: " << endl;
		cin >> d;
		cout << "Mes: " << endl;
		cin >> m;
		cout << "Anio: " << endl;
		cin >> a;
		cout << endl;
		final = new Fecha(d, m, a);

		cout << "Ingrese el Empleado para dicho Contrato (Cedula): " << endl;
		cin >> ced;
	}

	if (aero->existeEmplSegunCedula(ced) == false) "EMPLEADO INEXISTENTE";
	else {
		if (aero->existeContratoConEmpleado(ced)) "YA EXISTE UN CONTRATO LIGADO";
		else {
			em = aero->BuscarPorCed(ced);
			if (typeid(*em) == typeid(Administrativa) || typeid(*em) == typeid(Miscelaneos)) {
				cont = new ContratoServicio(horario, tipSer, cod, pues, sal, *inicio, *final, *em);
				aero->ingresarContrato(cont);

			}
			else {
				if (aero->listaAeronaveVacio()) "NO HAY AVIONES DISPONIBLES";
				else {
					if (typeid(*em) == typeid(Piloto)) {
						cout << aero->imprimirAeronaves();
						cout << "Ingrese el Avion(PLACA): " << endl;
						cin >> placa;
						if (aero->existeAvionSegunPlaca(placa)) "NO EXISTE EL AVION";
						else {
							av = aero->buscarAvPorPlaca(placa);
							cont = new ContratoServicio(horario, tipSer, cod, pues, sal, *inicio, *final, *em, *av);
							aero->ingresarContrato(cont);
						}
					}

					if (typeid(*em) == typeid(Copiloto)) {
						if (aero->existeAvCivilSegunPlaca(placa) == false) "NO EXISTE EL AVION";
						else {
							cout << aero->imprimirAeronaves();
							cout << "Ingrese el Avion que vinculara con dicho contrato(PLACA): " << endl;
							cin >> placa;
							if (aero->existeAvionSegunPlaca(placa)) "NO EXISTE EL AVION";
							else {
								av = aero->buscarAvPorPlaca(placa);
								cont = new ContratoServicio(horario, tipSer, cod, pues, sal, *inicio, *final, *em, *av);
								aero->ingresarContrato(cont);
							}
						}
					}

					if (typeid(*em) == typeid(Azafata)) {

						if (aero->existeComercial() == false) "NO EXISTE EL AVION";
						else {
							system("cls");
							cout << aero->imprimirComerciales();
							cout << "   Ingrese el Avion(PLACA): ";
							cin >> placa; cout << endl;

							if (aero->existeAvComeercialSegunPlaca(placa) == false) "NO EXISTE EL AVION";
							else {
								av = aero->buscarAvPorPlaca(placa);

								cont = new ContratoServicio(horario, tipSer, cod, pues, sal, *inicio, *final, *em, *av);
								if (aero->ingresarContrato(cont)) "Se logró ingresar";


							}

						}
					}

				}
			}

		}
	}

 }


void Interfaz::IngresarPlazoFijo(Aeropuerto* aero) {
	
	Contrato* cont = nullptr;
	Aeronaves* av = nullptr;
	Fecha* inicio = nullptr;
	Fecha* final = nullptr;
	Empleado* em = nullptr;
	int sal, d, m, a;
	string horario, tipSer, cod, pues, ced, placa;

	system("cls");

	if (aero->listaEmpleadoVacia())  cout << "***NO hay empleados***";
	else {
		cout << "---------------CREAR UN CONTRATO DE SERVICIOS PROFESIONALES---------------------";
		cout << endl;
		cout << "Ingrese Codigo del Contrato: " << endl;
		cin >> cod;
		cout << "Ingrese Descripcion del Puesto: " << endl;
		cin >> pues;
		cout << "Ingrese el Tipo de Servicio: " << endl;
		cin >> tipSer;
		cout << "Ingrese el Salario: " << endl;
		cin >> sal;
		cout << "----Ingrese la Fecha de Inicio---- " << endl;
		cout << "Dia: " << endl;
		cin >> d;
		cout << "Mes: " << endl;
		cin >> m;
		cout << "Anio: " << endl;
		cin >> a;
		cout << endl;
		inicio = new Fecha(d, m, a);

		cout << "----Ingrese la Fecha Final----" << endl;
		cout << "Dia: " << endl;
		cin >> d;
		cout << "Mes: " << endl;
		cin >> m;
		cout << "Anio: " << endl;
		cin >> a;
		cout << endl;
		final = new Fecha(d, m, a);

		cout << "Ingrese el Empleado para dicho Contrato (Cedula): " << endl;
		cin >> ced;
	

	    if (aero->existeEmplSegunCedula(ced) == false) cout<<"EMPLEADO INEXISTENTE";
	else {
		if (aero->existeContratoConEmpleado(ced)) "YA EXISTE UN CONTRATO LIGADO";
		else {
			em = aero->BuscarPorCed(ced);
			if (typeid(*em) == typeid(Administrativa) || typeid(*em) == typeid(Miscelaneos)) {
				cont = new PlazoFijo(cod, pues, sal, *inicio, *final, *em);
				aero->ingresarContrato(cont);

			}
			else {
				if (aero->listaAeronaveVacio()) "NO HAY AVIONES DISPONIBLES";
				else {
					if (typeid(*em) == typeid(Piloto)) {
						cout << aero->imprimirAeronaves();
						cout << "Ingrese el Avion(PLACA): " << endl;
						cin >> placa;
						if (aero->existeAvionSegunPlaca(placa)) "NO EXISTE EL AVION";
						else {
							av = aero->buscarAvPorPlaca(placa);
							cont = new PlazoFijo(cod, pues, sal, *inicio, *final, *em, *av);
							if (aero->ingresarContrato(cont)) " Se logró ingresar";
						}
					}

					if (typeid(*em) == typeid(Copiloto)) {
						if (aero->existeAvCivilSegunPlaca(placa) == false) " NO EXISTE EL AVION";
						else {
							cout << aero->imprimirAeronaves();
							cout << " Ingrese el Avion que vinculara con dicho contrato(PLACA): " << endl;
							cin >> placa;
							if (aero->existeAvionSegunPlaca(placa)) " NO EXISTE EL AVION";
							else {
								av = aero->buscarAvPorPlaca(placa);

								cont = new PlazoFijo(cod, pues, sal, *inicio, *final, *em, *av);
								if (aero->ingresarContrato(cont)) " Se logró ingresar";
							}
						}
					}
					if (typeid(*em) == typeid(Azafata)) {

						if (aero->existeComercial() == false) " NO EXISTE EL AVION";
						else {
							system("cls");
							cout << aero->imprimirComerciales();
							cout << "   Ingrese el Avion(PLACA): ";
							cin >> placa; cout << endl;

							if (aero->existeAvComeercialSegunPlaca(placa) == false) " NO EXISTE EL AVION";
							else
							{
								av = aero->buscarAvPorPlaca(placa);

								cont = new PlazoFijo(cod, pues, sal, *inicio, *final, *em, *av);
								if (aero->ingresarContrato(cont)) " Se logró ingresar";


							}

						}
					}
				}
			}
			
		}
	 }

	}
}



	void Interfaz::ingresoDeContratoDeTiempoIndefinido(Aeropuerto * aero) {

		string codigo, codigoContrato, descripPuesto;
		Contrato* contrato1 = NULL;
		Contrato* CtiempoIndefinido = NULL;
		double salario;
		Fecha* fechaIngreso;
		Fecha* ceseLaboral = NULL;
		Fecha* fechaActual = NULL;
		Empleado* empleado = NULL;
		Aeronaves* avion = NULL;
		Plaza* plazaLaboral = NULL;

		/*  TiempoIndefinido::TiempoIndefinido(string codigo, string descripPuesto, double salario,
			  Fecha * fechaIngreso, Fecha * ceseLaboral, Empleado * empleado,
			  Avion * avion, Plaza * plazaLaboral)*/

		int dia, mes, annio;

		system("cls");

		cout << "   Ingrese la fecha actual: " << endl << endl;

		cout << "Dia (dd): ";
		cin >> dia;
		cout << "Mes (mm): ";
		cin >> mes;
		cout << "Annio (yyyy):";
		cin >> annio;

		fechaActual = new Fecha(dia, mes, annio);

		if (aero->existeContratoExcedido(*fechaActual) == false) msjErrorNoHayContratoVencidos();
		else {
			aero->ContratosExcedidos(*fechaActual);
			cout << "Ingrese el codigo del contrato que desea convertir a tiempo indefinido" << endl;
			cin >> codigoContrato;
			if (aero->existeContratoPorCod(codigoContrato) == false) msjErrorNoExisteContrato();
			else {
				contrato1 = aero->BusquedaCodContrato(codigoContrato);
				if (contrato1->EsPlazoFijo() == false) msjNoEsPlazoFijo();
				else{
					system("cls");
					Plaza* pla = NULL;
					string cod, desc;

					cout << endl;
					cout << "**************" << endl;
					cout << "          INGRESO DE UNA NUEVA PLAZA        " << endl;
					cout << "**************" << endl;

					cout << "Ingrese el código de la plaza: ";
					cin >> cod;
					cout << "Ingrese la descripción de la plaza: ";
					cin >> desc;
					cout << endl;
					pla = new Plaza(cod, desc);
					system("cls");

						cout << "**************" << endl;
						cout << "  INGRESO DE CONTRATO TIEMPO INDEFINIDO   " << endl;
						cout << "**************" << endl;


						cout << "Ingrese la nueva descripcion del puesto: ";
						cin >> descripPuesto;

						cout << "Ingrese el nuevo salario: ";
						cin >> salario;

						cout << "Ingrese la fecha de ingreso:" << endl;
						cout << "Dia (dd): ";
						cin >> dia;
						cout << "Mes (mm): ";
						cin >> mes;
						cout << "Año (yyyy):";
						cin >> annio;

						fechaIngreso = new Fecha(dia, mes, annio);
						if (contrato1->getEmpleado()->EsAdministrativa() || contrato1->getEmpleado()->EsMicelaneos()) {
							/* (string codigo, string descripPuesto, double salario,
								 Fecha * fechaIngreso, Empleado * empleado, Plaza * plazaLaboral)*/

							CtiempoIndefinido = new TiempoIndefinido(*pla, contrato1->getCodigo(), descripPuesto, salario, *fechaIngreso, *contrato1->getEmpleado());
							aero->eliminarContratoPorCod(contrato1->getCodigo());
							aero->ingresarContrato(CtiempoIndefinido);
							msjExito();
						}
						else {

							//(Plaza&, string, string, double, Empleado&, Aeronaves&, Fecha&, Fecha&)
							CtiempoIndefinido = new TiempoIndefinido(*pla, contrato1->getCodigo(), descripPuesto, salario, *fechaIngreso, *contrato1->getEmpleado());
							CtiempoIndefinido = new TiempoIndefinido(*pla, contrato1->getCodigo(), descripPuesto, salario, *fechaIngreso, *contrato1->getEmpleado(), *contrato1->getAviones());
							aero->eliminarContratoPorCod(contrato1->getCodigo());
							aero->ingresarContrato(CtiempoIndefinido);
							msjExito();
						}
					
				}
			}
		}
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
	cout << "..............................................................." << endl;
	cout << "2.Mantenimiento                               2.1 Empleados " << endl;
	cout << "..............................................................." << endl << endl;
	cout << " 1) Eliminar Empleado " << endl;
	cout << " 2) Modificar Datos " << endl;
	cout << " 3) Menu Anterior " << endl;
	cout << "..............................................................." << endl << endl;
	cout << " Digitar una opcion: " << endl;
	cin >> opc;
	return opc;

}

void Interfaz::EliminarEmpleado(Aeropuerto* aer) {
	stringstream s;
	string ced;
	system("cls");
	if (aer->listaEmpleadoVacia()) {
		cout << "/*//*//*//*/ NO HAY EMPLEADO /*//*//*//*/" << endl;
	}
	else {
		cout << "....................................................." << endl;
		cout << "          Eliminar Empleado    " << endl;
		cout << "....................................................." << endl << endl;

		cout << " Digite la cedula del Empleado que desea Eliminar: ";
		cin >> ced;

		aer->eliminarEmpleado(ced);
		if (aer->eliminarEmpleado(ced)) {
			s << "  El empleado ha sido eliminado ";
		}
		

	}
	
}


void Interfaz::EliminarContrato(Aeropuerto* aer) {
	stringstream s;
	string cod; 
	int opc;
	system("cls");
	if (aer->listaContratovacia()) {
		cout << "/*//*//*//*/NO HAY CONTRATOS /*//*//*//*//*//*//" << endl;
	}
	else {
		cout << "....................................................." << endl;
		cout << "          Eliminar Contrato  " << endl;
		cout << "....................................................." << endl << endl;
		cout << "  Digite el codigo del Contrato : " << endl;
		cin >> cod;
		cout << aer->BusquedaCodContrato(cod) << endl;
		cout << "   Desea eliminar: " << endl << " 1. Si " << endl << " 0. Cancelar " << endl;
		cin >> opc;
		if (opc == 1) {
			aer->eliminarContratoPorCod(cod);
			if (aer->eliminarContratoPorCod(cod) == true) {
				cout << " /*//*//*//*//*/ El contrato ha sido eliminado /*//*//*//*//*" << endl;
			}
		}


	}


}
	

	

int Interfaz::menuMantAeronaves() {
	int opc;
	system("cls");
	cout << "..............................................................." << endl;
	cout << " 2.Mantenimiento                               2.2 Aeronaves " << endl << endl;
	cout << "..............................................................." << endl << endl;
	cout << "   1) Eliminar Aeronaves " << endl;
	cout << "   2). Modificar Datos " << endl;
	cout << "   3) Menu Anterior " << endl;
	cout << "..............................................................." << endl << endl;
	cout << " Digitar una opcion: " << endl;
	cin >> opc;
	return opc;

}



int Interfaz::menuMantContratos() {
	int opc;
	system("cls");
	cout << "..............................................................." << endl;
	cout << " 2.Mantenimiento                               2.3 Contratos  " << endl;
	cout << "..............................................................." << endl << endl;
	cout << "   1) Eliminar Contrato " << endl;
	cout << "   2) Modificar Datos " << endl;
	cout << "   3) Menu Anterior " << endl;
	cout << "..............................................................." << endl << endl;
	cout << "   Digitar una opcion:  " << endl;
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
	ContratoAux = aer->getContenedorContrato()->MostrarPorCod(cod);
	if (ContratoAux != NULL) {
		cout << "Datos Actuales " << endl;
		cout << ContratoAux->toString();
		cout << " Digite: " << "\n 1. Modificar Datos" << "\n 2.Cancelar" << endl;
		cin >> opc1;

		if (opc1 == 1) {
			do {
				cout << "...................................." << endl;
				cout << " Modificar Datos del Contrato " << endl;
				cout << "  1. Puesto " << endl;
				cout << "  2. Salario " << endl;
				cout << "  3. Menu Anterior " << endl << endl;
				cout << "...................................." << endl;
				cout << "  Digite una opcion: " << endl;
				cin >> opc;

				switch (opc) {
				case 1: cout << "  Ingrese el puesto: ";
					cin >> puestto;
					ContratoAux->setPuesto(puestto);
					cout << "   Mostar Informacion  Actualizada" << endl;
					cout << "----------------------------------" << endl;
					cout << ContratoAux->toString();
					break;
				case 2: cout << "Ingrese el Salario: ";
					cin >> salario;
					ContratoAux->setSalario(salario);
					cout << "   Mostar Informacion  Actualizada" << endl;
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
			     cout << "...................................." << endl;
				 cout << "Modificar Datos del Empleados " << endl;
				 cout << " 1. Nombre " << endl;
				 cout << " 2. Edad" << endl;
				 cout << " 3. Ocupacion " << endl;
				 cout << " 4. Atras " << endl << endl;
				 cout << "...................................." << endl;
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

void Interfaz::ModificarAerona(Aeropuerto* aer) {

	int opc;
	string placa;
	double distanciRe;
	Aeronaves* nave = NULL;
	system("cls");

	cout << "Digite la Placa: ";
	cin >> placa;
	nave = aer->BuscarAvion(placa);
	if (nave != NULL) {
		cout << "Datos Actuales" << endl;
		cout << nave->toString();
		cout << " Digite: " << "\n 1. Modificar Datos" << "\n 2.Cancelar" << endl;
		cin >> opc;

		if (opc == 1) {
			cout << " Ingrese la distancia Recorrida " << endl;
			cin >> distanciRe;
			nave->setDistanciaRecorida(distanciRe);
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
	cout << "                     3. REPORTES                                " << endl << endl;
	cout << "  1.  Contratos con sus empleados " << endl;
	cout << "  2.  Aeronaves con su tripulación.  " << endl;
	cout << "  3.  Todas las Aeronaves " << endl;
	cout << "  4.  Todos los Empleados " << endl;
	cout << "  5.  Pilotos de Aviones de Carga " << endl;
	cout << "  6.  Aviones con mas de 20 annios" << endl;
	cout << "  7.  Contratos de Servicios Profesionales " << endl;
	cout << "  8.  Contratos de Plazo Fijo " << endl;
	cout << "  9.  Contratos de Tiempo Indefinido" << endl;
	cout << " 10.  Tripulaciones de Aviones Comerciales " << endl;
	cout << " 11.  Contratos de Plazo Fijo excedidos " << endl;
	cout << " 12.  Avion de Carga con mayor area de acceso " << endl;
	cout << " 13.  Menu Anterior " << endl;
	cout << endl << endl;
	cout << " <=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=>" << endl;

	cout << "Digitar una opcion: " << endl;
	cin >> opc;
	return opc;

}
//opcion 1  REPORTES 
void Interfaz::MostrarContratos(Aeropuerto* aero) {

	system("cls");
	cout<<" <=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=>" << endl;
	cout << "              Contratos los Empleado " << endl;
	cout<<aero->MostrarContratos();

}
//opcion 2  REPORTES

void Interfaz::ReportesAeronavesyTripula(Aeropuerto* aero) {
	system("cls");
	cout << " <=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=>" << endl;
	cout << " Reportes de Aeronaves con su tripulacion " << endl; 
	cout<<aero->reporteAeronavesTripulacion();
}


//opcion 3 REPORTES
void Interfaz::MostrarAeronaves(Aeropuerto* aero) {
	system("cls");
	cout << " <=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=>" << endl;
	cout << "      Mostrar todas las Aeronaves     " << endl;
    cout<<	aero->MostrarAeronaves();
	cout << " <=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=>" << endl;
}

//opcion 4  REPORTES
void Interfaz::ReporteEmpleadoTodos(Aeropuerto* aero) {
	system("cls");
	cout << " <=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=>" << endl;
	cout << " Mostrar todas los Empleados " << endl;
	cout<< aero->MostrarEmpleado();
	cout << " <=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=>" << endl;
}

//opcion 5 
void Interfaz::Pilotos_AvionesCarga(Aeropuerto* aero) {
	system("cls");
	cout << " <=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=>" << endl;
	cout << aero->PilotosDeCarga() << endl;
	cout << " <=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=>" << endl;

}

//opcion 6 REPORTES
void Interfaz::AvionesDe20annio(Aeropuerto* aero) {
	int mes, dia, annio;
	system("cls");
	if (aero->listaAeronaveVacio() != true) {
		cout << " <=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=>" << endl;
		cout << "  Digite la Fecha Actual: ";
		cout << " Dia:  "; 
		cin >> dia;
		cout << "  Mes: ";
		cin >> mes;
		cout << "  Annio:  ";
		cin >> annio;

		Fecha* actual = new Fecha(dia, mes, annio);

		cout << aero->AvionesDe20annios(*actual);
	}
	else {
          cout << "  /*/*/*/*/ NO HAY AVIONES /*/*/*/*/" << endl;
	}

}



//Opcion 7: 



void Interfaz::ReporteContratoServicio(Aeropuerto* aero) {
	system("cls");
	cout << " <=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=>" << endl;
	cout << " Reporte de Contrato de Servicios Profesional " << endl << endl;
	cout<< aero->ReporteContratoServicio();
	cout << " <=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=>" << endl;


}

//Opcion 8 Reportes 
void Interfaz::ReportaC_PlazoFijo(Aeropuerto* aero) {
	system("cls");
	cout << " <=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=>" << endl;
	cout << " Reporte de Contrato de Plazo Fijo  " << endl << endl;
	cout << aero->ReportePlazoFijo();
	cout << " <=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=>" << endl;
}

//Opcion 9 Reportes 
void Interfaz::ReporteC_TiempoIndefinido(Aeropuerto* aero) {
	system("cls");
	cout << " <=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=>" << endl;
	cout << " Reporte de Contrato de Plazo Fijo  " << endl << endl;
	cout << aero->ReporteTiempoIndefinido();
	cout << " <=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=>" << endl;
}

//Opcion 10 Reportes 
void Interfaz::R_Tripula_AvionComerciales(Aeropuerto* aero) {
	system("cls");
	cout << " <=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=>" << endl;
	cout << aero->ReporteEmpleadoEnAvComercial();
	cout << " <=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=>" << endl;
}


//Opcion 11 Reportes 
void Interfaz::R_PlazoFijoExcedidos(Aeropuerto* aero) {
	system("cls");
	int mes, dia, anio;
	Fecha* Actual;
	cout << " <=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=>" << endl;
	cout << "Digite la fecha Actual " << endl;
	cout << " Dia: ";
	cin >> dia;
	cout << "Mes: ";
	cin >> mes;
	cout << " Annio: ";
	cin >> anio;

	Actual = new Fecha(dia, mes, anio);

	cout << "  Contratos de Plazo Fijo que tiene mas de 2 annio " << endl;
	cout << "-----------------------------------------------------" << endl;
	cout << aero->ContratosExcedidos(*Actual) << endl;
}



//Opcion 12 
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
void Interfaz::BusquedaEmpleado(Aeropuerto* aero) {
	string ced;
	system("cls");
	cout << " ========================================================================" << endl;
	cout << "  Digite el numero de ced: " << endl;
	cin >> ced;
	aero->BuscaEmplConCed(ced);


}
void Interfaz::BusquedaContrato(Aeropuerto* aero) {
	string cod;
	system("cls");
	cout << " ========================================================================" << endl;
	cout << "  Digite la codigo del Contrato: " << endl;
	cin >> cod;
	cout<< aero->BusquedaCodContrato(cod);

}

void Interfaz::AvionesCiviles(Aeropuerto* aero) {
	string placa;
	system("cls");

	cout << "Digite la Placa: " << endl;
	cin >> placa;
	cout << aero->BuscarAvion(placa);
}


//Mensajes 
void Interfaz::menjDefault() {
	stringstream s;
	s << "Opcion Invalida " << endl;
}

void Interfaz::msjErrorNoHayContratoVencidos() {
	stringstream s;

	s << "/*/*/*/*/*//*/*/*/*/*/ NO HAY CONTRATOS VENCIDOS /*/*/*/*/*//*/*/*/*/*/" << endl;
	

}

void Interfaz::msjErrorElCodigoDeLaPlazaEXISTE() {
	stringstream s;

	s << "/*/*/*/*/*//*/*/*/*/*/ NO EXISTE LA PLAZA	 /*/*/*/*/*//*/*/*/*/*/" << endl;
	
}

void Interfaz::msjErrorNoExisteContrato() {
	stringstream s;
	s << "/*/*/*/*/*//*/*/*/*/*/ NO EXISTE CONTRATO /*/*/*/*/*//*/*/*/*/*/" << endl;
}

void Interfaz::msjNoEsPlazoFijo() {
	stringstream s;
	s << "/*/*/*/*/*/ NO ES CONTRATO DE PLAZO FIJO /*/*/*/*/*/" << endl;
}

void Interfaz::msjExito() {
	stringstream s;
	s << "/*//*//*//*//*/ Se ha ingresado Correctamente /*//*//*//*//*//*/" << endl;
}




