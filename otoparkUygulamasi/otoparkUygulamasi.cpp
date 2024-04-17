#include <iostream>
#include<string>
using namespace std;

int main() {
    double Süre = 0.0;
    double ticariAracFiyat = 6.5;
    double toplamTicariAracFiyat = 0.0;
    double taksiFiyat = 5.0;
    double minibusfiyat = 6.0;
    double toplamtaksi = 0.0;
    double toplamminibus = 0.0;
    string aracTipi;
    while(1)
   
    cout << "GOZUBUYUK OTOPARKA HOSGELDINIZ" << endl;

    
    cout << "otoparka girecek arac tipini giriniz(taksi,minibus,ticari arac):";
    
    getline(cin, aracTipi);
    if (aracTipi == "taksi")

    {
        cout << "otoparkta bulunma suresi nedir:";
        cin >> Süre;


        if (Süre == 0)
        {
            cout << "giris yapilmadigi icin bir ucret hesaplanamadı" << endl;
        }
        else if (Süre >= 1)
        {
            toplamtaksi = taksiFiyat;
            for (int i = 2; i <= Süre; i++) {



                taksiFiyat *= 1.20;
                toplamtaksi += taksiFiyat;
            }



            cout << "otopark ucretiniz=" << toplamtaksi << " TL'dir" << endl;
        }
        else
        {
            cout << "gecerli karakter giriniz" << endl;
        }


    }
    else if (aracTipi == "minibus")
    {
        cout << "otoparkta bulunma suresi nedir:";
        cin >> Süre;
        if (Süre == 0)
        {
            cout << "ucret hesaplanamadı" << endl;
        }
        else if (Süre >= 1)
        {
            toplamminibus = minibusfiyat;
            for (int j = 2; j <= Süre; j++)
            {
                minibusfiyat *= 1.215;
                toplamminibus += minibusfiyat;
            }
            cout << "otopark ucretiniz=" << toplamminibus << " TL'dir" << endl;
        }
        else
        {
            cout << "gecersiz karakter" << endl;
        }
    }
    
    
    else if (aracTipi == "ticari arac")

    {
        cout << "otoparkta bulunma suresi nedir:";
        cin >> Süre;
        if (Süre == 0)
        {
            cout << "ucret hesaplanmadı" << endl;
        }
        else if (Süre >= 1)
        {
            toplamTicariAracFiyat = ticariAracFiyat;
            for (int i = 2; i <= Süre; i++)
            {
                ticariAracFiyat *= 1.25;
                toplamTicariAracFiyat += ticariAracFiyat;
            }
            cout << "otopark ucretiniz=" << toplamTicariAracFiyat << "TL'dir" << endl;
        }
        else
        {
            cout << "gecersiz  karakter" << endl;
        }
    }
    else
    {
        cout << "gecersiz arac tipi" << endl;
    }
   
}

