#include <iostream>
using namespace std;
int main() {
string septimo_grado[635][10];
float septimo_grado_notas[100][100];

string octavo_grado[635][10];
float octavo_grado_notas[100][100];

string noveno_grado[635][10];
float noveno_grado_notas[100][100];

float operacion = 0;
float promedio7[1935];
float promedio8[1935];
float promedio9[1935];
float registrar7mo = 0;
float cuantos_7 = 0;
float registrar8vo = 0;
float cuantos_8 = 0;
float registrar9no = 0;
float cuantos_9 = 0;
float hayregistros7 = 0;
float hayregistros8 = 0;
float hayregistros9 = 0;
float promedio_curso7 = 0;
float promedio_curso8 = 0;
float promedio_curso9 = 0;
float mayor9 = 0;
int mayor_index9 = 0;
float mayor8 = 0;
int mayor_index8 = 0;
float mayor7 = 0;
int mayor_index7 = 0;
float mayor = 0;
float cuantoscursos = 0;



cout<<"********************** REGISTRO DE DATOS *********************"<<endl<<endl;

/*  REGISTRO DE DATOS DE SEPTIMO GRADO  */
cout<<"- Desea registrar alumnos de 7mo grado? Opciones: 1=SI 2=NO: ";
cin>>registrar7mo;
if(registrar7mo == 1){
	cout<<"Cuantos alumnos desea registrar: "<<endl;
	cin>>cuantos_7;
	for(int i=0;i<cuantos_7;i++){
	cout<<"Ingrese el NOMBRE del alumno " <<i+1<< ": ";
	cin>>septimo_grado[i][0];
	cout<<"Ingrese el CODIGO del alumno " <<i+1<< ": ";
	cin>>septimo_grado[i][1];
	
	cout<<"Ingrese NOTA de la ASIGNATURA 1 del alumno " <<i+1<< ": ";
	cin>>septimo_grado_notas[i][0];
	cout<<"Ingrese NOTA de la ASIGNATURA 2 del alumno " <<i+1<< ": ";
	cin>>septimo_grado_notas[i][1];
	cout<<"Ingrese NOTA de la ASIGNATURA 3 del alumno " <<i+1<< ": ";
	cin>>septimo_grado_notas[i][2];
	cout<<"Ingrese NOTA de la ASIGNATURA 4 del alumno " <<i+1<< ": ";
	cin>>septimo_grado_notas[i][3];
	cout<<"Ingrese NOTA de la ASIGNATURA 5 del alumno " <<i+1<< ": ";
	cin>>septimo_grado_notas[i][4];
	promedio7[i] = (septimo_grado_notas[i][0] + septimo_grado_notas[i][1] + septimo_grado_notas[i][2] + septimo_grado_notas[i][3] + septimo_grado_notas[i][4]) / 5;
	septimo_grado_notas[i][5] = promedio7[i];
}
hayregistros7 = 1;
cuantoscursos = 1;
cout<<endl<<"ALUMNOS DE 7M0 GRADO REGISTRADOS CORRECTAMENTE!"<<endl;
cout<<"--------------------------------------------------------------"<<endl;	
}


/* REGISTRO DE DATOS DE OCTAVO GRADO  */
cout<<endl<<"- Desea registrar alumnos de 8vo grado? Opciones: 1=SI 2=NO: ";
cin>>registrar8vo;
if(registrar8vo == 1){
	cout<<"Cuantos alumnos desea registrar?: "<<endl;
	cin>>cuantos_8;
	for(int i=0;i<cuantos_8;i++){
	cout<<"Ingrese el NOMBRE del alumno " <<i+1<< ": ";
	cin>>octavo_grado[i][0];
	cout<<"Ingrese el CODIGO del alumno " <<i+1<< ": ";
	cin>>octavo_grado[i][1];
	
	cout<<"Ingrese NOTA de la ASIGNATURA 1 del alumno " <<i+1<< ": ";
	cin>>octavo_grado_notas[i][0];
	cout<<"Ingrese NOTA de la ASIGNATURA 2 del alumno " <<i+1<< ": ";
	cin>>octavo_grado_notas[i][1];
	cout<<"Ingrese NOTA de la ASIGNATURA 3 del alumno " <<i+1<< ": ";
	cin>>octavo_grado_notas[i][2];
	cout<<"Ingrese NOTA de la ASIGNATURA 4 del alumno " <<i+1<< ": ";
	cin>>octavo_grado_notas[i][3];
	cout<<"Ingrese NOTA de la ASIGNATURA 5 del alumno " <<i+1<< ": ";
	cin>>octavo_grado_notas[i][4];
	promedio8[i] = (octavo_grado_notas[i][0] + octavo_grado_notas[i][1] + octavo_grado_notas[i][2] + octavo_grado_notas[i][3] + octavo_grado_notas[i][4]) / 5;
	octavo_grado_notas[i][5] = promedio8[i];
}
hayregistros8 = 1;
cuantoscursos = 2;
cout<<endl<<"ALUMNOS DE 8VO GRADO REGISTRADOS CORRECTAMENTE!"<<endl;
cout<<"--------------------------------------------------------------"<<endl;
}


/* REGISTRO DE DATOS DE NOVENO GRADO  */
cout<<endl<<"- Desea registrar alumnos de 9no grado? Opciones: 1=SI 2=NO: ";
cin>>registrar9no;
if(registrar9no == 1){
	cout<<"Cuantos alumnos desea registrar?: "<<endl;
	cin>>cuantos_9;
	for(int i=0;i<cuantos_9;i++){
	cout<<"Ingrese el NOMBRE del alumno " <<i+1<< ": ";
	cin>>noveno_grado[i][0];
	cout<<"Ingrese el CODIGO del alumno " <<i+1<< ": ";
	cin>>noveno_grado[i][1];

	cout<<"Ingrese NOTA de la ASIGNATURA 1 del alumno " <<i+1<< ": ";
	cin>>noveno_grado_notas[i][0];
	cout<<"Ingrese NOTA de la ASIGNATURA 2 del alumno " <<i+1<< ": ";
	cin>>noveno_grado_notas[i][1];
	cout<<"Ingrese NOTA de la ASIGNATURA 3 del alumno " <<i+1<< ": ";
	cin>>noveno_grado_notas[i][2];
	cout<<"Ingrese NOTA de la ASIGNATURA 4 del alumno " <<i+1<< ": ";
	cin>>noveno_grado_notas[i][3];
	cout<<"Ingrese NOTA de la ASIGNATURA 5 del alumno " <<i+1<< ": ";
	cin>>noveno_grado_notas[i][4];
	promedio9[i] = (noveno_grado_notas[i][0] + noveno_grado_notas[i][1] + noveno_grado_notas[i][2] + noveno_grado_notas[i][3] + noveno_grado_notas[i][4]) / 5;
	noveno_grado_notas[i][5] = promedio9[i];
}
hayregistros9 = 1;
cuantoscursos = 3;
cout<<endl<<"ALUMNOS DE 9NO GRADO REGISTRADOS CORRECTAMENTE!"<<endl;
cout<<"--------------------------------------------------------------"<<endl;
}

	if(hayregistros7 == 0 & hayregistros8 == 0 & hayregistros9 == 0){
		cout<<endl<<endl<<"NO HAY REGISTROS PARA MOSTRAR";
	}else{
		cout<<endl<<"Que operacion de sea realizar: "<<endl;
		cout<<"Presione 1 para mostrar resultados ";
		cin>>operacion;
		if(operacion ==1){
			if(hayregistros7 == 1){
				
				cout<<endl<<"Alumnos de 7mo grado:"<<endl;
				cout<<"Nombre   Codigo   Curso   Nota1   Nota2   Nota3   Nota4   Nota5   Promedio"<<endl;
				for(int i=0; i<cuantos_7; i++){
					cout<<septimo_grado[i][0]<<"    ";
					cout<<septimo_grado[i][1]<<"    ";
					cout<<"7mo_"<<"      ";
					cout<<septimo_grado_notas[i][0]<<"      ";
					cout<<septimo_grado_notas[i][1]<<"      ";
					cout<<septimo_grado_notas[i][2]<<"      ";
					cout<<septimo_grado_notas[i][3]<<"      ";
					cout<<septimo_grado_notas[i][4]<<"      ";
					cout<<septimo_grado_notas[i][5]<<"      ";
					cout<<endl;
				}
				for(int j=0; j<cuantos_7; j++){
					promedio_curso7 = promedio_curso7 + noveno_grado_notas[j][5];
				}
				cout<<"Promedio del Curso: "<<promedio_curso7 / cuantos_7<<endl;
				mayor7=septimo_grado_notas[0][5];
				for(int s=0; s<cuantos_7; s++){
					if(septimo_grado_notas[s][5]>mayor7){
						mayor7=septimo_grado_notas[s][5];
						mayor_index7=s;
					}	
				}
				cout<<"El mejor estudiante del curso es: "<<septimo_grado[mayor_index7][0]<<" con un promedio de: "<<septimo_grado_notas[mayor_index7][5]<<endl;
				cout<<"-------------------------------------------------------"<<endl<<endl;
			}
			if(hayregistros8 == 1){
				cout<<endl<<"Alumnos de 8vo grado:"<<endl;
				cout<<"Nombre   Codigo   Curso   Nota1   Nota2   Nota3   Nota4   Nota5   Promedio"<<endl;
				for(int i=0; i<cuantos_8; i++){
					cout<<octavo_grado[i][0]<<"    ";
					cout<<octavo_grado[i][1]<<"    ";
					cout<<"8vo"<<"        ";
					cout<<octavo_grado_notas[i][0]<<"    ";
					cout<<octavo_grado_notas[i][1]<<"       ";
					cout<<octavo_grado_notas[i][2]<<"       ";
					cout<<octavo_grado_notas[i][3]<<"       ";
					cout<<octavo_grado_notas[i][4]<<"       ";
					cout<<octavo_grado_notas[i][5]<<"       ";
					cout<<endl;
				}
				for(int j=0; j<cuantos_8; j++){
					promedio_curso8 = promedio_curso8 + octavo_grado_notas[j][5];
				}
				cout<<"Promedio del Curso: "<<promedio_curso8 / cuantos_8<<endl;
				mayor8=octavo_grado_notas[0][5];
				for(int s=0; s<cuantos_8; s++){
					if(octavo_grado_notas[s][5]>mayor8){
						mayor8=octavo_grado_notas[s][5];
						mayor_index8=s;
					}	
				}
				cout<<"El mejor estudiante del curso es: "<<octavo_grado[mayor_index8][0]<<" con un promedio de: "<<octavo_grado_notas[mayor_index8][5]<<endl;
				cout<<"-------------------------------------------------------"<<endl<<endl;
			}
			if(hayregistros9 == 1){
				cout<<endl<<"Alumnos de 9no grado:"<<endl;
				cout<<"Nombre   Codigo   Curso   Nota1   Nota2   Nota3   Nota4   Nota5   Promedio"<<endl;
				for(int i=0; i<cuantos_9; i++){
					cout<<noveno_grado[i][0]<<"    ";
					cout<<noveno_grado[i][1]<<"    ";
					cout<<"9no"<<"        ";
					cout<<noveno_grado_notas[i][0]<<"    ";
					cout<<noveno_grado_notas[i][1]<<"       ";
					cout<<noveno_grado_notas[i][2]<<"       ";
					cout<<noveno_grado_notas[i][3]<<"       ";
					cout<<noveno_grado_notas[i][4]<<"       ";
					cout<<noveno_grado_notas[i][5]<<"       ";
					cout<<endl;
				}
				for(int j=0; j<cuantos_9; j++){
					promedio_curso9 = promedio_curso9 + noveno_grado_notas[j][5];
				}
				cout<<"Promedio del Curso: "<<promedio_curso9 / cuantos_9<<endl;
				mayor9=noveno_grado_notas[0][5];
				for(int s=0; s<cuantos_9; s++){
					if(noveno_grado_notas[s][5]>mayor9){
						mayor9=noveno_grado_notas[s][5];
						mayor_index9=s;
					}	
				}
				cout<<"El mejor estudiante del curso es: "<<noveno_grado[mayor_index9][0]<<" con un promedio de: "<<noveno_grado_notas[mayor_index9][5]<<endl;
				cout<<"-------------------------------------------------------"<<endl<<endl;
			}
				cout<<"INFORMACION GENERAL"<<endl<<endl;
				mayor=noveno_grado_notas[mayor_index9][5];
			if(octavo_grado_notas[mayor_index8][5]>mayor){
				mayor=octavo_grado_notas[mayor_index8][5];
				if(septimo_grado_notas[mayor_index7][5]>mayor){
					cout<<"El mejor estudiante del colegio es: "<<septimo_grado[mayor_index7][0]<<" con un promedio de: "<<septimo_grado_notas[mayor_index7][5]<<endl;
				}else{
					cout<<"El mejor estudiante del curso es: "<<octavo_grado[mayor_index8][0]<<" con un promedio de: "<<octavo_grado_notas[mayor_index8][5]<<endl;
				}
			}else if(septimo_grado_notas[mayor_index7][5]>mayor){
				cout<<"El mejor estudiante del curso es: "<<septimo_grado[mayor_index7][0]<<" con un promedio de: "<<septimo_grado_notas[mayor_index7][5]<<endl;
			}else{
				cout<<"El mejor estudiante del curso es: "<<noveno_grado[mayor_index9][0]<<" con un promedio de: "<<noveno_grado_notas[mayor_index9][5]<<endl;
			}
			cout<<"Promedio general del colegio es: "<<(promedio_curso7/cuantos_7 + promedio_curso8/cuantos_8 + promedio_curso9/cuantos_9) / cuantoscursos<<endl;
			cout<<"-------------------------------------------------------"<<endl<<endl;
		}	
	}	
	return 0;  
}		                                                                            