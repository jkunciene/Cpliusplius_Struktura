#include <iostream>
#include <fstream>

using namespace std;

struct studentai{
    char vardai[15];
    char pavarde[15];
    float vidurkis;

};
int main(){

    studentai Sar[100];
    ifstream in("duom.txt");
    ofstream out("rez.txt");

    int kiek;
    in>>kiek;
    cout<<kiek;

    for(int i=0; i<kiek; i++){

        in>>Sar[i].vardai>>Sar[i].pavarde>>Sar[i].vidurkis;
    }
    out<<"Musu mokinukai "<<endl;

    for(int i=0; i<kiek; i++){

        out<<Sar[i].vardai<<"  "<<Sar[i].pavarde<<"  "<<Sar[i].vidurkis<<endl;
    }

    float blogoVid;
    int blogoNr;

    blogoNr = 0;
    blogoVid = Sar[0].vidurkis;

    for(int i=1; i<kiek; i++){

            if(blogoVid>Sar[i].vidurkis)
            {blogoNr=i; blogoVid = Sar[i].vidurkis;}
    }
    out<<Sar[blogoNr].vardai<<"  "<<Sar[blogoNr].pavarde;

    in.close();
    out.close();
    return 0;
}
