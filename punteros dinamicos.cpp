#include <iostream>
using namespace std; 
//punteros con asignacion de memoria dinamica 
// new = reservar un espacio en memoria 
// delete [] = liberar la memoria

main (){
	int fil = 0, col=0,**pm_notas;
	cout <<"ingrese la cantidad de estudiantes: ";
	cin >> fil;
	cout <<"ingrese las notas por estudiantes: ";
	cin >> col;
	
	pm_notas = new int *[fil];
	for (int i=0;i<fil;i++){
		pm_notas[i]=new int[col];
	}
	
	for (int i=0;i<fil;i++){
		cout <<"___________Estudiantes ______________"<<i<<endl;
		for (int ii=0;ii<col;ii++){
			cout << i<< ", nota: "<<ii<<":";
			cin >>*(*(pm_notas+i)+ii);
		}
		cout <<"_________________________"<<endl;
	}
	
	cout << "------Mostrar notas ------"<<endl;
	for (int i=0;i<fil;i++){
	
		for (int ii=0;ii<col;ii++){
			cout<<*(*(pm_notas+i)+ii)<<endl;
		}
		cout<<"_________________________"<<endl;
	}
	
	//para liberar la memoria igual como lo asignamos 
		for (int i=0;i<fil;i++){
	    delete []pm_notas[i];
	}
	delete []pm_notas;
	system ("pause");
}
