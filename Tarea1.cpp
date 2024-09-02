#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <Algoritmos.hpp>

using namespace std;


void RandomDataSet(vector<int>& vector, int numElements) {

    string Dataset = "Random_dataset.txt";

    // Inicializar la semilla para generar números aleatorios
    srand(static_cast<unsigned int>(time(0)));

    // Crear y abrir el archivo
    ofstream outfile(Dataset);

    // Verificar si el archivo se abrió correctamente
    if (!outfile) {
        cerr << "Error al abrir el archivo para escribir." << endl;
        return;
    }

    // Generar números aleatorios dentro del rango y escribirlos en el archivo
    for (int i = 0; i < numElements; ++i) {
        int randomNumber = rand();
        vector.push_back(randomNumber);
        outfile << randomNumber << endl; // Escribe el número en el archivo
    }

    // Cerrar el archivo
    outfile.close();

    cout << "Dataset generado y guardado en " << Dataset << endl;
}



void printVector(const vector<int>& dataset) {
    
    for (int number : dataset){
        cout << number << endl;
    }
}

int main(){
    int cant = 100;
    vector<int> randomVector;

    RandomDataSet(randomVector, cant);
    //selectionSort(randomVector);
    mergeSort(randomVector, 0, cant-1);
    printVector(randomVector);


    return 0;
}