#include "CSV.h"

void CSV::setCampos(string linea) {
    campos.push_back("Year");
    campos.push_back("Make");
    campos.push_back("Model");
    campos.push_back("Description");
    campos.push_back("Price");
    nombres.push_back("Year");
    nombres.push_back("Make");
    nombres.push_back("Model");
    nombres.push_back("Description");
    nombres.push_back("Price");
}

void CSV::adicionarFila(string linea, int numeroLineas){
    if (numeroLineas == 0){
        setCampos(linea);
    } else {
        filas.push_back(linea);
    }
}

void CSV::listarCSV(){
    cout << "CSV:" << endl << endl << endl;
    listarCampos();
    for (int contador = 0; contador < filas.size() ; contador++) {
        cout << filas[contador] << endl;
    }
}

void CSV::listarJSON(){
    cout << endl << "JSON:" << endl << endl;
    cout << "{" << endl;
    cout << "   \"cars\": [" << endl;
    for (int contador = 0; contador < filas.size() ; contador++) {
        if (contador == filas.size()-1) {
            cout << "{"<< endl;
            for (int contador2 = 0; contador2 < campos.size() ; contador2++) {
                getCampo(filas[contador], contador2);
                if (contador2 == campos.size() - 1){
                    cout << "        \"" << campos[contador2] << "\": "<< valor << endl;
                } else {
                    cout << "        \"" << campos[contador2] << "\": "<< valor <<","<< endl;
                }
            }
            cout << "      }"<< endl;
        } else if (contador == 0){
            cout << "      {"<< endl;
            for (int contador2 = 0; contador2 < campos.size() ; contador2++) {
                getCampo(filas[contador], contador2);
                if (contador2 == campos.size() - 1){
                    cout << "        \"" << campos[contador2] << "\": "<< valor << endl<< endl;
                } else {
                    cout << "        \"" << campos[contador2] << "\": "<< valor <<","<< endl;
                }
            }
            cout << "      },";
        } else {
            cout << "{"<< endl;
            for (int contador2 = 0; contador2 < campos.size() ; contador2++) {
                getCampo(filas[contador], contador2);
                if (contador2 == campos.size() - 1){
                    cout << "        \"" << campos[contador2] << "\": "<< valor << endl<< endl;
                } else {
                    cout << "        \"" << campos[contador2] << "\": "<< valor <<","<< endl;
                }
            }
            cout << "      },";
        }
    }
    cout << "   ]" << endl;
    cout << "}" << endl;
    
}

void CSV::listarCampos(){
    for (int contador = 0; contador < campos.size() ; contador++) {
        if (contador == (campos.size() - 1 )){
            cout << campos[contador] << endl;
        } else {
            cout << campos[contador] << ",";
        }
    }
}

void CSV::getCampo(string linea, int campo){
    valor = "valor" + to_string(campo);
}
