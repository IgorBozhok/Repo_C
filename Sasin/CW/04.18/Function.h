#pragma once
void IniTmass(int mass[], int size);
void IniTmassDrob(double mass[], int size);
void OuTmass(int mass[], int size);
void OoTmassDrob(double mass[], int size);
int MiN(int mass[], int size);
int Max(int mass[], int size);
double MiNDrob(double mass[], int size);
double MaxDrob(double mass[], int size);
void sort(int mass[], int size);

//#define INTEGER

#ifdef INTEGER
#define IniTmass(mass,size) IniTmass(mass, size)
#define OuTmass(mass,size) OuTmass(mass, size)
#define MiN(mass,size) MiN(mass, size)
#define Max(mass,size) Max(mass, size)
#endif

#ifndef INTEGER
#define IniTmass(mass,size) IniTmassDrob(mass, size)
#define OuTmass(mass,size) OoTmassDrob(mass, size)
#define MiN(mass,size) MiNDrob(mass, size)
#define Max(mass,size) MaxDrob(mass, size)
#endif
