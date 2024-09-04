#ifndef ALGORITMOS_HPP
#define ALGORITOS_HPP
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>


void SelectionSort(vector<int> &v);
void merge(vector<int>& vec, int left, int mid, int right);
void mergeSort(vector<int>& vec, int left, int right);
int partition(vector<int> &vec, int low, int high);
void quickSort(vector<int> &vec, int low, int high);

#endif