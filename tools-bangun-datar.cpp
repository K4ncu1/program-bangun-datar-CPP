#include <iostream>
#include <string>
#include <math.h>

// Source From 

using namespace std;


int main()
{
    cout << "---------------------------------------------------" << endl;
    cout << "                 Halo, Teman-Teman !" << endl;
    cout << "  Selamat Datang di Alat Menghitung Bangun Datar   " << endl;
    cout << "---------------------------------------------------" << endl;
    
    int pil;
    float a, b, c, t, s, p, l, r, d, AB, BC, CD, DA, d1, d2, phi;
    float LS, LP, LPP, LL, LT, LBK, LJ, LLL, KS, KP, KPP, KL, KT, KBK, KJ, KLL;
    char pilihan1, pilihan2, pilihan3, pilihan4;
    char pilihan5, pilihan6, pilihan7, pilihan8;
    string kesebangunan;
    
    cout << "\n1. Segitiga" << endl;
    cout << "2. Persegi" << endl;
    cout << "3. Persegi Panjang" << endl;
    cout << "4. Lingkaran" << endl;
    cout << "5. Trapesium" << endl;
    cout << "6. Belah Ketupat" << endl;
    cout << "7. Jajargenjang" << endl;
    cout << "8. Layang-layang" << endl;
    cout << " ♤ Pilih Bangun Dasar : ";
    cin >> pil;
    cout << endl;
    
    if (pil==1){
      cout << "A.LUAS SEGITIGA\n";
      cout << "B.KELILING SEGITIGA\n";
      cout << "C.ALAS SEGITIGA\n";
      cout << "D.TINGGI SEGITIGA\n";
      cout << " ● Pilih A/B/C/D : ";
      cin >> pilihan1;
      cout << "\n";
      if (pilihan1=='A'){
        cout << "===LUAS SEGITIGA===\n";
        cout << "- Masukan Alas : ";
        cin >> a;
        cout << "- Masukan Tinggi : ";
        cin >> t;
        LS = 2*(0.5*a*t);
        cout << " ♡ Hasil Luas Segitiga : " << LS;
      }else if (pilihan1=='B'){
        cout << "===KELILING SEGITIGA===\n";
        cout << "- Masukan Panjang Alas a : ";
        cin >> a;
        cout << "- Masukan Panjang Alas b : ";
        cin >> b;
        cout << "- Masukan Panjang Alas c : ";
        cin >> c;
        KS = a+b+c;
        cout << " ♡ Hasil Keliling Segitiga : " << KS;
      }else if (pilihan1=='C'){
        cout << "===ALAS SEGITIGA===\n";
        cout << "- Masukan Luas : ";
        cin >> LS;
        cout << "- Masukan Tinggi : ";
        cin >> t;
        a = (2*LS)/t;
        cout << " ♡ Hasil Alas Segitiga : " << a;
      }else if (pilihan1=='D'){
        cout << "===TINGGI SEGITIGA===\n";
        cout << "- Masukan Luas : ";
        cin >> LS;
        cout << "- Masukan Alas : ";
        cin >> a;
        t = (2*LS)/a;
        cout << " ♡ Hasil Tinggi Segitiga : " << t;
      } else{
        cout << "Maaf Input Yang Anda Masukan Salah";
      }
      
    }else if (pil==2){
      cout << "A.LUAS PERSEGI\n";
      cout << "B.KELILING PERSEGI\n";
      cout << "C.SISI PERSEGI\n";
      cout << " ● Pilih A/B/C : ";
      cin >> pilihan2;
      cout << "\n";
      if (pilihan2=='A'){
        cout << "===LUAS PERSEGI===\n";
        cout << "- Masukan Sisi : ";
        cin >> s;
        LP = s*s;
        cout << " ♡ Hasil Luas Persegi : " << LP;
      }else if (pilihan2=='B'){
        cout << "===KELILING PERSEGI===\n";
        cout << "- Masukan Sisi : ";
        cin >> s;
        KP = 4*s;
        cout << " ♡ Hasil Keliling Persegi : " << KP;
      }else if (pilihan2=='C'){
        cout << "==SISI PERSEGI===\n";
        cout << "a.DIKETAHUI LUAS\n";
        cout << "b.DIKETAHUI KELILING\n";
        cout << " ● Pilih a/b : ";
        cin >> pilihan2;
        if (pilihan2=='a'){
          cout << "- Masukan Luas Persegi : ";
          cin >> LP;
          s = sqrt(LP);
          cout << " ♡ Hasil Sisi Persegi : " << s;       
        }else if (pilihan2=='b'){
          cout << "- Masukan Keliling Persegi : ";
          cin >> KP;
          s = KP/4;
          cout << " ♡ Hasil Sisi Persegi : " << s;
        }else{
          cout << "Maaf Input Yang Anda Masukan Salah";
        }        
      }else{
        cout << "Maaf Input Yang Anda Masukan Salah";
      } 
      
    }else if (pil==3){
      cout << "A.LUAS PERSEGI PANJANG\n";
      cout << "B.KELILING PERSEGI PANJANG\n";
      cout << "C.PANJANG PERSEGI PANJANG\n";
      cout << "D.LEBAR PERSEGI PANJANG\n";
      cout << " ● Pilih A/B/C/D : ";
      cin >> pilihan3;
      cout << "\n";
      if (pilihan3=='A'){
        cout << "===LUAS PERSEGI PANJANG===\n";
        cout << "- Masukan Panjang : ";
        cin >> p;
        cout << "- Masukan Lebar : ";
        cin >> l;
        LPP = p*l;
        cout << " ♡ Hasil Luas Pesegi Panjang : " << LPP;
      }else if (pilihan3=='B'){
        cout << "===KELILING PERSEGI PANJANG===\n";
        cout << "- Masukan Panjang : ";
        cin >> p;
        cout << "- Masukan Lebar : ";
        cin >> l;
        KPP = 2*(p+l);
        cout << " ♡ Hasil Keliling Persegi Panjang: " << KPP;
      }else if (pilihan3=='C'){
        cout << "===PANJANG PERSEGI PANJANG===\n";
        cout << "a.DIKETAHUI LUAS\n";
        cout << "b.DIKETAHUI KELILING\n";
        cout << " ● Pilih a/b : ";
        cin >> pilihan3;
        if (pilihan3=='a'){
          cout << "- Masukan Luas : ";
          cin >> LPP;
          cout << "- Masukan Lebar : ";
          cin >> l;
          p = LPP/l;
          cout << " ♡ Hasil Panjang Persegi Panjang: " << p;
        }else if (pilihan3=='b'){
          cout << "- Masukan Keliling : ";
          cin >> KPP;
          cout << "- Masukan Lebar : ";
          cin >> l;
          p = (KPP-(2*l))/2;
          cout << " ♡ Hasil Panjang Persegi Panjang: " << p;
        }else{
          cout << "Maaf Input Yang Anda Masukan Salah";
        }
        
      }else if (pilihan3=='D'){
        cout << "===LEBAR PERSEGI PANJANG===\n";
        cout << "a.DIKETAHUI LUAS\n";
        cout << "b.DIKETAHUI KELILING\n";
        cout << " ● Pilih a/b : ";
        cin >> pilihan3;
        if (pilihan3=='a'){
          cout << "- Masukan Luas : ";
          cin >> LPP;
          cout << "- Masukan Panjang : ";
          cin >> p;
          l = LPP/p;
          cout << " ♡ Hasil L Persegi Panjang: " << l;
        }else if (pilihan3=='b'){
          cout << "- Masukan Keliling : ";
          cin >> KPP;
          cout << "- Masukan Panjang : ";
          cin >> p;
          l = (KPP-(2*p))/2;
          cout << " ♡ Hasil Panjang Persegi Panjang: " << l;
        }else{
          cout << "Maaf Input Yang Anda Masukan Salah";
        }
      }else{
        cout << "Maaf Input Yang Anda Masukan Salah";
      }
      
    }else if (pil==4){
      cout << "A.LUAS LINGKARAN\n";
      cout << "B.KELILING LINGKARAN\n";
      cout << "C.DIAMETER LINGKARAN\n";
      cout << "D.JARI-JARI LINGKARAN\n";
      cout << " ● Pilih A/B/C/D : ";
      cin >> pilihan4;
      cout << "\n";
      if (pilihan4=='A'){
        cout << "===LUAS LINGKARAN===\n";
        //Phi Wajib Desimal Jika Tidak, Hasilnya = 0
        cout << "- Masukan phi : ";
        cin >> phi;
        cout << "- Masukan Jari-jari : ";
        cin >> r;
        LL = phi*r*r;
        cout << " ♡ Hasil Luas Lingkaran : " << LL;
      }else if (pilihan4=='B'){
        cout << "===KELILING LINGKARAN===\n";
        cout << "- Masukan phi : ";
        cin >> phi;
        cout << "- Masukan Jari-jari : ";
        cin >> r;
        KL = 2*phi*r;
        cout << " ♡ Hasil Keliling Lingkaran : " << KL;
      }else if (pilihan4=='C'){
        cout << "===DIAMETER LINGKARAN===\n";
        cout << "- Masukan Jari-jari : ";
        cin >> r;
        d = 2*r;
        cout << " ♡ Hasil Diameter Lingkaran : " << d;
      }else if (pilihan4=='D'){
        cout << "===JARI-JARI LINGKARAN===\n";
        cout << "- Masukan Diameter : ";
        cin >> d;
        r = 2/d;
        cout << " ♡ Hasil Jari-jari Lingkaran : " << r;
      }else{
        cout << "Maaf Input Yang Anda Masukan Salah";
      }
      
    }else if (pil==5){
      cout << "A.LUAS TRAPESIUM\n";
      cout << "B.KELILING TRAPESIUM\n";
      cout << " ● Pilih A/B : ";
      cin >> pilihan5;
      cout << "\n";
      if (pilihan5=='A'){
        cout << "===LUAS TRAPESIUM===\n";
        cout << "- Masukan Panjang CD : ";
        cin >> CD;
        cout << "- Masukan Panjang AB : ";
        cin >> AB;
        cout << "Masukan Tinggi : ";
        cin >> t;
        LT = 0.5*(CD+AB)*t;
        cout << " ♡ Hasil Luas Trapesium : " << LT;
      }else if (pilihan5=='B'){
        cout << "===KELILING TRAPESIUM===\n";
        cout << "- Masukan Panjang AB : ";
        cin >> AB;
        cout << "- Masukan panjang BC : ";
        cin >> BC;
        cout << "- Masukan panjang CD : ";
        cin >> CD;
        cout << "- Masukan panjang DA : ";
        cin >> DA;
        KT = AB+BC+CD+DA;
        cout << " ♡ Hasil Keliling Trapesium :" << KT;
      }else{
        cout << "Maaf Input Yang Anda Masukan Salah";
      }
      
    }else if (pil==6){
      cout << "A.LUAS BELAH KETUPAT\n";
      cout << "B.KELILING BELAH KETUPAT\n";
      cout << "C.SISI BELAH KETUPAT\n";
      cout << "D.DIAGONAL 1 BELAH KETUPAT\n";
      cout << "E.DIAGONAL 2 BELAH KETUPAT\n";
      cout << " ● Pilih A/B/C/D/E : ";
      cin >> pilihan6;
      cout << "\n";
      if (pilihan6=='A'){
        cout << "===LUAS BELAH KETUPAT===\n";
        cout << "- Masukan Panjang Diagonal 1 : ";
        cin >> d1;
        cout << "- Masukan Panjang Diagonal 2 : ";
        cin >> d2;
        LBK = 0.5*d1*d2;
        cout << " ♡ Hasil Luas Belah Ketupat : " << LBK;
      }else if (pilihan6=='B'){
        cout << "===KELILING BELAH KETUPAT===\n";
        cout << "- Masukan Sisi : ";
        cin >> s;
        KBK = 4*s;
        cout << " ♡ Hasil Keliling Belah Ketupat :" << KBK;
      }else if (pilihan6=='C'){
        cout << "===SISI BELAH KETUPAT===\n";
        cout << "- Masukan Keliling : ";
        cin >> KBK;
        s = KBK/4;
        cout << " ♡ Hasil Sisi Belah Ketupat :" << s;
      }else if (pilihan6=='D'){
        cout << "===DIAGONAL 1 BELAH KETUPAT===\n";
        cout << "- Masukan Luas : ";
        cin >> LBK;
        cout << "- Masukan Diagonal 2 : ";
        cin >> d2;
        d1 = 2*LBK/d2;
        cout << " ♡ Hasil Diagonal 1 Belah Ketupat :" << d1;
      }else if (pilihan6=='E'){
        cout << "===DIAGONAL 2 BELAH KETUPAT===\n";
        cout << "- Masukan Luas : ";
        cin >> LBK;
        cout << "- Masukan Diagonal 1 : ";
        cin >> d1;
        d2 = 2*LBK/d1;
        cout << " ♡ Hasil Diagonal 2 Belah Ketupat :" << d2;
      }else{
        cout << "Maaf Input Yang Anda Masukan Salah";
      } 
      
    }else if (pil==7){
      cout << "A.LUAS JAJARGENJANG\n";
      cout << "B.KELILING JAJARGENJANG\n";
      cout << "C.SISI ALAS JAJARGENJANG\n";
      cout << "D.SISI MIRING JAJARGENJANG\n";
      cout << "E.TINGGI JAJARGENJANG\n";
      cout << " ● Pilih A/B/C/D/E : ";
      cin >> pilihan7;
      cout << "\n";
      if (pilihan7=='A'){
        cout << "===LUAS JAJARGENJANG===\n";
        cout << "- Masukan Panjang Alas : ";
        cin >> a;
        cout << "- Masukan Tinggi : ";
        cin >> t;
        LJ = a*t;
        cout << " ♡ Hasil Luas Jajargenjang : " << LJ;
      }else if (pilihan7=='B'){
        cout << "===KELILING JAJARGENJANG===\n";
        cout << "- Masukan Sisi Alas : ";
        cin >> a;
        cout << "- Masukan Sisi Miring : ";
        cin >> b;
        KJ = 2*(a+b);
        cout << " ♡ Hasil Keliling Jajargenjang :" << KJ;
      }else if (pilihan7=='C'){
        cout << "===SISI ALAS JAJARGENJANG===\n";
        cout << "a.DIKETAHUI KELILING\n";
        cout << "b.DIKETAHUI LUAS\n";
        cout << " ● Pilih a/b : ";
        cin >> pilihan3;
        if (pilihan3=='a'){
          cout << "- Masukan Keliling : ";
          cin >> KJ;
          cout << "- Masukan Sisi Miring : ";
          cin >> b;
          a = KJ/2-b;
          cout << " ♡ Hasil Sisi Alas Jajargenjang :" << a;
        }else if (pilihan3=='b'){
          cout << "- Masukan Luas : ";
          cin >> LJ;
          cout << "- Masukan Timggi : ";
          cin >> b;
          a = LJ/t;
          cout << " ♡ Hasil Sisi Alas Jajargenjang :" << a;
        }else{
          cout << "Maaf Input Yang Anda Masukan Salah";
        }
      }else if (pilihan7=='D'){
        cout << "===SISI MIRING JAJARGENJANG===\n";
        cout << "- Masukan Keliling : ";
        cin >> KJ;
        cout << "- Masukan Sisi Alas : ";
        cin >> a;
        b = KJ/2-a;
        cout << " ♡ Hasil Sisi Miring Jajargenjang :" << b;
      }else if (pilihan7=='E'){
        cout << "===TINGGI JAJARGENJANG===\n";
        cout << "- Masukan Luas : ";
        cin >> KJ;
        cout << "- Masukan Sisi Alas : ";
        cin >> a;
        t = LJ/a;
        cout << " ♡ Hasil Tinggi Jajargenjang :" << t;
      }else{
        cout << "Maaf Input Yang Anda Masukan Salah";
      } 
      
    }else if (pil==8){
      cout << "A.LUAS LAYANG-LAYANG\n";
      cout << "B.KELILING LAYANG-LAYANG\n";
      cout << "C.DIAGONAL 1 LAYANG-LAYANG\n";
      cout << "D.DIAGONAL 2 LAYANG-LAYANG\n";
      cout << " ● Pilih A/B : ";
      cin >> pilihan8;
      cout << "\n";
      if (pilihan8=='A'){
        cout << "===LUAS LAYANG-LAYANG===\n";
        cout << "- Masukan Panjang Diagonal 1 : ";
        cin >> d1;
        cout << "- Masukan Panjang Diagonal 2 : ";
        cin >> d2;
        LLL = 0.5*d1*d2;
        cout << " ♡ Hasil Luas Layang-layang : " << LLL;
      }else if (pilihan8=='B'){
        cout << "===KELILING LAYANG-LAYANG===\n";
        cout << "- Masukan Panjang AB : ";
        cin >> AB;
        cout << "- Masukan Panjang BC : ";
        cin >> BC;
        cout << "- Masukan Panjang CD : ";
        cin >> CD;
        cout << "- Masukan Panjang DA : ";
        cin >> DA;
        KLL = AB+BC+CD+DA;
        cout << " ♡ Hasil Keliling Layang-layang :" << KLL;
      }else if (pilihan8=='C'){
        cout << "===DIAGONAL 1 LAYANG-LAYANG===\n";
        cout << "- Masukan Luas : ";
        cin >> LLL;
        cout << "- Masukan Panjang Diagonal 2 : ";
        cin >> d2;
        d1 = 2*LLL/d2;
        cout << " ♡ Hasil Diagonal 1 Layang-layang : " << d1;
      }else if (pilihan8=='D'){
        cout << "===DIAGONAL 2 LAYANG-LAYANG===\n";
        cout << "- Masukan Luas : ";
        cin >> LLL;
        cout << "- Masukan Panjang Diagonal 1 : ";
        cin >> d1;
        d2 = 2*LLL/d1;
        cout << " ♡ Hasil Diagonal 2 Layang-layang : " << d2;
      }else{
        cout << "Maaf Input Yang Anda Masukan Salah";
      } 
    }else{
        cout << "Maaf Input Yang Anda Masukan Salah";
        
    }
    cout << "\n";
    cout << "---------------------------------------------------" << endl;
    cout << "     Terima Kasih Telah Menggunakan Alat Ini " << endl;
    cout << "           Support by ENEMY 021 SYSTEM" << endl;
    cout << "          Visit My Blog system021.my.id" << endl;
    cout << "---------------------------------------------------";    
  
    
    return 0;
} 
