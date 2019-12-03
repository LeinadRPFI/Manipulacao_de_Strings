#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>


using namespace std;


int contar_caractares(string frase){

    int caracteres = frase.length();

    return caracteres;
}

int contar_palavras(string frase){

    int palavras = 0;

    for(int i = 0; i < frase.size(); i++){

        if(frase[i] == ' ') palavras++;

    }

     return palavras + 1;
}

int contar_a(string frase){

    int aparicao_a = 0;

    for(int i = 0; i < frase.size(); i++){

        if(frase[i] == 'A' || frase[i] == 'a') aparicao_a++;

    }

    return aparicao_a;

}

int palavras_repitidas(string frase){

    vector <string> palavras_separadas;
    int posicao_espaco, quant_palavras_rep = 0;


    do{

        posicao_espaco = frase.find(' ');

        palavras_separadas.push_back(frase.substr(0, posicao_espaco));

        frase = frase.substr(posicao_espaco + 1);

    }while(posicao_espaco != -1);

        for(int i = 0; i < palavras_separadas.size(); i++){

            for(int j = 0; j < palavras_separadas.size(); j++){

                if(palavras_separadas[i] == palavras_separadas[j]){

                    if(i != j) quant_palavras_rep++;

                }

            }

        }

        return quant_palavras_rep;


}


    int main (){

    setlocale(LC_ALL, "");

    string frase;

    cout << "Digite a sua frase: \n";
    getline(cin, frase);

    cout << endl << endl;


    cout << "A frase possui " << contar_caractares(frase) << " caracteres" << endl;
    cout << "A frase possui " << contar_palavras(frase) << " palavras" << endl;
    cout << "A letra a aparece " << contar_a(frase) << " vezes na frase" << endl;
    cout << "A frase possui " << palavras_repitidas(frase) << " palavras repitidas" << endl;


    return 0;
}
