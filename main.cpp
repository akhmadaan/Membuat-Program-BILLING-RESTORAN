#include <iostream>
#include<windows.h>>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int pilihan,harga,jumlah,total,bayar,kembalian;
    char mad;

    do
    {
        cout<<"============================="<<endl;
        cout<<"AKHMAD_AAN RESTO"<<endl;
        cout<<"JALAN KARANG BOLONG, KEBUMEN JAWA TENGAH"<<endl;
        cout<<"============================="<<endl;
        cout<<""<<endl;

        cout<<"MENU MAKANAN"<<endl;
        cout<<"1. PAKET 1 (NASI PUTIH,PECEL,AYAM GORENG DAN ES TEH) Rp. 18.000"<<endl;
        cout<<"2. PAKET 2 (NASI PUTIH,LALAPAN,TELOR GORENG DAN ES TEH) Rp. 16.000"<<endl;
        cout<<"3. PAKET 3 (NASI PUTIH,AYAM CRISPY,LALAPAN,TEMPE DAN ES TEH) Rp. 18.000"<<endl;
        cout<<"4. PAKET 4 (NASI PUTIH,NILA BAKAR,TEMPE DAN ES TEH) Rp. 20.000"<<endl;
        cout<<"5. MIE AYAM + ES TEH                           Rp. 13.000"<<endl;
        cout<<"6. BAKSO JUMBO + ES TEH                        Rp. 15.000"<<endl;
        cout<<"7. GURAME BAKAR SAMBAL IJO                     Rp. 24.000"<<endl;
        cout<<"8. PECEL LELE + ES TEH                         Rp. 14.000"<<endl;
        cout<<"9. ANEKA JUICE                                 Rp. 5.000"<<endl;
        cout<<"10. ANEKA GORENGAN                              Rp. 1.000"<<endl;
        cout<<" "<<endl;

        cout<<"================================================================================="<<endl;
        cout<<"SILAHKAN MASUKAN PILIHAN ANDA :";
        cin>>pilihan;

        switch(pilihan)
        {
        case 1:
            cout<<"\n"<<"NASI PUTIH,PECEL,AYAM GORENG DAN ES TEH"<<endl;
            harga=18000;

            cout<<"\n"<<"MASUKAN JUMLAH YANG DIBELI :";
            cin>>jumlah;

            total=harga*jumlah;
            cout<<"\n"<<"ANDA PERLU MEMBAYAR SEJUMLAH : Rp."<<total<<endl;
            cout<<"\n"<<"UANG YANG ANDA KELUARKAN UNTUK PEMBAYARAN : Rp.";
            cin>>bayar;
            kembalian=bayar-total;

            cout<<"\n"<<"UANG KEMBALIAN ANDA ADALAH : Rp."<<kembalian<<endl;

            system("cls");
            cout<<"PEMESANAN PAKET 1 "<<endl;
            cout<<"TOTAL HARGA  : "<<jumlah<<"x"<<harga<<"  ="<<"Rp."<<total<<endl;
            cout<<"PEMBAYARAN   :          "<<"="<<"Rp."<<bayar<<endl;
            cout<<"KEMBALIAN    :          "<<"="<<"Rp."<<kembalian<<endl;
            cout<<"\nTERIMA KASIH SUDAH BERKUNJUNG"<<endl;
            cin>>mad;


            break;

        case 2:
            cout<<"\n"<<"NASI PUTIH,LALAPAN,TELOR GORENG DAN ES TEH"<<endl;
            harga=16000;

            cout<<"\n"<<"MASUKAN JUMLAH YANG DIBELI :";
            cin>>jumlah;

            total=harga*jumlah;
            cout<<"\n"<<"ANDA PERLU MEMBAYAR SEJUMLAH : Rp."<<total<<endl;
            cout<<"\n"<<"UANG YANG ANDA KELUARKAN UNTUK PEMBAYARAN : Rp.";
            cin>>bayar;
            kembalian=bayar-total;

            cout<<"\n"<<"UANG KEMBALIAN ANDA ADALAH : Rp."<<kembalian<<endl;
             system("cls");
            cout<<"PEMESANAN PAKET 2 "<<endl;
            cout<<"TOTAL HARGA  : "<<jumlah<<"x"<<harga<<"  ="<<"Rp."<<total<<endl;
            cout<<"PEMBAYARAN   :          "<<"="<<"Rp."<<bayar<<endl;
            cout<<"KEMBALIAN    :          "<<"="<<"Rp."<<kembalian<<endl;
            cout<<"\nTERIMA KASIH SUDAH BERKUNJUNG"<<endl;
            cin>>mad;
            break;

            case 3:
            cout<<"\n"<<"NASI PUTIH,AYAM CRISPY,LALAPAN,TEMPE DAN ES TEH"<<endl;
            harga=18000;

            cout<<"\n"<<"MASUKAN JUMLAH YANG DIBELI :";
            cin>>jumlah;

            total=harga*jumlah;
            cout<<"\n"<<"ANDA PERLU MEMBAYAR SEJUMLAH : Rp."<<total<<endl;
            cout<<"\n"<<"UANG YANG ANDA KELUARKAN UNTUK PEMBAYARAN : Rp.";
            cin>>bayar;
            kembalian=bayar-total;

            cout<<"\n"<<"UANG KEMBALIAN ANDA ADALAH : Rp."<<kembalian<<endl;
             system("cls");
            cout<<"PEMESANAN PAKET 3 "<<endl;
            cout<<"TOTAL HARGA  : "<<jumlah<<"x"<<harga<<"  ="<<"Rp."<<total<<endl;
            cout<<"PEMBAYARAN   :          "<<"="<<"Rp."<<bayar<<endl;
            cout<<"KEMBALIAN    :          "<<"="<<"Rp."<<kembalian<<endl;
            cout<<"\nTERIMA KASIH SUDAH BERKUNJUNG"<<endl;
            cin>>mad;
            break;

            case 4:
            cout<<"\n"<<"NASI PUTIH,NILA BAKAR,TEMPE DAN ES TEH"<<endl;
            harga=20000;

            cout<<"\n"<<"MASUKAN JUMLAH YANG DIBELI :";
            cin>>jumlah;

            total=harga*jumlah;
            cout<<"\n"<<"ANDA PERLU MEMBAYAR SEJUMLAH : Rp."<<total<<endl;
            cout<<"\n"<<"UANG YANG ANDA KELUARKAN UNTUK PEMBAYARAN : Rp.";
            cin>>bayar;
            kembalian=bayar-total;

            cout<<"\n"<<"UANG KEMBALIAN ANDA ADALAH : Rp."<<kembalian<<endl;
             system("cls");
            cout<<"PEMESANAN PAKET 4 "<<endl;
            cout<<"TOTAL HARGA  : "<<jumlah<<"x"<<harga<<"  ="<<"Rp."<<total<<endl;
            cout<<"PEMBAYARAN   :          "<<"="<<"Rp."<<bayar<<endl;
            cout<<"KEMBALIAN    :          "<<"="<<"Rp."<<kembalian<<endl;
            cout<<"\nTERIMA KASIH SUDAH BERKUNJUNG"<<endl;
            cin>>mad;
            break;

             case 5:
            cout<<"\n"<<"MIE AYAM + ES TEH  "<<endl;
            harga=13000;

            cout<<"\n"<<"MASUKAN JUMLAH YANG DIBELI :";
            cin>>jumlah;

            total=harga*jumlah;
            cout<<"\n"<<"ANDA PERLU MEMBAYAR SEJUMLAH : Rp."<<total<<endl;
            cout<<"\n"<<"UANG YANG ANDA KELUARKAN UNTUK PEMBAYARAN : Rp.";
            cin>>bayar;
            kembalian=bayar-total;

            cout<<"\n"<<"UANG KEMBALIAN ANDA ADALAH : Rp."<<kembalian<<endl;
             system("cls");
            cout<<"PEMESANAN PAKET 5 "<<endl;
            cout<<"TOTAL HARGA  : "<<jumlah<<"x"<<harga<<"  ="<<"Rp."<<total<<endl;
            cout<<"PEMBAYARAN   :          "<<"="<<"Rp."<<bayar<<endl;
            cout<<"KEMBALIAN    :          "<<"="<<"Rp."<<kembalian<<endl;
            cout<<"\nTERIMA KASIH SUDAH BERKUNJUNG"<<endl;
            cin>>mad;
            break;

            case 6:
            cout<<"\n"<<"BAKSO JUMBO + ES TEH   "<<endl;
            harga=15000;

            cout<<"\n"<<"MASUKAN JUMLAH YANG DIBELI :";
            cin>>jumlah;

            total=harga*jumlah;
            cout<<"\n"<<"ANDA PERLU MEMBAYAR SEJUMLAH : Rp."<<total<<endl;
            cout<<"\n"<<"UANG YANG ANDA KELUARKAN UNTUK PEMBAYARAN : Rp.";
            cin>>bayar;
            kembalian=bayar-total;

            cout<<"\n"<<"UANG KEMBALIAN ANDA ADALAH : Rp."<<kembalian<<endl;
             system("cls");
            cout<<"PEMESANAN PAKET 6 "<<endl;
            cout<<"TOTAL HARGA  : "<<jumlah<<"x"<<harga<<"  ="<<"Rp."<<total<<endl;
            cout<<"PEMBAYARAN   :          "<<"="<<"Rp."<<bayar<<endl;
            cout<<"KEMBALIAN    :          "<<"="<<"Rp."<<kembalian<<endl;
            cout<<"\nTERIMA KASIH SUDAH BERKUNJUNG"<<endl;
            cin>>mad;
            break;

              case 7:
            cout<<"\n"<<"GURAME BAKAR SAMBAL IJO   "<<endl;
            harga=24000;

            cout<<"\n"<<"MASUKAN JUMLAH YANG DIBELI :";
            cin>>jumlah;

            total=harga*jumlah;
            cout<<"\n"<<"ANDA PERLU MEMBAYAR SEJUMLAH : Rp."<<total<<endl;
            cout<<"\n"<<"UANG YANG ANDA KELUARKAN UNTUK PEMBAYARAN : Rp.";
            cin>>bayar;
            kembalian=bayar-total;

            cout<<"\n"<<"UANG KEMBALIAN ANDA ADALAH : Rp."<<kembalian<<endl;
             system("cls");
            cout<<"PEMESANAN PAKET 7 "<<endl;
            cout<<"TOTAL HARGA  : "<<jumlah<<"x"<<harga<<"  ="<<"Rp."<<total<<endl;
            cout<<"PEMBAYARAN   :          "<<"="<<"Rp."<<bayar<<endl;
            cout<<"KEMBALIAN    :          "<<"="<<"Rp."<<kembalian<<endl;
            cout<<"\nTERIMA KASIH SUDAH BERKUNJUNG"<<endl;
            cin>>mad;
            break;

            case 8:
            cout<<"\n"<<" PECEL LELE + ES TEH      "<<endl;
            harga=14000;

            cout<<"\n"<<"MASUKAN JUMLAH YANG DIBELI :";
            cin>>jumlah;

            total=harga*jumlah;
            cout<<"\n"<<"ANDA PERLU MEMBAYAR SEJUMLAH : Rp."<<total<<endl;
            cout<<"\n"<<"UANG YANG ANDA KELUARKAN UNTUK PEMBAYARAN : Rp.";
            cin>>bayar;
            kembalian=bayar-total;

            cout<<"\n"<<"UANG KEMBALIAN ANDA ADALAH : Rp."<<kembalian<<endl;
             system("cls");
            cout<<"PEMESANAN PAKET 8 "<<endl;
            cout<<"TOTAL HARGA  : "<<jumlah<<"x"<<harga<<"  ="<<"Rp."<<total<<endl;
            cout<<"PEMBAYARAN   :          "<<"="<<"Rp."<<bayar<<endl;
            cout<<"KEMBALIAN    :          "<<"="<<"Rp."<<kembalian<<endl;
            cout<<"\nTERIMA KASIH SUDAH BERKUNJUNG"<<endl;
            cin>>mad;
            break;

                    case 9:
            cout<<"\n"<<" ANEKA JUICE      "<<endl;
            harga=5000;

            cout<<"\n"<<"MASUKAN JUMLAH YANG DIBELI :";
            cin>>jumlah;

            total=harga*jumlah;
            cout<<"\n"<<"ANDA PERLU MEMBAYAR SEJUMLAH : Rp."<<total<<endl;
            cout<<"\n"<<"UANG YANG ANDA KELUARKAN UNTUK PEMBAYARAN : Rp.";
            cin>>bayar;
            kembalian=bayar-total;

            cout<<"\n"<<"UANG KEMBALIAN ANDA ADALAH : Rp."<<kembalian<<endl;
             system("cls");
            cout<<"PEMESANAN PAKET 9 "<<endl;
            cout<<"TOTAL HARGA  : "<<jumlah<<"x"<<harga<<"  ="<<"Rp."<<total<<endl;
            cout<<"PEMBAYARAN   :          "<<"="<<"Rp."<<bayar<<endl;
            cout<<"KEMBALIAN    :          "<<"="<<"Rp."<<kembalian<<endl;
            cout<<"\nTERIMA KASIH SUDAH BERKUNJUNG"<<endl;
            cin>>mad;
            break;

            case 10:
                balik:

            cout<<"\n"<<" ANEKA GORENGAN      "<<endl;
            harga=1.000;

            cout<<"\n"<<"MASUKAN JUMLAH YANG DIBELI :";
            cin>>jumlah;

            total=harga*jumlah;
            cout<<"\n"<<"ANDA PERLU MEMBAYAR SEJUMLAH : Rp."<<total<<endl;
            cout<<"\n"<<"UANG YANG ANDA KELUARKAN UNTUK PEMBAYARAN : Rp.";
            cin>>bayar;
            kembalian=bayar-total;

            cout<<"\n"<<"UANG KEMBALIAN ANDA ADALAH : Rp."<<kembalian<<endl;
             system("cls");
            cout<<"PEMESANAN PAKET 10 "<<endl;
            cout<<"TOTAL HARGA  : "<<jumlah<<"x"<<harga<<"  ="<<"Rp."<<total<<endl;
            cout<<"PEMBAYARAN   :          "<<"="<<"Rp."<<bayar<<endl;
            cout<<"KEMBALIAN    :          "<<"="<<"Rp."<<kembalian<<endl;
            cout<<"\nTERIMA KASIH SUDAH BERKUNJUNG"<<endl;
            goto balik;
            cin>>mad;
            break;

            default:

                cout<<"MAAF PILIHAN ANDA TIDAK TERSEDIA";
                cout<<"SILAHKAN MASUKAN PILIHAN LAIN";

        }
    }
    while(mad/'Y');
    cout<<"TERIMAKASIH ATAS KUNJUNGAN ANDA";
    getch();
    return 0;



    }

