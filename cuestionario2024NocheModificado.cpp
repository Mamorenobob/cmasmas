#include<iostream>  //para 	cout o cin
#include<conio.h>   //para 	getch();
#include<stdlib.h>  //para 	system("PAUSE");
#include<time.h>
using namespace std;
main()
{
	setlocale(LC_CTYPE, "Spanish");
	int Opc, idioma, preg;//sera la opcion de elegir
	int Salir;//indica el momento para salir del programa
	int numeroAleatorio;
	char respuesta,repetir;
	int indiceAleatorio;
	int contap=0,contan=0,contador=0,aleatorio;
	cout <<"\n Seleccione un idioma\n\n1-Español\n2-Ingles\n3-Aleman\n";
	cin>>idioma;	 
	if (idioma==1)
		{ 
		cout<<"Estas en idioma-Español\n";
			do
			{
			contador=contador+1;
			contap=0; contan=0;
			cout<< "Modulos"<<endl;
			cout<< "1)C3 RAP1.CARACTERIZAR LA INFORMACIÓN A RECOLECTAR.\n(Establecer requisitos de la solución)."<<endl;
			cout<< "2)C3 RAP2.INTERPRETAR EL INFORME DE REQUISITOS.\n(Establecer requisitos de la solución)."<<endl;
			cout<< "3)C1 RAP1.RESOLVER PROCESOS LÓGICOS.\n(DESARROLLAR LA SOLUCIÓN DE SOFTWARE)"<<endl;
			cout<< "4)C1 RAP3.CODIFICAR EL SOFTWARE.\n(DESARROLLAR LA SOLUCIÓN DE SOFTWARE)"<<endl;
			cout<< "5)C2 RAP1.CONSTRUIR LA BASE DE DATOS.\n(ADMINISTRAR BASE DE DATOS)."<<endl;
			cout<< "6)C2 RAP2.PROGRAMAR SENTENCIAS SQL.\n(ADMINISTRAR BASE DE DATOS)"<<endl;
			cout<< "7)C1 RAP2.CREAR COMPONENTES FRONT-END\n(DESARROLLAR LA SOLUCIÓN)"<<endl;
			cout<< "8)LENGUAJE DE PROGRAMACION C++"<<endl;
			cout<< "9)Salir"<<endl;
			cout<<"Dame opcion(rango 1-9)"<<endl;
			cin>>Opc;
			switch (Opc) 
				{
				case 1:
					cout<<"CARACTERIZAR LA INFORMACIÓN A RECOLECTAR"<<endl;
					//int aleatorio;
					srand(time(NULL));
					aleatorio=rand()%7;
					switch(aleatorio) 
						{
						case 1:
							cout<<"1-¿Que es programacion?"<<endl;
							cout<<"a)diseñar, depurar, codificar y mantener un codigo"<<endl;
							cout<<"b)Un conjunto de programas"<<endl;
							cout<<"c)Secuencia de operaciones en un determinado orden"<<endl;
							cout<<"d)Se usa para resolver un problema"<<endl;
							cin>>respuesta;
						    if(respuesta=='a')
								{
							  		cout<<"la respuesta es correcta"<<endl;
							  		contap=contap+1;
						    	}
							else
								{
									cout<<"La respuesta es ERRONEA"<<endl;
									cout<<"La respuesta es: diseñar, depurar, codificar y mantener un codigo"<<endl;
									contan=contan+1;
								}
						break;	
						case 2:	
							cout<<"2-¿Que es un algoritmo?"<<endl;
							cout<<"a)Es la forma para resolver un problema"<<endl;
							cout<<"b)Un conjunto de criterios para evaluar"<<endl;
							cout<<"c)Una lista de opciones"<<endl;
							cout<<"d)Indica el orden de realizacion"<<endl;
							cin>>respuesta;	
						    if(respuesta=='a')
								{
									cout<<"la respuesta es correcta2"<<endl;
									contap=contap+1;
							    }
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									contan=contan+1;
								}
						break;	
						case 3:
							cout<<"¿3-¿Cuales son las fases del ciclo de vida del Software?"<<endl;
							cout<<"a)Mantenimiento y evolucion, Identificacion de necesidades"<<endl;
							cout<<"b)Validación, analisis y diseño"<<endl;
							cout<<"c)Pruebas y codificacion"<<endl;
							cout<<"d)Todas las anteriores"<<endl;
							cin>>respuesta;	
						    if(respuesta=='d')
							    {
							    	cout<<"la respuesta es correcta3"<<endl;
							    	contap=contap+1;
							    }
							else
								{
							    	cout<<"La respuesta es incorrecta3"<<endl; 
									contan=contan+1;
							    }
						break; 
						case 4:
					    	cout<<"4-¿Identificacion de Necesidades:¿Cuales son las fases para plantear un problema?"<<endl;
							cout<<"a)Establecer y Listar"<<endl;
							cout<<"b)Validar, Analizar y Diseñar"<<endl;
							cout<<"c)Establecer, Listar, Recabar, Evaluar"<<endl;
							cout<<"d)Ninguna"<<endl;
							cin>>respuesta;
							if(respuesta=='a')
								{
							    	cout<<"la respuesta es correcta"<<endl;	
							    	contap=contap+1;
							    } 
							else
								{
							    	cout<<"La respuesta es incorrecta"<<endl;
							    	contan=contan+1;
							    }
						break;    
						case 5:
					    	cout<<"5-¿Que es establecer?"<<endl;
							cout<<"a)Las oportunidades a partir de los criterios que se establezcan"<<endl;
							cout<<"b)Datos e informacion para cada oportunidad y garantizar una decision"<<endl;
							cout<<"c)Listar opciones que seran la base de cada oportunidad"<<endl;
							cout<<"d)Conjunto de criterios para evaluar las oportunidades, si se adecua con requerimiento del cliente"<<endl;
							cin>>respuesta;
							if(respuesta=='b')
								{
							    	cout<<"la respuesta es correcta"<<endl;
							    	contap=contap+1;
							    }
							else
								{
							    	cout<<"La respuesta es incorrecta"<<endl; 
							    	contan=contan+1;	
							    }
						break;    
						case 6:
					    	cout<<"6-¿Que es Listar?"<<endl;
							cout<<"a)Conjunto de criterios para evaluar las oportunidades, si se adecua con requerimiento del cliente"<<endl;
							cout<<"b)Listar opciones que seran la base de cada oportunidad"<<endl;
							cout<<"c)Datos e informacion para cada oportunidad y garantizar una decision"<<endl;
							cout<<"d)Las oportunidades a partir de los criterios que se establezcan"<<endl;
							cin>>respuesta;
							if(respuesta=='b')
								{
							    	cout<<"la respuesta es correcta"<<endl<<endl<<endl;
							    	contap=contap+1;
							    }
							else
								{
							    	cout<<"La respuesta es incorrecta"<<endl<<endl<<endl;
							    	contan=contan+1;	
						    	} 
						break;
					   	default:cout<<"noooooooooooooooooooo";
					   	break;
				    }
				break;					
				case 2: 
					cout<<"INTERPRETAR EL INFORME DE REQUISITOS"<<endl;
					srand(time(NULL));
					aleatorio=rand()%11;
					switch(aleatorio) 
						{
						case 1:	
							cout<<"1-¿Para que sistemas son diseñadas principalmente la mayoría de aplicaciones en  la actualidad?"<<endl;
							cout<<"a)android"<<endl;
							cout<<"b)windows"<<endl;
							cout<<"c)ios"<<endl;
							cout<<"d)a y c son correctas"<<endl;
							cin>>respuesta;
	 
						    if(respuesta=='d')
								{
							  		cout<<"la respuesta es correcta"<<endl;
							  		contap=contap+1;
						    	}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									contan=contan+1;
								}
						break;
						case 2:		 
							cout<<"2-¿Que lenguaje de programacion es comunmente usado para las aplicaciones moviles?"<<endl;
							cout<<"a)Python"<<endl;
							cout<<"b)java"<<endl;
							cout<<"c)C#"<<endl;
							cout<<"d)PHP"<<endl;
							cin>>respuesta;
	 
						    if(respuesta=='b')
								{
							  		cout<<"la respuesta es correcta"<<endl;
							  		contap=contap+1;
						    	}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									contan=contan+1;
								}
						break;
						case 3:		
							cout<<"3-¿Principalmente para que fueron diseñadas las aplicaciones?"<<endl;
							cout<<"a)Para entretener a las personas"<<endl;
							cout<<"b)Para controlar el sistema operativo de un equipo de computo"<<endl;
							cout<<"c)Para facilitar ciertas tareas complejas y hacer mas sencilla la experiencia informatica de las personas"<<endl;
							cout<<"d)ninguna de las anteriores"<<endl;
							cin>>respuesta;
	 
						    if(respuesta=='c')
								{
							  		cout<<"la respuesta es correcta"<<endl;
							  		contap=contap+1;
						    	}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									contan=contan+1;
								}
						break;
						case 4:		
							cout<<"4-¿Que es una aplicacion movil?"<<endl;
							cout<<"a)Es una aplicacion diseñada para ejecutarse en un dispositivo movil, que puede er un telefono inteligente o tablet"<<endl;
							cout<<"b)Una aplicacion movil es lo mismo que una aplicacion web"<<endl;
							cout<<"c)Es una aplicacion web con gestor de contenidos"<<endl;
							cout<<"d)ninguna de las anteriores"<<endl;
							cin>>respuesta;
	 
						    if(respuesta=='a')
								{
							  		cout<<"la respuesta es correcta"<<endl;
							  		contap=contap+1;
						    	}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									contan=contan+1;
								}
						break;
						case 5:
							cout<<"5-¿Para que es una aplicacion nativa?"<<endl;
							cout<<"a)Está desarrollada y optimizada específicamente para el sistema operativo determinado y la plataforma de desarrollo del fabricante"<<endl;
							cout<<"b)Sirve para compartir información con otros sistemas operativos "<<endl;
							cout<<"c)Sirven para cargar información en el sistema operativo"<<endl;
							cout<<"d)para  cambiar su contenido, manteniendo el mismo diseño y estilo"<<endl;
							cin>>respuesta;
	 
						    if(respuesta=='a')
								{
							  		cout<<"la respuesta es correcta"<<endl;
							  		contap=contap+1;
						    	}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									contan=contan+1;
								}
						break;
						case 6:	
							cout<<"6-¿las aplicaciones nativas que se usan en celulares se pueden usar en cuantos sistemas operativo?"<<endl;
							cout<<"a)un solo sistema operativo"<<endl;
							cout<<"b)más de 2 sistemas operativos como (Android, iOS y Windows) "<<endl;
							cout<<"c)todos los sistemas operativos."<<endl;
							cout<<"d) la respuesta b y c son correctas."<<endl;
							cin>>respuesta;
	 
						    if(respuesta=='a')
								{
							  		cout<<"la respuesta es correcta"<<endl;
							  		contap=contap+1;
						    	}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									contan=contan+1;
								}
						break;
						case 7:	
							cout<<"7-¿Qué tipo de navegador por defecto viene en los dispositivos moviles android?"<<endl;
							cout<<"a)OperaMini"<<endl;
							cout<<"b)Minimo-Mozilla "<<endl;
							cout<<"c)chrome"<<endl;
							cout<<"d)NetFront"<<endl;
							cin>>respuesta;
	 
						    if(respuesta=='c')
								{
							  		cout<<"la respuesta es correcta"<<endl;
							  		contap=contap+1;
						    	}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									contan=contan+1;
								}
						break;
						case 8:	
							cout<<"8-¿Qué factor incide en el desarrollo de aplicaciones móviles?"<<endl;
							cout<<"a)Plataforma"<<endl;
							cout<<"b)Sistema Operativo "<<endl;
							cout<<"c)Dispositivo Móvil"<<endl;
							cout<<"d)lenguaje de desarrollo"<<endl;
							cin>>respuesta;
	 
						    if(respuesta=='a')
								{
							  		cout<<"la respuesta es correcta"<<endl;
							  		contap=contap+1;
						    	}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									contan=contan+1;
								}
						break;
						case 9:	
							cout<<"9-¿Cuales son sistemas operativos de moviles?"<<endl;
							cout<<"a)android"<<endl;
							cout<<"b)windows"<<endl;
							cout<<"c)ios"<<endl;
							cout<<"d)a y c son correctas"<<endl;
							cin>>respuesta;
	 
						    if(respuesta=='d')
								{
							  		cout<<"la respuesta es correcta"<<endl;
							  		contap=contap+1;
						    	}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									contan=contan+1;
								}
						break;
						case 10:	
							cout<<"10-¿En donde se alojan los aplicativos moviles y su cache?"<<endl;
							cout<<"a)En el dispositivo"<<endl;
							cout<<"b)Aplicativo en la nube cache en el dispositivo"<<endl;
							cout<<"c)Unicamente en la nube"<<endl;
							cout<<"d)Hibridamente mitad nube, mitad dispositivo"<<endl;
							cin>>respuesta;
	 
						    if(respuesta=='b')
								{
							  		cout<<"la respuesta es correcta"<<endl;
							  		contap=contap+1;
						    	}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									contan=contan+1;
								}
						break;
						default:cout<<"nooooooooommm";
						break;
						}
				break;
				case 3: 
						{
							cout<<"RESOLVER PROCESOS LÓGICOS"<<endl; 
							cout<<"1-¿Cual es el resultado de de la exporesion logica?\n(True and False) or (True and True)"<<endl;
							cout<<"a)True"<<endl;
							cout<<"b)False"<<endl;
							cout<<"c)None"<<endl;
							cout<<"d)Error"<<endl;
							cin>>respuesta;

							if(respuesta=='b')
								{
									cout<<"la respuesta es correcta"<<endl;
									contap=contap+1;
								}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl;
									cout<<"La respuesta correcta es False"<<endl;
									contan=contan+1;
								}	 
							cout<<"2-¿Que estructura de control se utiliza para repetir un bloque de codigo hasta que una condicion se vuelva falsa?"<<endl;
							cout<<"a)if"<<endl;
							cout<<"b)for"<<endl;
							cout<<"c)switch"<<endl;
							cout<<"d)while"<<endl;
							cin>>respuesta;

							if(respuesta=='d')
								{
									cout<<"la respuesta es correcta"<<endl;
									
									contap=contap+1;
								}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									cout<<"La respuesta correcta es While"<<endl;
									contan=contan+1;
								}
							cout<<"3-¿Que operador logico se utiliza para negar una condicion?"<<endl;
							cout<<"a)&&"<<endl;
							cout<<"b)!="<<endl;
							cout<<"c)!"<<endl;
							cout<<"d)="<<endl;
							cin>>respuesta;

							if(respuesta=='c')
								{
									cout<<"la respuesta es correcta"<<endl;
									contap=contap+1;
								}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									cout<<"La respuesta correcta es '!'"<<endl;
									contan=contan+1;
								}	
							cout<<"4-¿Cual es la complejidad temporal del algoritmo de busqueda binaria en una lista ordenada?"<<endl;
							cout<<"a)O(n)"<<endl;
							cout<<"b)O(log n)"<<endl;
							cout<<"c)O (n log n)"<<endl;
							cout<<"d)O(1)"<<endl;
							cin>>respuesta;

							if(respuesta=='b')
								{
									cout<<"la respuesta es correcta"<<endl;
									contap=contap+1;
								}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									cout<<"La respuesta correcta es 'O (log n)'"<<endl;
									contan=contan+1;
								}
							cout<<"5-¿Cual es la funcion de un algoritmo de ordenamiento?"<<endl;
							cout<<"a)Buscar un elemento en una lista"<<endl;
							cout<<"b)Reorganizar los elementos de una lista en un orden especifico"<<endl;
							cout<<"c)Eliminar elementos diplucados de una lista"<<endl;
							cout<<"d)Contar el numero de elementos en una lista"<<endl;
							cin>>respuesta;

							if(respuesta=='b')
								{
									cout<<"la respuesta es correcta"<<endl;
									contap=contap+1;
								}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									cout<<"La respuesta correcta es Reorganizar los elementos de una lista en un orden especifico"<<endl;
									contan=contan+1;
								}								 
							cout<<"6-¿Que tipo de estrcutura de datos se utiliza para almacenar elementos de manera ordenada y permitir la rapida insercion, eliminicacion y busqueda?"<<endl;
							cout<<"a)Pila"<<endl;
							cout<<"b)Cola"<<endl;
							cout<<"c)Arbol"<<endl;
							cout<<"d)Lista enlazada"<<endl;
							cin>>respuesta;

							if(respuesta=='c')
								{
									cout<<"la respuesta es correcta"<<endl;
									contap=contap+1;
								}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									cout<<"La respuesta correcta es Arbol"<<endl;
									contan=contan+1;
								}	 
							cout<<"7-¿Cual es la salida del siguiente codigo en Python?"<<endl<<"x = 10"<<endl<<"x = 5"<<endl<<"if x > y:"<<endl<<"\tprint('x es mayor que y')"<<endl<<"elif x == y:"<<endl<<"\tprint('x es igual a y'"<<endl<<"else:"<<endl<<"\tprint('y es mayor que x'))";
							cout<<"a)x es mayor que y"<<endl;
							cout<<"b)x es igual a y"<<endl;
							cout<<"c)y es igual a x"<<endl;
							cout<<"d)No se imprime nada"<<endl;
							cin>>respuesta;

							if(respuesta=='a')
								{
									cout<<"la respuesta es correcta"<<endl;
									contap=contap+1;
								}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl;
									cout<<"La respuesta correcta es x es mayor que y"<<endl;
									contan=contan+1;
								}	
							cout<<"8-¿Cual es el resultado de la operacion '5 << 2' en Python?"<<endl;
							cout<<"a)10"<<endl;
							cout<<"b)20"<<endl;
							cout<<"c)25"<<endl;
							cout<<"d)8"<<endl;
							cin>>respuesta;

							if(respuesta=='d')
								{
									cout<<"la respuesta es correcta"<<endl;
									contap=contap+1;
								}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl;
									cout<<"La respuesta correcta es '8'"<<endl;
									contan=contan+1;
								}	
							cout<<"9-¿Que es la recursividad en programacion?"<<endl;
							cout<<"a)Un tipo de bucle"<<endl;
							cout<<"b)Una tecnica para divir un problema en subproblemas mas pequeños y resolverlos de manera recursiva"<<endl;
							cout<<"c)Una estructura de datos"<<endl;
							cout<<"d)Un tipo de algoritmo de movimiento"<<endl;
							cin>>respuesta;

							if(respuesta=='b')
								{
									cout<<"la respuesta es correcta"<<endl;
									contap=contap+1;
								}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl;
									cout<<"La respuesta correcta es Una tecnica para divir un problema en subproblemas mas pequeños y resolverlos de manera recursiva"<<endl;
									contan=contan+1;
								}
							cout<<"10-¿Cual es la funcion del operador del modulo '%' en programacion?"<<endl;
							cout<<"a)Sumar dos numeros"<<endl;
							cout<<"b)Restar dos numeros"<<endl;
							cout<<"c)Obtener el residuo de la division entre dos numeros"<<endl;
							cout<<"d)Multiplicar dos numeros"<<endl;
							cin>>respuesta;

							if(respuesta=='d')
								{
									cout<<"la respuesta es correcta"<<endl;
									contap=contap+1;
								}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									cout<<"La respuesta correcta es Obtener el residuo de la division entre dos numeros"<<endl;
									contan=contan+1;
								}	
							cout<<"11-Cuál de las siguientes opciones describe mejor un bucle for en la mayoría de los lenguajes de programación? "<<endl;
							cout<<"a)Repite un bloque de código hasta que se cumpla una condición "<<endl;
							cout<<"b)Repite un bloque de código un número específico de veces "<<endl;
							cout<<"c)Repite un bloque de código mientras se cumpla una condición "<<endl;
							cout<<"d)Repite un bloque de código hasta que el usuario lo interrumpa"<<endl;
							cin>>respuesta;
							if(respuesta=='b')
								{
									cout<<"la respuesta es correcta"<<endl;
									
									contap=contap+1;
								}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl;
									cout<<"La respuesta correcta es Repite un bloque de código un número específico de veces ";
									contan=contan+1;
								}	 
							cout<<"12-¿Cuál de los siguientes no es un método comúnmente utilizado para controlar el flujo de ejecución en un programa? "<<endl;
							cout<<"a)Estructuras de selección "<<endl;
							cout<<"b)Bucles (loops) "<<endl;
							cout<<"c)Funciones "<<endl;
							cout<<"d)Sentencias de retorno (return)"<<endl;
							cin>>respuesta;

							if(respuesta=='c')
								{
									cout<<"la respuesta es correcta"<<endl;
									contap=contap+1;
								}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									cout<<"La respuesta correcta es Funciones ";
									contan=contan+1;
								}	
							cout<<"13-¿Qué es la recursión en programación? "<<endl;
							cout<<"a)Una técnica para evitar el uso de bucles en un algoritmo "<<endl;
							cout<<"b)Un método para limitar la complejidad temporal de un algoritmo "<<endl;
							cout<<"c)Un enfoque de diseño de algoritmos que implica que una función se llame a sí misma directa o indirectamente para resolver un problema más pequeño "<<endl;
							cout<<"d)Una técnica de depuración de código que implica el uso de una función recursiva"<<endl;
							cin>>respuesta;

							if(respuesta=='c')
								{
									cout<<"la respuesta es correcta"<<endl;
									contap=contap+1;
								}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl;
									cout<<"La respuesta correcta es Un enfoque de diseño de algoritmos que implica que una función se llame a sí misma directa o indirectamente para resolver un problema más pequeño ";
									contan=contan+1;
								}	
							cout<<"14-¿Qué es la eficiencia de un algoritmo?"<<endl;
							cout<<"a)La cantidad de recursos utilizados por el algoritmo "<<endl;
							cout<<"b)La cantidad de código que contiene el algoritmo "<<endl;
							cout<<"c)La capacidad del algoritmo para producir resultados correctos "<<endl;
							cout<<"d)La relación entre los recursos utilizados por el algoritmo y el tamaño del conjunto de datos de entrada"<<endl;
							cin>>respuesta;

							if(respuesta=='d')
								{
									cout<<"la respuesta es correcta"<<endl;
									contap=contap+1;
								}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl;
									cout<<"La respuesta correcta es La relación entre los recursos utilizados por el algoritmo y el tamaño del conjunto de datos de entrada ";
									contan=contan+1;
								}
							cout<<"15-¿Qué es un tipo de dato en programación? "<<endl;
							cout<<"a)Una instrucción que detiene la ejecución del programa "<<endl;
							cout<<"b)Una estructura de control que repite un bloque de código hasta que se cumple una condición "<<endl;
							cout<<"c)Una variable que almacena direcciones de memoria "<<endl;
							cout<<"d)Una clasificación que especifica qué tipo de datos puede contener una variable"<<endl;
							cin>>respuesta;

							if(respuesta=='d')
								{
									cout<<"la respuesta es correcta"<<endl;
									contap=contap+1;
								}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl;
									cout<<"La respuesta correcta es Una clasificación que especifica qué tipo de datos puede contener una variable ";
									contan=contan+1;
								}										 
							cout<<"16-¿Cuál de los siguientes no es un paradigma de programación comúnmente utilizado? "<<endl;
							cout<<"a)Programación orientada a objetos "<<endl;
							cout<<"b)Programación lineal "<<endl;
							cout<<"c)Programación funcional "<<endl;
							cout<<"d)Programación estructurada"<<endl;
							cin>>respuesta;

							if(respuesta=='b')
								{
									cout<<"la respuesta es correcta"<<endl;
									contap=contap+1;
								}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl;
									cout<<"La respuesta correcta es Programación lineal "; 
									contan=contan+1;
								}	 
							cout<<"17-¿Qué es un algoritmo?"<<endl;
							cout<<"a)Un lenguaje de programación "<<endl;
							cout<<"b)Un conjunto de instrucciones para resolver un problema"<<endl;
							cout<<"c)Una herramienta de depuración de código "<<endl;
							cout<<"d)Un sistema operativo"<<endl;
							cin>>respuesta;

							if(respuesta=='b')
								{
									cout<<"la respuesta es correcta"<<endl;
									contap=contap+1;
								}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl;
									cout<<"La respuesta correcta es Un conjunto de instrucciones para resolver un problema "; 
									contan=contan+1;
								}	
							cout<<"18-¿Qué es un depurador (debugger) en programación?"<<endl;
							cout<<"a)Una herramienta utilizada para introducir errores en el código "<<endl;
							cout<<"b)Una herramienta utilizada para medir la eficiencia de un algoritmo "<<endl;
							cout<<"c)Una herramienta utilizada para encontrar y corregir errores en el código "<<endl;
							cout<<"d)Una herramienta utilizada para generar documentación del código automáticamente"<<endl;
							cin>>respuesta;

							if(respuesta=='c')
								{
									cout<<"la respuesta es correcta"<<endl;
									contap=contap+1;
								}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									cout<<"La respuesta correcta es Una herramienta utilizada para encontrar y corregir errores en el código "; 
									contan=contan+1;
								}	
							cout<<"19-¿Qué es un puntero en programación? "<<endl;
							cout<<"a)Una variable que almacena direcciones de memoria "<<endl;
							cout<<"b)Una función que se llama automáticamente cuando se crea una instancia de una clase "<<endl;
							cout<<"c)Una estructura de datos utilizada para almacenar elementos en una secuencia lineal "<<endl;
							cout<<"d)Una variable que almacena un único valor"<<endl;
							cin>>respuesta;

							if(respuesta=='a')
								{
									cout<<"la respuesta es correcta"<<endl;
									contap=contap+1;
								}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									cout<<"La respuesta correcta es Una función que se llama automáticamente cuando se crea una instancia de una clase "; 
									contan=contan+1;
								}
							cout<<"20-¿Cuál de los siguientes es un tipo de algoritmo de ordenamiento?, how often"<<endl;
							cout<<"a)Algoritmo if-else"<<endl;
							cout<<"b)Algoritmo de búsqueda binaria"<<endl;
							cout<<"c)Algoritmo de ordenamiento burbuja "<<endl;
							cout<<"d)Algoritmo recursivo"<<endl;
							cin>>respuesta;

							if(respuesta=='d')
								{
									cout<<"la respuesta es correcta"<<endl;
									contap=contap+1;
								}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl;
									cout<<"La respuesta correcta es Algoritmo recursivo "; 
									contan=contan+1;
								}	
							cout<<"21-?Que es un algoritmo?"<<endl;
							cout<<"a)Secuencia de instrucciones y operaciones "<<endl;
							cout<<"b)Conjunto de numeros ordenados"<<endl;
							cout<<"c)Es la resolucion de un problema general"<<endl;
							cout<<"d)Secucencia de operaciones finitas"<<endl;
							cin>>respuesta;

							if(respuesta=='a')
								{
									cout<<"la respuesta es correcta"<<endl;
									contap=contap+1;
								}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									contan=contan+1;
								}	 
							cout<<"22-?Que es un proceso logico?"<<endl;
							cout<<"a)Es un pensamiento logico matematico que ayuda a la resoluciion de problemas"<<endl;
							cout<<"b)Es un razonamiento racional que involucra una serie de ralaciones"<<endl;
							cout<<"c)Es una forma de incolucrar objetos reales o abstractos "<<endl;
							cout<<"d)E un raccionamiento abstracto que involucra objetos"<<endl;
							cin>>respuesta;

							if(respuesta=='b')
								{
									cout<<"la respuesta es correcta"<<endl;
									contap=contap+1;
								}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									cout<<"La respuesta correcta es Es un razonamiento racional que involucra una serie de ralaciones "; 
									contan=contan+1;
								}	
							cout<<"23-?Que se entiended por lenguaje de programacion?"<<endl;
							cout<<"a)Es una forma de interaccion de los humanos con los computadores"<<endl;
							cout<<"b)Es  un conjunto de instrucciones con el fin de interactuar con una computadora"<<endl;
							cout<<"c)Es una sintaxis que la computadora entiende e interpreta "<<endl;
							cout<<"d)Es un proceso eficiente utilizando la pragmatica "<<endl;
							cin>>respuesta;

							if(respuesta=='b')
								{
									cout<<"la respuesta es correcta"<<endl;
									contap=contap+1;
								}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl;
									cout<<"La respuesta correcta es Es  un conjunto de instrucciones con el fin de interactuar con una computadora "; 
									contan=contan+1;
								}	
							cout<<"24-Nombre tres fases de desarrollo de un algoritmo"<<endl;
							cout<<"a)Analisis del problema-codificacion-fin "<<endl;
							cout<<"b)Entrada-proseso-salida"<<endl;
							cout<<"c)codificacion-compilacion y ejecucion-diseño"<<endl;
							cout<<"d)Documentacion-implementacion-informe"<<endl;
							cin>>respuesta;

							if(respuesta=='c')
								{
									cout<<"la respuesta es correcta"<<endl;
									contap=contap+1;
								}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									cout<<"La respuesta correcta es codificacion-compilacion y ejecucion-diseño "; 
									contan=contan+1;
								}
							cout<<"25-Nombre tres lenguajes de programacion"<<endl;
							cout<<"a)Pithon-C++-Javaescript"<<endl;
							cout<<"b)httml-SQL-Perl"<<endl;
							cout<<"c)Python-C++-JavaScript"<<endl;
							cout<<"d)Html-C+-Pel"<<endl;
							cin>>respuesta;

							if(respuesta=='c')
								{
									cout<<"la respuesta es correcta"<<endl;
									contap=contap+1;
								}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									cout<<"La respuesta correcta es Python-C++-JavaScript "; 
									contan=contan+1;
								}										 
							cout<<"26-?cuales de los siguientes terminos son indispensables en la programacion?"<<endl;
							cout<<"a)smoke,drink,dance"<<endl;
							cout<<"b)develop,template,toolbar"<<endl;
							cout<<"c)username,password,wifi"<<endl;
							cout<<"d)screen,phone,code"<<endl;
							cin>>respuesta;

							if(respuesta=='b')
								{
									cout<<"la respuesta es correcta"<<endl;
									contap=contap+1;
								}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									cout<<"La respuesta correcta es develop,template,toolbar"; 
									contan=contan+1;
								}	 
							cout<<"27-?que lenguajes de programacion no son basados en el idioma ingles?"<<endl;
							cout<<"a)phyton,lua,ruby"<<endl;
							cout<<"b)java,c++,phyton"<<endl;
							cout<<"c)c++,php,basic"<<endl;
							cout<<"d)visual basic,swift,ruby"<<endl;
							cin>>respuesta;

							if(respuesta=='a')
								{
									cout<<"la respuesta es correcta"<<endl;
									contap=contap+1;
								}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl;
									cout<<"La respuesta correcta es phyton,lua,ruby";
									contan=contan+1;
								}	
							cout<<"28-I from bogota,?what is my country?"<<endl;
							cout<<"a)Venezuela"<<endl;
							cout<<"b)USA"<<endl;
							cout<<"c)Honduras"<<endl;
							cout<<"d)Colombia"<<endl;
							cin>>respuesta;

							if(respuesta=='d')
								{
									cout<<"la respuesta es correcta"<<endl;
									contap=contap+1;
								}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									cout<<"La respuesta correcta es Colombia";
									contan=contan+1;
								}	
							cout<<"29-?which of these language is for beginners?"<<endl;
							cout<<"a)lpp"<<endl;
							cout<<"b)phyton"<<endl;
							cout<<"c)c++"<<endl;
							cout<<"d)visual basic"<<endl;
							cin>>respuesta;

							if(respuesta=='a')
								{
									cout<<"la respuesta es correcta"<<endl;
									contap=contap+1;
								}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									cout<<"La respuesta correcta es lpp";
									contan=contan+1;
								}
							cout<<"30-?que traduce la siguiente expresion?, how often"<<endl;
							cout<<"a)duracion"<<endl;
							cout<<"b)edad"<<endl;
							cout<<"c)rapidez"<<endl;
							cout<<"d)frecuencia"<<endl;
							cin>>respuesta;

							if(respuesta=='d')
								{
									cout<<"la respuesta es correcta"<<endl;
									contap=contap+1;
								}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									cout<<"La respuesta correcta es frecuencia";
									contan=contan+1;
								}	
							cout<<"31- Dada la siguiente función en un lenguaje de programación hipotético:"<<endl<<"def buscar_numero_mayor(lista):"<<endl<<"if len(lista == 0):"<<endl<<"\treturn Note"<<endl<<"else:"<<endl<<"\tmayor = lista[0]"<<endl<<"\tfor num in lista:"<<endl<<"\t\tif num > mayor:"<<endl<<"\t\t\tmayor = num"<<endl<<"\t\treturn mayor";
							cout<<"a) 7"<<endl;
							cout<<"b) 15"<<endl;
							cout<<"c) 2"<<endl;
							cout<<"d) 9"<<endl;
							cin>>respuesta;

							if(respuesta=='b')
								{
									cout<<"la respuesta es correcta"<<endl;
									contap=contap+1;
								}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl;
									cout<<"la respuesta 15 "<<endl;
									contan=contan+1;
								}	 
							cout<<"32- ¿Cuál es la diferencia entre un bucle for y un bucle while en programación?"<<endl;
							cout<<"a)Un bucle for se utiliza cuando se conoce el número exacto de iteraciones"<<endl;
							cout<<"b)un bucle while se utiliza cuando el número de iteraciones puede variar y depende de una condición."<<endl;
							cout<<"c)a y b son correctas"<<endl;
							cout<<"d)Un bucle for se utiliza cuando se conoce el número exacto de iteraciones, mientras que un bucle while se utiliza cuando el número de iteraciones puede variar y depende de una condición."<<endl;
							cin>>respuesta;

							if(respuesta=='d')
								{
									cout<<"la respuesta es correcta"<<endl;
									contap=contap+1;
								}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl;
									cout<<"la respuesta correcta es Un bucle for se utiliza cuando se conoce el número exacto de iteraciones, mientras que un bucle while se utiliza cuando el número de iteraciones puede variar y depende de una condición. "<<endl; 
									contan=contan+1;
								}	
							cout<<"33-¿Qué es la recursividad en programación?"<<endl;
							cout<<"a)Es ser recursivo"<<endl;
							cout<<"b)La recursividad es un concepto en el que una función se llama a sí misma directa o indirectamente para resolver un problema más pequeño dentro de un problema más grande."<<endl;
							cout<<"c)Permite crear métodos y funciones capaces de enumerar cualquier tipo de estructura"<<endl;
							cout<<"d)Es resolver ciertas tareas de manera elegante"<<endl;
							cin>>respuesta;

							if(respuesta=='b')
								{
									cout<<"la respuesta es correcta"<<endl;
									contap=contap+1;
								}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									cout<<"la respuesta correcta es La recursividad es un concepto en el que una función se llama a sí misma directa o indirectamente para resolver un problema más pequeño dentro de un problema más grande. "<<endl;
									contan=contan+1;
								}	
							cout<<"34-¿Qué es la optimización de código y por qué es importante en la programación?"<<endl;
							cout<<"a)La optimización de código es el proceso de mejorar el rendimiento, eficiencia y legibilidad del código"<<endl;
							cout<<"b)Es el proceso a través del cual se mejora la eficiencia y rapidez de un sistema informático"<<endl;
							cout<<"c)es el proceso de hacer algo lo más efectivo o funcional posible"<<endl;
							cout<<"d)conjunto de fases de un compilador que transforman un fragmento de código en otro fragmento con un comportamiento equivalente y que se ejecuta de forma más eficiente"<<endl;
							cin>>respuesta;

							if(respuesta=='a')
								{
									cout<<"la respuesta es correcta"<<endl;
									contap=contap+1;
								}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									cout<<"la respuesta correcta es La optimización de código es el proceso de mejorar el rendimiento, eficiencia y legibilidad del código "<<endl;
									contan=contan+1;
								}
							cout<<"35-¿Cuál es la importancia de los comentarios en el código de programación?"<<endl;
							cout<<"a)Es texto que el compilador omite pero que es útil para los programadores"<<endl;
							cout<<"b)Se pueden utilizar para resumir el código o para explicar la intención del programador"<<endl;
							cout<<"c)Los comentarios son texto descriptivo que se añade al código para explicar su funcionamiento y facilitar su comprensión a otros programadores"<<endl;
							cout<<"d)Es inddicar algo en la fuente"<<endl;
							cin>>respuesta;

							if(respuesta=='c')
								{
									cout<<"la respuesta es correcta"<<endl;
									contap=contap+1;
								}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									cout<<"la respuesta correcta es Los comentarios son texto descriptivo que se añade al código para explicar su funcionamiento y facilitar su comprensión a otros programadores "<<endl;
									contan=contan+1;
								}										 
							cout<<"36-¿Qué son las estructuras de datos en programación y cuál es su función?"<<endl;
							cout<<"a)Las estructuras de datos son formas de organizar y almacenar datos en la memoria de una computadora para facilitar su acceso y manipulación eficiente."<<endl;
							cout<<"b)develop,template,toolbar"<<endl;
							cout<<"c)username,password,wifi"<<endl;
							cout<<"d)screen,phone,code"<<endl;
							cin>>respuesta;

							if(respuesta=='a')
								{
									cout<<"la respuesta es correcta"<<endl;
									contap=contap+1;
								}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									cout<<"la respuesta correcta es Las estructuras de datos son formas de organizar y almacenar datos en la memoria de una computadora para facilitar su acceso y manipulación eficiente."<<endl;
									contan=contan+1;
								}	 
							cout<<"37-¿Qué algoritmo utilizarías para verificar si un grafo es bipartito?"<<endl;
							cout<<"a)Usaría un algoritmo de coloreado de grafos con dos colores, aplicando una búsqueda en anchura o en profundidad para asegurar que no haya adyacencias entre nodos del mismo color. "<<endl;
							cout<<"b)Una función que maneja eventos."<<endl;
							cout<<"c)Una unidad de archivos."<<endl;
							cout<<"d)Ninguna es correcta."<<endl;
							cin>>respuesta;

							if(respuesta=='a')
								{
									cout<<"la respuesta es correcta"<<endl;
									contap=contap+1;
								}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									cout<<"la respuesta correcta es Usaría un algoritmo de coloreado de grafos con dos colores, aplicando una búsqueda en anchura o en profundidad para asegurar que no haya adyacencias entre nodos del mismo color."<<endl;
									contan=contan+1;
								}	
							cout<<"38-¿Cómo podrías optimizar la búsqueda en un arreglo ordenado pero rotado?"<<endl;
							cout<<"a)Con una función."<<endl;
							cout<<"b)Un archivo configurado."<<endl;
							cout<<"c)Emplearía una variante de la búsqueda binaria que pueda manejar el punto de rotación del arreglo"<<endl;
							cout<<"d)Ninguna es correcta"<<endl;
							cin>>respuesta;

							if(respuesta=='c')
								{
									cout<<"la respuesta es correcta"<<endl;
									contap=contap+1;
								}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									cout<<"la respuesta correcta es Emplearía una variante de la búsqueda binaria que pueda manejar el punto de rotación del arreglo"<<endl;
									contan=contan+1;
								}	
							cout<<"39-¿Qué técnica aplicarías para encontrar el ancestro común más bajo en un árbol binario de búsqueda?"<<endl;
							cout<<"a)Realizaría una búsqueda simultánea desde la raíz, moviéndome hacia la izquierda o la derecha dependiendo de los valores de los nodos hasta encontrar el ancestro común"<<endl;
							cout<<"b)Una unidad reutilizable"<<endl;
							cout<<"c)A y B son correctas"<<endl;
							cout<<"d)Ninguna es correcta"<<endl;
							cin>>respuesta;

							if(respuesta=='a')
								{
									cout<<"la respuesta es correcta"<<endl;
									contap=contap+1;
								}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									cout<<"la respuesta correcta es Realizaría una búsqueda simultánea desde la raíz, moviéndome hacia la izquierda o la derecha dependiendo de los valores de los nodos hasta encontrar el ancestro común"<<endl;
									contan=contan+1;
								}
							cout<<"40-¿Qué enfoque tomarías para verificar si dos árboles binarios son isomorfos?"<<endl;
							cout<<"a)Considerando todos los casos posibles"<<endl;
							cout<<"b)Implementaría el algoritmo"<<endl;
							cout<<"c)Compararía los nodos de ambos árboles recursivamente, considerando todos los casos posibles de isomorfismo"<<endl;
							cout<<"d)Los nodos de ambos árboles recursivamente"<<endl;
							cin>>respuesta;

							if(respuesta=='c')
								{
									cout<<"la respuesta es correcta"<<endl;
									contap=contap+1;
								}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									cout<<"la respuesta correcta es Compararía los nodos de ambos árboles recursivamente, considerando todos los casos posibles de isomorfismo"<<endl;
									contan=contan+1;
								}	
				default:cout<<"nooooooooommm";									
				break;
				}
				case 4: cout<< "CODIFICAR EL SOFTWARE."<<endl<<endl;
						cout<< "1-¿cual es el valor de 8942 en binario?"<<endl;
						cout<< "a)10001011101110"<<endl;
						cout<< "b)11001011101011"<<endl;
						cout<< "c)10101011101110"<<endl;
						cout<< "d)11010101010111"<<endl;
						cin>>respuesta;
						
						if(respuesta=='a')
							{
						  		cout<<"la respuesta es correcta"<<endl;
						  		contap=contap+1;
					    	}
					    else 
					    	{
					    		cout<<"la respuesta es incorrecta"<<endl;
					    		contan=contan-1;
							}
						cout<< "2-¿cual es el valor del binario 111111?"<<endl;
						cout<< "a)62"<<endl;
						cout<< "b)63"<<endl;
						cout<< "c)64"<<endl;
						cout<< "d)61"<<endl;
						cin>>respuesta;
						
						if(respuesta=='b')
							{
						  		cout<<"la respuesta es correcta"<<endl;
						  		contap=contap+1;
					    	}
					    else 
					    	{
					    		cout<<"la respuesta es incorrecta"<<endl;
					    		contan=contan-1;
							}
						cout<< "3-¿cual es el valor en binario de 628?"<<endl;
						cout<< "a)1001011010"<<endl;
						cout<< "b)1111111110"<<endl;
						cout<< "c)1001110100"<<endl;
						cout<< "d)1111100000"<<endl;
						cin>>respuesta;
						
						if(respuesta=='c')
							{
						  		cout<<"la respuesta es correcta"<<endl;
						  		contap=contap+1;
					    	}
					    else 
					    	{
					    		cout<<"la respuesta es incorrecta"<<endl;
					    		contan=contan-1;
							}
						cout<< "4-¿cual es el valor en decimal de 11000000111001?"<<endl;
						cout<< "a)123123"<<endl;
						cout<< "b)12345"<<endl;
						cout<< "c)12125"<<endl;
						cout<< "d)12344"<<endl;
						cin>>respuesta;
						
						if(respuesta=='b')
							{
						  		cout<<"la respuesta es correcta"<<endl;
						  		contap=contap+1;
					    	}
					    else 
					    	{
					    		cout<<"la respuesta es incorrecta"<<endl;
					    		contan=contan-1;
							}
						cout<< "5-¿cual es el valor en binario de 33?"<<endl;
						cout<< "a)100001"<<endl;
						cout<< "b)101001"<<endl;
						cout<< "c)100100"<<endl;
						cout<< "d)110000"<<endl;
						cin>>respuesta;
						
						if(respuesta=='a')
							{
						  		cout<<"la respuesta es correcta"<<endl;
						  		contap=contap+1;
					    	}
					    else 
					    	{
					    		cout<<"la respuesta es incorrecta"<<endl;
					    		contan=contan-1;
							}
						cout<< "6-¿cual es el valor en binario de 42?"<<endl;
						cout<< "a)111010"<<endl;
						cout<< "b)101011"<<endl;
						cout<< "c)110011"<<endl;
						cout<< "d)101010"<<endl;
						cin>>respuesta;
						
						if(respuesta=='d')
							{
						  		cout<<"la respuesta es correcta"<<endl;
						  		contap=contap+1;
					    	}
					    else 
					    	{
					    		cout<<"la respuesta es incorrecta"<<endl;
					    		contan=contan-1;
							}
						cout<< "7-¿cual es el valor decimal de 1000010000?"<<endl;
						cout<< "a)529"<<endl;
						cout<< "b)526"<<endl;
						cout<< "c)527"<<endl;
						cout<< "d)528"<<endl;
						cin>>respuesta;
						
						if(respuesta=='d')
							{
						  		cout<<"la respuesta es correcta"<<endl;
						  		contap=contap+1;
					    	}
					    else 
					    	{
					    		cout<<"la respuesta es incorrecta"<<endl;
					    		contan=contan-1;
							}
						cout<< "8-¿cual es el valor en decimal de 110011010100?"<<endl;
						cout<< "a)4823"<<endl;
						cout<< "b)3284"<<endl;
						cout<< "c)8234"<<endl;
						cout<< "d)2348"<<endl;
						cin>>respuesta;
						
						if(respuesta=='b')
							{
						  		cout<<"la respuesta es correcta"<<endl;
						  		contap=contap+1;
					    	}
					    else 
					    	{
					    		cout<<"la respuesta es incorrecta"<<endl;
					    		contan=contan-1;
							}
						cout<< "9-¿cual es el valor en binario de 62?"<<endl;
						cout<< "a)111110"<<endl;
						cout<< "b)101111"<<endl;
						cout<< "c)110111"<<endl;
						cout<< "d)111011"<<endl;
						cin>>respuesta;
						
						if(respuesta=='a')
							{
						  		cout<<"la respuesta es correcta"<<endl;
						  		contap=contap+1;
					    	}
					    else 
					    	{
					    		cout<<"la respuesta es incorrecta"<<endl;
					    		contan=contan-1;
							}			
						cout<< "10-¿que es un numero binario?"<<endl;
						cout<< "a)una interpretacion de textos transformada en 1-0"<<endl;
						cout<< "b)son numeros  que representan constantes positivos y negativos"<<endl;
						cout<< "c)son un arreglo de dos caracteres, 1 y 0"<<endl;
						cout<< "d)son el idioma del internet"<<endl;
						cin>>respuesta;
						
						if(respuesta=='c')
							{
						  		cout<<"la respuesta es correcta"<<endl;
						  		contap=contap+1;
					    	}
					    else 
					    	{
					    		cout<<"la respuesta es incorrecta"<<endl;
					    		contan=contan-1;
							}	
			break;		
			case 5:
					cout<<"CONSTRUIR LA BASE DE DATOS "<<endl; 
					cout<<"1-¿Que es Mantenimiento de equipo de computo basico?"<<endl;
					cout<<"a)procedimiento de limpieza  y sustitucion de pieza "<<endl;
					cout<<"b)procedimiento para mantener y programar aplicaciones "<<endl;
					cout<<"c)programa que limpia todo tu pc "<<endl;
					cout<<"d)Todas las anteriores "<<endl;
					cin>>respuesta;
				    if(respuesta=='a')
						{
					  		cout<<"la respuesta es correcta1"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl;
							contan=contan+1;
						}	
							cout<<"2-¿Que herramientas se utilizan para el mantenimiento preventivo ?"<<endl;
							cout<<"a)Espuma limpiadora "<<endl;
							cout<<"b)Desarmadores y Pulsera antiestatica "<<endl;
							cout<<"c)Aire comprimido,borrador y brocha "<<endl;
							cout<<"d)Todas las anteriores"<<endl;
							cin>>respuesta;	
				    if(respuesta=='d')
						{
							cout<<"la respuesta es correcta"<<endl;
							contap=contap+1;
					    }
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
							cout<<"¿3-¿Cual es la manera mas eficas para hacer un mantenimiento ?"<<endl;
							cout<<"a)desconectar el teclado y el mouse "<<endl;
							cout<<"b)salvar los archivos importantes e instalar windows nuevamente"<<endl;
							cout<<"c)limpiar la parte externa"<<endl;
							cout<<"d)Todas son erroneas "<<endl;
							cin>>respuesta;	
				    if(respuesta=='b')
					    {
					    	cout<<"la respuesta es correcta3"<<endl;
					    	contap=contap+1;
					    }
					else
						{
					    	cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
					    }
					    	cout<<"4-¿cada cuanto crees que se hace un mantenimiento preventivo?"<<endl;
							cout<<"a)cada 10 años"<<endl;
							cout<<"b)cada que el ordenador presenta fallas "<<endl;
							cout<<"c)cuando se considere necesario para evitar posibles daños"<<endl;
							cout<<"d)cada 3 meses de antelacion que instales programas nuevos "<<endl;
							cin>>respuesta;
					if(respuesta=='c')
						{
					    	cout<<"la respuesta es correcta"<<endl;	
					    	contap=contap+1;
					    } 
					else
						{
					    	cout<<"La respuesta es incorrecta"<<endl;
					    	contan=contan+1;
					    }
					    cout<<"5-¿que debo utilizar como refigerante?"<<endl;
							cout<<"a)pasta termica "<<endl;
							cout<<"b)crema de leche "<<endl;
							cout<<"c)crema dental "<<endl;
							cout<<"d)masa refigerante"<<endl;
							cin>>respuesta;
					if(respuesta=='a')
						{
					    	cout<<"la respuesta es correcta"<<endl;
					    	contap=contap+1;
					    }
					else
						{
					    	cout<<"La respuesta es incorrecta"<<endl; 
					    	contan=contan+1;	
					    }
			break;
			case 6:
					cout<<"PROGRAMAR SENTENCIAS SQL. "<<endl; 
					cout<<"1-¿Cuáles son los pilares de la programación orientada a objetos?"<<endl;
					cout<<"a)abstracción, encapsulamiento, polimorfismo y herencia."<<endl;
					cout<<"b)herencia, clases, subclase, encapsulamiento "<<endl;
					cout<<"c)polimorfismo, herencia"<<endl;
					cout<<"d)datos, funcionalidades, polimorfismo"<<endl;
					cin>>respuesta;

				    if(respuesta=='a')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	 
					cout<<"2-¿Qué significado en (poo) paradigma?"<<endl;
					cout<<"a)Código de programación con una estructura específica"<<endl;
					cout<<"b)Base de datos del usuario"<<endl;
					cout<<"c)Estilo diferente de programar del programador"<<endl;
					cout<<"d)Restricción de datos al usuario"<<endl;
					cin>>respuesta;

				    if(respuesta=='c')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	
					cout<<"3-¿Que es una superclase en (poo)?"<<endl;
					cout<<"a)Dependencia del programa"<<endl;
					cout<<"b)Creación de nuevas clases"<<endl;
					cout<<"c)En donde se insertan los datos de los usuarios"<<endl;
					cout<<"d)La clase cuyas características se heredan"<<endl;
					cin>>respuesta;

				    if(respuesta=='d')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	
					cout<<"4-¿Que funcionalidad en programación orientada a objetos?"<<endl;
					cout<<"a)Pedir todos de usuario "<<endl;
					cout<<"b)Ordenes programadas en las clases"<<endl;
					cout<<"c)Seguridad del programa"<<endl;
					cout<<"d)Todas las anteriores"<<endl;
					cin>>respuesta;

				    if(respuesta=='b')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
					cout<<"5-¿Datos = Atributos?"<<endl;
					cout<<"a)Falso"<<endl;
					cout<<"b)Verdadero"<<endl;
					cout<<"c)no se "<<endl;
					cout<<"d)ninguno"<<endl;
					cin>>respuesta;

				    if(respuesta=='b')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
					cout<<"6-¿Para que nos sirve una clase en poo?"<<endl;
					cout<<"a)Por si sola no nos sirve de nada"<<endl;
					cout<<"b)Para definir un objeto "<<endl;
					cout<<"c)Para aprender"<<endl;
					cout<<"d)Ninguna"<<endl;
					cin>>respuesta;

				    if(respuesta=='a')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
					cout<<"7-¿Que pilar del poo permite todo lo referente a que un objeto quede aislado dentro de este?"<<endl;
					cout<<"a)Encapsulacion"<<endl;
					cout<<"b)Polimorfismo "<<endl;
					cout<<"c)Abstraccion"<<endl;
					cout<<"d)Herencia"<<endl;
					cin>>respuesta;

				    if(respuesta=='a')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
					cout<<"8- Polimorfismo se refiere a: "<<endl;
					cout<<"a)Poder modificar algunos datos heredados"<<endl;
					cout<<"b)Representacion de caracteristicas de entidades hacia el mundo exterior, pero ocultando la complejidad"<<endl;
					cout<<"c)Varios objetos de diferentes clases, pero con una base común, se pueden usar de manera indistintal"<<endl;
					cout<<"d)Todas las anteriores"<<endl;
					cin>>respuesta;

				    if(respuesta=='c')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
					cout<<"9-¿Cual es el concepto verdadero de atributo?"<<endl;
					cout<<"a)Consigue clasificar los tipos de datos (abstracciones) por variedad (ES-UN), acercando un poco más el mundo de la programación al modo de razonar humano, por ejemplo, diremos que Un perro ES_UN animal."<<endl;
					cout<<"b)definen el comportamiento de un objeto: las acciones que puede realizar en función de los eventos que ocurran en su entorno y de su estado actu"<<endl;
					cout<<"c)Es un elemento tangible (ocupa memoria) generado a partir de una definición de clase."<<endl;
					cout<<"d)Se define como la capacidad de una entidad de referenciar distintos elementos en distintos instantes de tiempo."<<endl;
					cin>>respuesta;

				    if(respuesta=='b')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
					cout<<"10-¿cual es la herramientas que permite modelar relaciones entre diferentes entidades?"<<endl;
					cout<<"a)Herencia"<<endl;
					cout<<"b)Encapsulamiento"<<endl;
					cout<<"c)Diagrama de clases"<<endl;
					cout<<"d)Funciones"<<endl;
					cin>>respuesta;

				    if(respuesta=='c')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
			break;
			case 7: 
					cout<<"CREAR COMPONENTES FRONT-END"<<endl; 
					cout<<"1-¿cuales son los tres pilares principales de la ciberseguridad?"<<endl;
					cout<<"a)amistad, valores y conocimiento"<<endl;
					cout<<"b)avances tecnologicos, antivirus y protocolos"<<endl;
					cout<<"c)honestidad, confidencialidad y recursos"<<endl;
					cout<<"d)Integridad, confidencialidad y disponibilidad"<<endl;
					cin>>respuesta;

				    if(respuesta=='d')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	 
					cout<<"		2-¿Cuáles son los principales tipos de ataques y alertas actuales?"<<endl;
					cout<<"a)APT, Advanced Persistent Threat"<<endl;
					cout<<"b)El phishing"<<endl;
					cout<<"c)Malware"<<endl;
					cout<<"d)Fake News"<<endl;
					cin>>respuesta;

				    if(respuesta=='b')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	
					cout<<"		3-¿A que se le considera Antispyware?"<<endl;
					cout<<"a)funcion que procesa algoritmos decodificados"<<endl;
					cout<<"b)programa para controlar el sistema operativo de un equipo de computo"<<endl;
					cout<<"c)Herramienta de software diseñada para detectar y eliminar programas maliciosos"<<endl;
					cout<<"d)ninguna de las anteriores"<<endl;
					cin>>respuesta;

				    if(respuesta=='c')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	
							cout<<"		4-¿Que es un Backup?"<<endl;
					cout<<"a)Copia de seguridad que protege los datos en caso de ser eliminados del disco duro"<<endl;
					cout<<"b)herramienta de sefuridad compuesto por varios programas enlazados"<<endl;
					cout<<"c)Es una aplicacion web con gestor de contenidos"<<endl;
					cout<<"d)programa informatico que aprovecha errores para mejorar su desarrollo"<<endl;
					cin>>respuesta;

				    if(respuesta=='a')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
					cout<<"5-¿Cual es el objetivo de la ciberseguridad?"<<endl;
					cout<<"a)prevenir, proteger y detectar amenazas de manera temprana en datos o informacion sensible, asi mismo recuperar datos y/o dispositivos atacados "<<endl;
					cout<<"b)Es el estudio que comprende el análisis y gestión de sistemas llevado a cabo por profesionales en tecnologías de la información (TI) con el objetivode identificar, enumerar y describir las diversas vulnerabilidades"<<endl;
					cout<<"c)Es dirigir las transacciones comerciales entre empresas, utilizando medios telemáticos como EDI (Electronic Data Interchange) o el Comercio Electrónico."<<endl;
					cout<<"d)Tiene como objetivo dirigir las rutas de los datos en riesgo a bases seguras para ser analizadas por personal profesional con sofware adaptado a las necesidades "<<endl;
					cin>>respuesta;

				    if(respuesta=='a')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
					cout<<"6-¿Que es un dominio en ciberseguridad?"<<endl;
					cout<<"a)Es un solo sistema operativo destinado a la navegacion en la web"<<endl;
					cout<<"b)Es una direccion unica y legible para identificar y acceder a recursos de la web"<<endl;
					cout<<"c)es la parte que se puede personalizar y puede elegir el propietario del sitio web."<<endl;
					cout<<"d) la respuesta b y c son correctas."<<endl;
					cin>>respuesta;

				    if(respuesta=='d')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
					cout<<"7-¿cuales son las fases de la ciberseguridad?"<<endl;
					cout<<"a)compilar, operar, solucionar y verificar"<<endl;
					cout<<"b)Prevencion, metodologia, transformacion y regulacion"<<endl;
					cout<<"c)Prevencion, deteccion, respuesta y conservacion"<<endl;
					cout<<"d)todas las opciones son correctas"<<endl;
					cin>>respuesta;

				    if(respuesta=='c')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
					cout<<"8-¿Que es la criptografia en la seguridad cibernetica ?"<<endl;
					cout<<"a)Es un codigo con orden estructurado de aspectos basicos para la proteccion de datos"<<endl;
					cout<<"b)Es un sistema Operativo que encripta informacion para dificultar su violacion"<<endl;
					cout<<"c)Es una práctica que consiste en proteger información mediante el uso de algoritmos codificados, hashes y firmas"<<endl;
					cout<<"d)Es un lenguaje de desarrollo cibernetico que guarda datos para trasladarlos de forma segura de una base a otra"<<endl;
					cin>>respuesta;

				    if(respuesta=='c')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
					cout<<"9-Funciones de un Firewall"<<endl;
					cout<<"a)proteger el sistema de malware, gusanos y virus"<<endl;
					cout<<"b)dirigir la informacion a un servidor para que contenido no sea publico"<<endl;
					cout<<"c)impide la filtracion de contenido"<<endl;
					cout<<"d)a y c son correctas"<<endl;
					cin>>respuesta;

				    if(respuesta=='d')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
					cout<<"10-¿Cuales son los beneficios de la ciberseguridad?"<<endl;
					cout<<"a)cumplir con requisitos legales, evitar perdidas financieras, conciencia de seguridad"<<endl;
					cout<<"b)control de acceso, productividad del equipo, recuperacion de informacion"<<endl;
					cout<<"c)proteccion a la infraestructura de la red, confianza, monitoreo interno"<<endl;
					cout<<"d)todas las anteriores"<<endl;
					cin>>respuesta;

				    if(respuesta=='d')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
			break;
			case 8: 
				cout<<"LENGUAJE DE PROGRAMACION C++"<<endl; 
					cout<<"1-¿Que es C++?"<<endl;
					cout<<"a)Lenguaje de señas"<<endl;
					cout<<"b)Lenguaje de programación considerado como uno de los de mayor nivel en cuanto a posibilidades en el mundo de la manipulación de objetos."<<endl;
					cout<<"c)Lenguaje de programacion para realizar pausas activas"<<endl;
					cout<<"d)a y c son correctas"<<endl;
					cin>>respuesta;

				    if(respuesta=='b')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	 
					cout<<"2.¿Que es una base de datos en C++?"<<endl;
					cout<<"a)Alternativa para almacenar y procesar datos a gran escala. "<<endl;
					cout<<"b)Es un archivo que contiene datos"<<endl;
					cout<<"c)Es un disco duro"<<endl;
					cout<<"d)Es un espacio en la nube de almacenamiento"<<endl;
					cin>>respuesta;

				    if(respuesta=='a')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	
					cout<<"3-¿Como funciona el cout y el cin?"<<endl;
					cout<<"a)El cout sirve para cortar y el cin para pegar"<<endl;
					cout<<"b)El cin se utiliza para introducir datos con el operador"<<endl;
					cout<<"c)El cout permite mostrar por pantalla cualquier tipo de dato"<<endl;
					cout<<"d)b y c son correctas"<<endl;
					cin>>respuesta;

				    if(respuesta=='d')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	 
					cout<<"4.¿Para que se utilizan las bibliotecas en C++?"<<endl;
					cout<<"a)Sitio para investigar,aprender y leer "<<endl;
					cout<<"b)Para guardar informacion"<<endl;
					cout<<"c)Contienen el código objeto de muchos programas que permiten hacer cosas comunes, como leer el teclado, escribir en la pantalla,etc"<<endl;
					cout<<"d)b y c son correctas"<<endl;
					cin>>respuesta;

				    if(respuesta=='c')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	
					cout<<"5-¿cual es la funcion que cumple el if/else?"<<endl;
					cout<<"a)if condición define la condición que determina qué valor se asigna."<<endl;
					cout<<"b)Else expresión define el valor que se asigna si la condición es false. ."<<endl;
					cout<<"c)se utiliza para introducir datos con el operador"<<endl;
					cout<<"d)a y b son correctas"<<endl;
					cin>>respuesta;

				    if(respuesta=='d')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	 
					cout<<"6.¿Que funcion cumple el char?"<<endl;
					cout<<"a)Se usa para abrir un caso"<<endl;
					cout<<"b)Se usa para almacenar el valor entero de un miembro del juego de caracteres que se puede representar."<<endl;
					cout<<"c)Es un lenguaje de programacion"<<endl;
					cout<<"d)Es un archivo"<<endl;
					cin>>respuesta;

				    if(respuesta=='b')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	
					cout<<"7.¿Para que incluimos el <iostream>?"<<endl;
					cout<<"a)Se usa para que el cout y el cin funcionen"<<endl;
					cout<<"b)Se usa para almacenar un numero"<<endl;
					cout<<"c)Para que lea el programa"<<endl;
					cout<<"d)Para agregar un color a los caracteres"<<endl;
					cin>>respuesta;

				    if(respuesta=='a')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	
					cout<<"8.¿Que funcion cumple el endl?"<<endl;
					cout<<"a)Se usa para ejecutar el programa"<<endl;
					cout<<"b)Se usa para compilar el programa"<<endl;
					cout<<"c)Se usa oara acabar la linea y pasar a la siguiente"<<endl;
					cout<<"d)Se usa para terminar el programa"<<endl;
					cin>>respuesta;

				    if(respuesta=='c')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	
					cout<<"9.¿Que funcion cumple el using namespace std?"<<endl;
					cout<<"a)Se usa para abrir un caso"<<endl;
					cout<<"b)Permite tener un alcance directo a todas las funciones declaradas en un espacio de nombres"<<endl;
					cout<<"c)nombre de espacio"<<endl;
					cout<<"d)saturacion de archivos"<<endl;
					cin>>respuesta;

				    if(respuesta=='b')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	
					cout<<"10.¿Con que funcion declaramos un entero?"<<endl;
					cout<<"a)todas las anteriores"<<endl;
					cout<<"b)con la funcion else"<<endl;
					cout<<"c)int"<<endl;
					cout<<"d)a y b son correctas"<<endl;
					cin>>respuesta;

				    if(respuesta=='c')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}						
			break;
			case 9:		cout<<"Algoritmia"<<endl;	 
			break;
			case 11:	cout<<"otrassssss"<<endl;
			break;																		
			case 10: 	cout<< "10)Salir"<<endl;
						exit(0);
			break;
			default:cout<<endl<<endl<<"No hay opciom"<<endl<<endl;
			break;
					//system ("pause");	//getch();	

				}	
			cout<<"  Las respuestas correctas fueron: "<<contap<<endl;
			cout<<"Las respuestas incorrectas fueron: "<<contan<<endl;
			if(contap>=5)
				{
					cout<<"felicitaciones aprobaste el examen"<<endl<<endl;
				}
			else
				{
				if(contador==2)
					{
						repetir='n';
						cout<<"La cantidad de intentos ha terminado tu calificacion es: "<<contap<<" NO aprobaste el examen"<<endl<<endl;
					}
				else
					{
					if(contador<2)
						{
							cout<<"deseas repetir la prueba? s/n"<<endl<<endl;
							cin>>repetir;
						}
					}
				}	
			}
		while((contap<5) && (repetir=='s'));
		}					
	else
		{
		if(idioma==2)
			{
				cout<<"Estas en idioma- Ingles "<<endl;
			}
		else
			{
			if(idioma==3)
				{
					cout<<"Estas en idioma- Aleman "<<endl;
				}	
			else
				{
					cout<<"Estas en idioma- desconocido "<<endl;	
				}
			}
		}
}