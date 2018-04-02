#pragma once

// -захват памяти двухмерного массива;

int **CreateMass2(int sizeI, int sizeJ);

// -захват памяти одномерного массива;

int *CreateMass1(int sizeI);

// - random;

void RandMass2(int **ptr, int sizeI, int sizeJ);

// -ввывод двухмерного массива;

void OutMass2(int **ptr, int sizeI, int sizeJ);

// -ввывод одномерного массива;

void OutMass1(int *ptr, int size);