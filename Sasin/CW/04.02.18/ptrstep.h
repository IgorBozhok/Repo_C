#pragma once
// -захват памяти;
double**CreateMatr(int sizeI, int sizeJ);
// - освобождение памяти;
void DeleteMatr(double **ptr, int  sizeI);
//- Ввод
void InputMatr(double **ptr, int sizeI, int sizeJ);
//- ввывода
void OutputMatr(double **ptr, int sizeI, int sizeJ);
// - random;
void RandMatr(double **ptr, int sizeI, int sizeJ);
// сумма элементов страки;
double SumRow(double **ptr, int NowRow, int sizeJ);
// сумма по столбцам ;
double SumCol(double **ptr, int sizeI, int NumCol);
// поиск min
double MinElem(double**ptr, int sizeI, int sizeJ);
// поиск max
double MaxElem(double**ptr, int sizeI, int sizeJ);
// - добовление строк ;
double** AddRowEnd(double**ptr, int& sizeI, int sizeJ);
// - добовление столбцов;
void AddColEnd(double**ptr, int sizeI, int& sizeJ);
// - удаление строк;
void DelRowEnd(double **ptr, int& sizeI, int sizeJ);
// - удаление столбцов;
void DelColEnd(double **ptr, int sizeI, int& sizeJ);
