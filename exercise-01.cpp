/*nama Nurul Ma'arif
  Kls  B
  case 1
  NPM 14810180040
*/
#include<iostream>
#include <string>		
using namespace std;
const int MAX_ELEMENT=255;     //buat bisa dipake semua fungsi nya 

struct Stack {  		//deklarasi stack
	char isi[MAX_ELEMENT];  //buat isi stack
	int Top; 		//nunjukun bagian atas
};

Stack S;  		//membuat stack bernama S

void createStack (Stack& S){  // embuat stack kosong 
	S.Top=-1;  //kara arai mulai selalu mulai dari nol maka biar hasil nya 1 di tambah -1 jadi nol maka -i
}

void push (Stack& S, int elementBaru){  // untuk input  isi stack  // kenapa INT ELEMENTBARU karna ini yang akan dimasukan kenilai stack
	if(S.Top==MAX_ELEMENT-1){  //jika sudah sampai ke target element sebelum 255 maka tidak bisa di isi lagi. dan akan keluar 'TUMPUKAN PENUH "
		cout << "Tumpukan penuh" << endl;
	}
	else {
		S.Top=S.Top+1;
		S.isi[S.Top]=elementBaru;
	}
}

void output(Stack S){
	for (int i=S.Top; i>=0;i--){
		cout << S.isi[i]<< endl;
	}
}

int main()
{
char elementBaru;
string word;
createStack(S);

cout << "input	: ";
cin >> word;


for (int i=0; i<=word.length(); i++)
{
    elementBaru = word[i];
	push(S,elementBaru);
}
	output(S);
}
