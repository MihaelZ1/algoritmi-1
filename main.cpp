#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <cstdio>
#include <stdio.h>

using namespace std;

int main()
{
/**
int n;
cout<<"Unesite broj: ";
cin>>n;
int polje[10][10];
int polje2[10][10];
for(int i=0;i<10;i++){
for(int j=0;j<10;j++){
polje[i][j]=rand()%401-180;
cout<<'\t'<<polje[i][j];
}
cout<<endl;
}
cout<<endl<<endl;
for(int i=0;i<10;i++){
for(int j=0;j<10;j++){
if(polje[i][j]%n==0){
   polje2[i][j]=polje[i][j];
    }
    else{
        continue;
    }
    cout<<'\t'<<polje[i][j];
}
cout<<endl;
}
}
**/
/**
{
 char polje[15]={'p','a','r','a','d','a','j','z',' ','j','e',' ','f','i','n'};
 int n;
 cout<<"Unesite broj: ";
 cin>>n;
 int polje_kripta[15];
 for(int i=0;i<15;i++){
 polje_kripta[i]=int(polje[i])+n+1+i;
    if(polje_kripta[i]>'z'){
        polje_kripta[i]-=26;
        }
    cout<<char(polje_kripta[i])<<endl;
 }
}
**/
/**
int polje[10][10];
int zbroj=0;
for(int i=0;i<10;i++){
for(int j=0;j<10;j++){
    polje[i][j]=rand()%10;
    if(i==j)
        zbroj+=polje[i][j];
    cout<<' '<<polje[i][j];
}
cout<<endl;
}
cout<<zbroj<<endl;
}
**/
/**
int polje[9][20]={{3, -70, -4, -1, 34, -69, -68, 28, 34, 25, -2, 52, 18, 70, -3, 64, 4, -83, -1, 43, },
{6, 49, -7, 50, 11, 19, -65, 4, -92, 47, -25, -14, 58, 66, 63, 3, 56, 5, 47, 69, },
{-35, 63, 80, -39, 5, 84, 73, 14, -90, -52, -7, 30, -4, 64, -57, 6, -73, 83, 11, -42, },
{73, -4, 43, -50, -46, 33, -47, 1, -97, -87, 60, -9, -90, 60, 97, 49, 69, 35, 7, 96, },
{87, 27, -52, 79, -2, 40, -13, -67, -26, 27, -4, 45, 27, 22, -63, 14, 1, 72, 88, 82, },
{90, -93, -13, -95, -93, 42, -97, -74, -79, -51, -79, -82, 49, -80, 77, 77, 86, -89, 88, 97, },
{-96, -69, 40, -11, -45, -75, 30, 39, -65, -100, 77, -57, 51, -6, -62, 26, 43, -84, -69, 28, },
{18, -6, 16, 3, -27, 85, -7, -57, 84, -28, -99, 74, -65, -66, 75, -76, -23, 71, -32, 12, },
{-41, 91, -62, -96, -15, -46, -89, 96, 35, 57, 18, 0, -46, -70, 0, 3, 63, 30, -88, 4, }};
int zbroj=0;
for(int i=0;i<9;i++){
for(int j=0;j<20;j++){
cout<<' '<<polje[i][j];
        zbroj+=polje[i][j];
cout<<zbroj<<endl;
    zbroj=0;
}
cout<<endl;
}
}
**/
/**
int polje[10][10];
int najmanji=1000;
for(int i=0;i<10;i++){
for(int j=0;j<10;j++){
polje[i][j]=rand()%10;
cout<<' '<<polje[i][j];
if(polje[i][j]<najmanji)
    najmanji=polje[i][j];
}
cout<<endl;
}
cout<<endl<<endl;
for(int i=0;i<10;i++){
for(int j=0;j<10;j++){
if(i-j==9){
polje[i][j]=najmanji;
}
else{
    continue;
}
cout<<' '<<polje[i][j];
}
cout<<endl;
}
}
**/
/**
int zbrojcek=0;
int zbroj=0;
char unos[5];
gets(unos);
for(int i=0;i<5;i++){
        zbrojcek+=int(unos[i]);
        cout<<zbrojcek<<endl;
    zbrojcek=0;
if(zbrojcek%2!=0){
    zbrojcek-=32;
    cout<<zbrojcek<<endl;
}
else if(zbrojcek%2==0)
    zbroj+=int(unos[i]);

}
cout<<"zbroj: "<<zbroj<<endl;
}
**/
/**
int m,n;
cin>>m>>n;
int polje[50];
cout<<"polje"<<endl;
for(int i=0;i<50;i++){
polje[i]=rand()%m+n;

cout<<polje[i]<<endl;
}

}
**/
/**
int brojac2=0;
int ocjena;
int zbr_ocjena=0;
float AS=0;
int brojac=0;
char polje[25];
for(int i=0;i<25;i++){
cout<<"T/F "<<i<<endl;
cin>>polje[i];
if(polje[i]=='T'){
    brojac++;
}
else if(polje[i]=='F'){
    cout<<"S koliko prolazite: "<<endl;
    cin>>ocjena;
    zbr_ocjena+=ocjena;
    brojac2++;
}
}
AS=zbr_ocjena/brojac2;
cout<<"Zbroj odlikaSa je: "<<brojac<<" Prosjek ocjena neodlikaša je: "<<AS;

}
**/
/**
int zbroj=0;
int polje[1000];
for(int i=0;i<1000;i++){
while(zbroj<500){
cout<<"Unesite broj: ";
cin>>polje[i];
zbroj+=polje[i];
if(zbroj>500)
    break;
}
}
cout<<"zbroj je "<<zbroj;
if(zbroj%2==0){
    cout<<"zbroj je paran"<<endl;
}
else if(zbroj%2!=0){
cout<<"zbroj je neparan"<<endl;
}
}
**/
/**
int polje[10];
int polje2[10];
for(int i=0;i<10;i++){
cout<<"Unesite broj "<<endl;
cin>>polje[i];
if(polje[i]%2==0){
polje2[i]=polje[i];
}
else
continue;
}
for(int i=0;i<10;i++){
cout<<polje2[i]<<endl;
}
}
**/
/**
int polje[5];
int polje2[5];
int broj=0;
for(int i=0;i<5;i++){
cout<<"Unesite broj: ";
cin>>polje[i];
}
**/
/**
for(int i=0;i<5;i++){
polje2[i]=polje[i];
if(polje[i-i]==polje[i]&& ||polje[i+i]=polje[i+i]){
    broj=polje[i];
    cout<<"Broj "<<broj<<" se ponavlja u polju"<<endl;
}
 else
 cout<<"Svi brojevi su razlièiti";

}
}
**/
/**
int duljina;
int sirina;
int polje[duljina][sirina];
cin>>duljina>>sirina;
for(int i=0;i<duljina;i++){
for(int j=0;j<sirina;j++){
if(j==sirina/2){
cout<<'!';
}
else{
    cout<<'#';
}
}
cout<<endl;
}
}
**/
/**
int polje[10][10];
for(int i=0;i<10;i++){
for(int k=0;k<10*2+1;k++){
    cout<<'-';
}
cout<<endl;
for(int j=0;j<10;j++){
    polje[i][j]=rand()%9;
    cout<<'|'<<polje[i][j];
}
cout<<'|';
cout<<endl;
}
for(int k=0;k<10*2+1;k++){
    cout<<'-';
}
cout<<endl;
}
**/
/**
int polje[10][10];
int zbroj=0;
int r=0;
int a[10];
for(int i=0;i<10;i++){
for(int j=0;j<10;j++){
polje[i][j]=rand()%200-100;
cout<<'\t'<<polje[i][j];

}
cout<<endl;
cout<<endl<<endl;
}
for(int i=0;i<10;i++){
for(int j=0;j<10;j++){
zbroj+=polje[i][j];
r+=polje[i][j];
cout<<"Zbroj redka je: "<<r<<endl;
r=0;
a[i]+=polje[i][j];
}
}
cout<<"Ukupni zbroj iznosi: "<<zbroj<<endlv;
for(int i=0;i<10;i++){
cout<<"Zbroj svakog stupca iznosi: "<<a[i]<<endl;
}
}
**/
/**
int n,m;
cin>>n>>m;
int polje[n][m];
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
cout<<"Uneiste broj: ";
cin>>polje[i][j];
}
}
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
        cout<<polje[i][j];
}
cout<<endl;
}
}
**/
/**
int polje[5][5];
int zbr=0;
int zbroj=0;
for(int i=0;i<5;i++){
for(int j=0;j<5;j++){
polje[i][j]=rand()%10;
cout<<' '<<polje[i][j];
}
cout<<endl;
}
for(int i=0;i<5;i++){
for(int j=0;j<5;j++){
if(i>j){
zbr+=polje[i][j];
}
else if(i<j){
    zbroj+=polje[i][j];
}
}
}
cout<<"Zbroj iznad dijagonale iznosi: "<<zbr<<endl;
cout<<"Zbroj ispod dijagonale iznosi: "<<zbroj;
}
**/

