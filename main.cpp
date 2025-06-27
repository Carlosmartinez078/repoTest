
#include <iostream>
#include <vector>
#include <fstream> //this library helps import  .txt files
#include <cctype> // to lowercase some input from the user to minimize erros
#include "headerFiles/evidencia.h" // imports the header for evidence
#include "headerFiles/otherTxtFiles.h"
#include "headerFiles/evidenceSelect.h"
#include "headerFiles/Jugador.h"
using namespace std;

int main()
{
//variables usadas
char llegarTarde; 
char pickUpEvidence; 
char victorPresentation;
char victorOption;
int totalPoints = 0;
const int limitPoints = 23;
vector<Evidencia> seleccionadas;
Jugador nombre;

//llama a los archivos en carpeta textFiles para ser leeidos
string linea; 
ifstream afterVictorFile("textFiles/refleccionDespuesDeLeerCaso.txt"); //vincula pesamientos despues de leer expediente
ifstream buscandoVictor("textFiles/buscandoVictor.txt");
ifstream victorArrepentido("textFiles/VictorArrepentido.txt");
ifstream victorInfancia ("textFiles/victorInfancia.txt");
ifstream victorCreacionCreatura ("textFiles/victorCreacionCreatura.txt");
ifstream victorHowCarcel ("textFiles/victorHowCarcel.txt");
ifstream HistoriaCase1 ("textFiles/HistoriaCase1.txt");


nombre.name();

  txtDialogFall.showLongDialog(); /*Insertar nombre de usuario de la clase jugador*/ 
  cout << whyArriveLate.character << whyArriveLate.characterDialog;


    while (true){
    cout << "\n\n a.)  Mi alarma no sono \n b.) Dile la verdad \n c.) Mi perro se murio \n ";
    cin >> llegarTarde;
    llegarTarde = tolower(llegarTarde); //hace que cualquier input sea minuscula

    if (llegarTarde =='a' || llegarTarde == 'c'){
        cout << llegarTardeA.character << llegarTardeA.characterDialog;
        break; 

    } else if (llegarTarde == 'b'){
        cout << llegarTardeB.character << llegarTardeB.characterDialog;
        break;}
         
        else{cout << "Por favor, escoje una de las opcciones previamente mencionadas\n\n"; } }


    evelynTakeArchive.showLongDialog(); //keeps the diaglog ongoign

    while (true){
         cin >> pickUpEvidence;
        if (pickUpEvidence == 'x'){
            //make something to store Victor files into "maletin"
            victorInformation.showLongDialog();
            break; 
        }
        else{
            cout << "Por favor, presione ''x'' para seguir ";
        }
    }

    while (getline(afterVictorFile, linea)){ 
        cout << linea << endl;
    }

    youHave2hrs.showShortDialog(); //more dialog of Evelyn


    while (getline(buscandoVictor, linea)){ 
        cout << linea << endl;
    }


victorInformation.showLongDialog();// How would you present yourself to victor
cin >> victorPresentation; 
victorPresentation = tolower(victorPresentation);

    if (victorPresentation == 'a'){
       victorPresentationA.showLongDialog();
    }else if (victorPresentation == 'b'){
     victorPresentationB.showLongDialog();
    } else{
        cout << "Por favor, escoge la una de las respuestas proporcionadas";
      }
    while (getline(victorArrepentido, linea)){ 
        cout << linea << endl;
    }


cout << "Que te gustaria preguntarle a Victor Primero?\n";
cout << " a). ¿Como fue tu infancia?\n b). ¿Como hiciste a la craitura?\n c). ¿Como terminaste en la carcel en si?"<< endl;
cin >> victorOption;
victorOption = tolower(victorOption);

if (victorOption == 'a'){
    while (getline(victorInfancia, linea)){
        cout << linea << endl;
    }
victorInfancia.close();
} else if (victorOption == 'b'){
    while (getline(victorCreacionCreatura, linea)){
        cout << linea << endl;
    }
victorCreacionCreatura.close();
} else if (victorOption == 'c'){
    while (getline(victorHowCarcel, linea)){
    cout << linea << endl;
}
victorHowCarcel.close();

}else{
    cout << "Por favor, escoge la una de las respuestas proporcionadas";
}

 cout << "Usuario: "<< endl;
 cout << "  Ya que tocamos el tema de los cargos... Creo que es hora que hablemos de ellos"<<endl;

 cout << "Victor: "<< endl;
 cout << "  Si... creo que tienes razon"; nombre.showName();
 cout << ". Dime, de que cargos estoy siento inputado."<< endl;
 
while (getline(HistoriaCase1, linea)){
    cout << linea << endl;
}

HistoriaCase1.close();

    menuEvidence(); // use the menu from evidenceMenu.cpp

    selectEvidence(seleccionadas, totalPoints); // use selectEvidence from evidenceSelector.cpp


    return 0;
}

 //Aqui hacer un loop de evidencia que se pueden crear en un vector y que
 //a medida el juagador vaya seleccionando las evidencia del caso1 estas 
 //vayan desaparaciendo del menu.
 //guardar la seleccion de evidencia tal vez en otro vector, en el que se pueda acceder a cualquier rato 

 //hacer cada uno de estos para cada caso. Los casos estan en Notion

    




    