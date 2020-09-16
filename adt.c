#include <stdio.h>
#include <string.h>

typedef char string [256];

typedef struct{
	string tanggal;
	string bulan;
	string tahun;
}lahir;

typedef struct{
	string nama;
	string npm;
	string alamat;
	string prodi;
	lahir L;
}mahasiswa;

mahasiswa inputdatamahasiswa(mahasiswa A){
	printf("input data mahasiswa\n");
	printf("---------------------\n");
	printf("nama   :"); scanf("%[^\n]",&A.nama);fflush(stdin);
	printf("npm    :"); scanf("%s",&A.npm);fflush(stdin);
	printf("alamat :"); scanf("%[^\n]",&A.alamat);fflush(stdin);
	printf("prodi  :"); scanf("%[^\n]",&A.prodi);fflush(stdin);
	printf("tanggal lahir (contoh:DD MM YY):\n");
	printf("       :"); scanf("%s%s%s",&A.L.tanggal,&A.L.bulan,&A.L.tahun);
	printf("\n\n\n");
	return A;
}

void tampilkandatamahasiswa(mahasiswa A){
	printf("data mahasiswa\n");
	printf("---------------\n");
	printf("nama          :%s\n",A.nama);
	printf("npm           :%s\n",A.npm);
	printf("alamat        :%s\n",A.alamat);
	printf("prodi         :%s\n",A.prodi);
	printf("tanggal lahir :%s-%s-%s",A.L.tanggal,A.L.bulan,A.L.tahun);
}

int main(){
	mahasiswa A;
	
	A=inputdatamahasiswa(A);
	tampilkandatamahasiswa(A);
	
	return 0;
}
