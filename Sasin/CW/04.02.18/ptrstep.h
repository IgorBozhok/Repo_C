#pragma once
// -������ ������;
double**CreateMatr(int sizeI, int sizeJ);
// - ������������ ������;
void DeleteMatr(double **ptr, int  sizeI);
//- ����
void InputMatr(double **ptr, int sizeI, int sizeJ);
//- �������
void OutputMatr(double **ptr, int sizeI, int sizeJ);
// - random;
void RandMatr(double **ptr, int sizeI, int sizeJ);
// ����� ��������� ������;
double SumRow(double **ptr, int NowRow, int sizeJ);
// ����� �� �������� ;
double SumCol(double **ptr, int sizeI, int NumCol);
// ����� min
double MinElem(double**ptr, int sizeI, int sizeJ);
// ����� max
double MaxElem(double**ptr, int sizeI, int sizeJ);
// - ���������� ����� ;
double** AddRowEnd(double**ptr, int& sizeI, int sizeJ);
// - ���������� ��������;
void AddColEnd(double**ptr, int sizeI, int& sizeJ);
// - �������� �����;
void DelRowEnd(double **ptr, int& sizeI, int sizeJ);
// - �������� ��������;
void DelColEnd(double **ptr, int sizeI, int& sizeJ);
