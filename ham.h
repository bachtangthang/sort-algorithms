#ifndef __HAM_H__
#define __HAM_H__
#include <iostream>
using namespace std;
#include <fstream>
#include <time.h>
#include <cmath>
void GenerateRandomData(int a[], int n);
void GenerateSortedData(int a[], int n);
void GenerateReverseData(int a[], int n);
void GenerateNearlySortedData(int a[], int n);
void swap(int xp, int yp);
void selectionSort(int arr[], int n);
void insertionSort(int arr[], int n);
void bubbleSort(int arr[], int n);
void ShakerSort(int a[], int n);
int shellSort(int arr[], int n);
int binarySearch(int a[], int item, int low, int high);
void insertionbinarySort(int a[], int n);
void quickSort(int Data[], int l, int r);
#endif
