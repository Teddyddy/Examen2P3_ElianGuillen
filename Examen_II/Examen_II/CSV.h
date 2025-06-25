#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;
// Hecho por el Desarrollador PasivoAgresivo, AlegreTriste, Controversial
class CSV {
  // Almacena los nombres de los campos que estan en la fila cero
    vector<string> nombres;
  // Almacena las filas completas, aun con las comas...
    vector<string> filas;
  // Llena el vector de 'campos' con cada nombre de la columna del registro 0
    vector<string> campos;
  // Obtiene el valor del campo de la cadena usando el número de columna
    string valor;
public:
  // Lista los nombres de los campos, se usa para verificar setCampos
    void listarCampos();
  // Llena el vector de 'filas' con cada registro que se le envia, aquí
  // se decide si se debe usar setCampos...
    void adicionarFila(string linea, int numeroLineas);
  // Lista los datos en formato CSV
    void listarCSV();
  // Lista los datos en formato JSON
    void listarJSON();
    void setCampos(string linea);
    void getCampo(string linea, int campo);
    
};
