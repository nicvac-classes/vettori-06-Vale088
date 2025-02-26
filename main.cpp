#include <iostream>
using namespace std;

int main() {
   int n;
    cout<<"quanti atleti ci sonoin gara ?"<<endl;
    cin>>n;
    string nomi[n],nazionale[n];
    float tempo[n];
    int i;
       for(i=0; i<=n-1; i++) {
        cout<<"inserisci il nome dell'atleta"<<endl;
        cin>>nomi[i];
        cout<<"inserisci la nazione"<<endl;
        cin>>nazionale[i];
        cout<<"inserisci il tempo"<<endl;
        cin>>tempo[i]
       } 
       cout<<"elenco atleti in gara:"<<endl;
       i=0;
       for(i=0; i<=n-1; i++){
        cout<<"nome:"<< nomi[i] <<"nazionale:"<<nazionale[i]<<"tempo:"<<tempo[i]<<endl;
        i=i+1;
       } 
       string vincitorenome,nazionalevincitore;
       float vincitoretempo;
       int mintempo;
       vincitorenome=nomi[0];
       nazionalevincitore=nazionale[0];
       mintempo=(int)tempo[0];
       for(i=1; i<=n-1;i++) {
        if(tempo[i]<mintempo) {
            vincitoretempo=tempo[i];
            vincitorenome=nomi[i];
            nazionalevincitore=nazionale[0];
        } 
        cout<<"!il vincitore è "<<nomi[i]<<"della nazione"<<nazionale[i]<<"di tempo "<<tempo[i]<<endl;
         }
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
