#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>


using namespace std;


void contar_caractares(string frase){

    int caracteres = frase.length();

    cout << "A frase possui " << caracteres << " caracteres" << endl;;
}

void contar_palavras(string frase){

    int palavras = 0;

    for(int i = 0; i < frase.size(); i++){

        if(frase[i] == ' ') palavras++;

    }

     cout << "A frase possui " << palavras + 1 << " palavras" << endl;

}

void contar_a(string frase){

    int aparicao_a = 0;

    for(int i = 0; i < frase.size(); i++){

        if(frase[i] == 'A' || frase[i] == 'a') aparicao_a++;

    }

    cout << "A letra a aparece " << aparicao_a << " vezes na frase" << endl;
}

void palavras_repitidas(){



    cout << "A frase possui " << repitidas << " palavras repitidas" << endl;
}


    int main (){

    setlocale(LC_ALL, "");

    vector <string> palavras_separadas;
    int palavras=0,repitidas=0, aparicao_a=0;
    string frase, ax;


    cout << "Digite a sua frase \n";
    getline(cin, frase);

    cout << endl << endl;


    contar_caractares(frase);
    contar_palavras(frase);
    contar_a(frase);
//    palavras_repitidas();



    return 0;
}
