#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

string imie;
string odp;

int main()
{
    //https://cpp0x.pl/kursy/Kurs-WinAPI-C++/Roznosci/Kolory-w-konsoli/374
    HANDLE uchwyt = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(uchwyt, 12);
    cout << "\aPodaj imie: ";
    cin >> imie;
    int pkt = 0;

    system("cls");
    cout<< "3";
    Sleep(1000);
    system("cls");
    cout<< "3..2";
    Sleep(1000);
    system("cls");
    cout<< "3..2..1..";
    Sleep(1000);
    system("cls");

    cout << imie << " witaj w tescie z programowania\n";

    cout << "Co to jest HTML"<<endl;
    cout << "a) Piosenkarka"<<endl;
    cout << "b) Jezyk programowania"<<endl;
    cout << "c) Mlynek do herbaty"<<endl;
    cout << "Twoja odpowiedz: ";
    cin >> odp;
    if(odp == "b" || odp=="B")
    {
        cout << "Poprawna odpowiedz! \n";
        pkt++;
    }
    else
    {
        cout << "Zle! Jest to jezyk programowania! \n";

    }
    Sleep(3000);
    cout<<"Nastepne pytanie: \n";

    system("cls");
    cout<< "3";
    Sleep(1000);
    system("cls");
    cout<< "3..2";
    Sleep(1000);
    system("cls");
    cout<< "3..2..1..";
    Sleep(1000);
    system("cls");

    cout<<"Jaka jest najwyzsza gora na swiecie \n";
    cout<<"a) Mount Everest \n";
    cout<<"b) k2 \n";
    cout<<"c) Rysy \n";
    cin>>odp;
    if(odp == "a" || odp == "A"){
        cout << "Poprawna odpowiedz! \n";
        pkt++;
    }else{
        cout << "Zle! Jest to Mount Everest! \n";
    }

    Sleep(3000);
    cout<<"Nastepne pytanie: \n";

    system("cls");
    cout<< "3";
    Sleep(1000);
    system("cls");
    cout<< "3..2";
    Sleep(1000);
    system("cls");
    cout<< "3..2..1..";
    Sleep(1000);
    system("cls");
    cout<<"Jaka jest najdluzsza rzeka na swiecie \n";
    cout<<"a) Wisła \n";
    cout<<"b) Nil \n";
    cout<<"c) Amazonka \n";
    cin>>odp;
    if(odp == "c" || odp=="C"){
        cout << "Poprawna odpowiedz! \n";
        pkt++;
    }else{
        cout << "Zle! Jest to Amazonka! \n";
    }

    Sleep(2000);
    cout<<"Nastepne pytanie: \n";

    system("cls");
    cout<< "3";
    Sleep(1000);
    system("cls");
    cout<< "3..2";
    Sleep(1000);
    system("cls");
    cout<< "3..2..1..";
    Sleep(1000);
    system("cls");

    cout<<"Jaki jest największy kraj na swiecie \n";
    cout<<"a) Rosja \n";
    cout<<"b) Polska \n";
    cout<<"c) Usa \n";
    cout<<"d) Chiny \n";
    cin>>odp;
    if(odp == "a" || odp=="A"){
        cout << "Poprawna odpowiedz! \n";
        pkt++;
    }else{
        cout << "Zle! Jest to Rosja! \n";
    }

    Sleep(2000);
    cout<<"Nastepne pytanie: \n";

    system("cls");
    cout<< "3";
    Sleep(1000);
    system("cls");
    cout<< "3..2";
    Sleep(1000);
    system("cls");
    cout<< "3..2..1..";
    Sleep(1000);
    system("cls");

    cout<<"Jaki jest największy ocean na swiecie \n";
    cout<<"a) Atlantyk \n";
    cout<<"b) Ocean Indyjski \n";
    cout<<"c) Ocean Spokojny \n";
    cin>>odp;
     if(odp == "c" || odp=="C"){
        cout << "Poprawna odpowiedz! \n";
        pkt++;
    }else{
        cout << "Zle! Jest to Rosja! \n";
    }

    Sleep(2000);
    cout<<"To już koniec quizu! \n";
    cout<<"Twoja ilosc punktów to: "<<pkt<<"/5 \n";

    return 0;
}
