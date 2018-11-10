#include <iostream>
using namespace std;

#define Nil -1         /* Nil adalah stack dengan elemen kosong */
#define MaxEl 20       /* MaxEl adalah ukuran maksimum table penampung */

typedef int infotype;
typedef struct {
	infotype T[MaxEl]; /* tabel penyimpan elemen */
	int TOP;           /* alamat TOP: elemen puncak */
} Stack;

/*** Konstruktor/Kreator ***/
void CreateEmpty (Stack *S){
/* I.S. Sembarang */
/* F.S. Membuat sebuah stack S yang kosong berkapasitas
        MaxEl. Indeksnya antara 0..MaxEl-1 */
/* Ciri stack kosong : TOP bernilai Nil */
}

/* Predikat Untuk test keadaan KOLEKSI */

bool IsEmpty (Stack S){
/* Mengirim true jika Stack kosong, false jika tidak */
}

bool IsFull (Stack S){
/* Mengirim true jika tabel penampung nilai elemen stack penuh,
   false jika tidak */
}


/* Menambahkan sebuah elemen ke Stack */
void Push (Stack *S, infotype X) {
/* Menambahkan X sebagai elemen Stack S. */
/* I.S. S mungkin kosong, tabel penampung elemen
        stack TIDAK penuh */
/* F.S. X menjadi TOP yang baru, TOP bertambah 1 */
}


/* Menghapus sebuah elemen Stack */
void Pop (Stack *S, infotype *X) {
/* Menghapus X dari Stack S. */
/* I.S. S tidak mungkin kosong */
/* F.S. X berisi nilai elemen TOP yang lama, TOP
        berkurang 1 */
}

int main(){
   
}
