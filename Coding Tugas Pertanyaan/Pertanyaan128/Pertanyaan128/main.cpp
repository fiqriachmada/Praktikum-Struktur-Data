#include <stdio.h>
using namespace std;

enum bulan {
    JAN = 1, PEB, MAR, APR, MEI, JUN, JUL, AGU, SEP, OKT, NOP, DES
};

int main() {
    enum bulan Bulan;
    char *namaBulan[] = {"", "Januari", "Pebruari", "Maret", "April", "Mei", "Juni", "Juli", "Agustus","September", "Oktober", "Nopember", "Desember"
        
    };
    for ( Bulan = JAN ; Bulan <= 12 ; Bulan++ )
        printf( "%2d%11s\n", Bulan, namaBulan[Bulan] );
    return 0;
}
