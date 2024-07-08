// UCP PEMDASS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class MasukUniversitas {
	public: // isi access modifier disini
	int uangPendaftaran;
	int uangSemester;
	int uangBangunan;
	string Kategori;
	string Rekomendasi;
	// isi daftar variable yang dibutuhkan di bawah ini
	public:
	MasukUniversitas() {
		int uangPendaftaran = 100000;
		int uangSemester	= 3000000;
		int uangBangunan	= 15000000;
		
		// isi nilai default variable yang dibutuhkan di bawah ini
	}






	virtual void namaJalurMasuk() final { return; }
	float cout << " MENDAFTAR LEWAT JALUR SNBT/SNBP" endl;

	// isi disini dengan fungsi virtual yang dibutuhkan
	void setUangPendaftaran(int nilai) {
		this->uangPendaftaran = nilai;
	}
	float getUangPendaftaran() {
		return uangPendaftaran;
	}
	void getUangPendaftaran(int uangPendaftaran) {
		this
	}
	virtual void namaJalurMasuk() final {
		cout << "MENDAFTAR LEWAT JALUR SNBT/SNBP" << endl;
	}

	void setUangPendaftaran(int nilai) {
		this->uangPendaftaran = nilai;
	}

	float getUangPendaftaran() {
		return uangPendaftaran;
	}

	void getUangPendaftaran(int uangPendaftaran) {
		this->uangPendaftaran = uangPendaftaran;
	}
	// isi setter dan getter variable yang dibutuhkan di bawah ini
};










class SNBT : public MasukUniversitas {
	// isi disini untuk melengkapi class SNBT
	
public:

	SNBT(int pUangPendaftaran) : MasukUniversitas(pUangPendaftaran)
	{
		cout << "Mendaftar jalur SNBT \n" << endl;
	}
};



class SNBP : public MasukUniversitas {
	// isi disini untuk melengkapi class SNBP
public:

	SNBP(int pUangPendaftaran) : MasukUniversitas(pUangPendaftaran)
	{
		cout << "Mendaftar jalur SNBP \n" << endl;
	}
};




int main() override {
	// isi disini untuk fungsi main
	void input() {
		cout << "Masukkan Uang Pendaftaran =";
		cin >> uangPendaftaran;

		cout << "Masukan Uang Bangunan = ";
		cin >> uangBangunan;

		cout << "Masukan Uang Semester = ";
		cin >> uangSemester;
	}

}	