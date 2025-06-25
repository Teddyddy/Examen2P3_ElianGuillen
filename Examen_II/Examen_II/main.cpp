#include <fstream>
#include "CSV.h"
void read(CSV &csv) {
    fstream csv_txt("cars.csv", ios::in);
    string linea;
    int numeroLineas = 0;
    while (getline(csv_txt, linea))
        csv.adicionarFila(linea, numeroLineas++);
    csv_txt.close();
}
void demo(CSV &csv) {
    csv.listarCSV();
    csv.listarJSON();
}
int main(void) {
    CSV csv;
    read(csv);
    demo(csv);
}
