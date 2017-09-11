#pragma once

int sum(int* Ptr, int * Alias);

//Ptr-Alias = diff
int diff(int* Ptr, int* Alias);

//The pointer can lead to an entire array or a 
//single digit. Use this to be able to pass an 
//entire array and it's capacity 
//and even return an entire array
int arrX(int* arr, int size);

void printArray(int * arr,int length);

void clearScreen();
char toLower(char &query);

bool isAlpha(char query);

void HAAN();

void AUT21();