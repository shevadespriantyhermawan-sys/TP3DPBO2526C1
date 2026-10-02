# Tugas Praktikum 3 - Pemrograman Berbasis Objek (OOP)

Janji 

Saya Sheva Desprianty Hermawan dengan NIM 2511645 mengerjakan kuis 1 dalam mata kuliah desain pemrograman berorientasi objek untuk keberkahannya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Amin 


Repositori ini berisi implementasi sistem pengelolaan katalog toko elektronik menggunakan tiga bahasa pemrograman: **C++**, **Python**, dan **Java**. Seluruh kode dibuat secara modular (terpisah per kelas) dan selaras dengan desain UML Class Diagram.

---

## 📌 Konsep OOP yang Diterapkan

1. **Encapsulation (Enkapsulasi)**:
   - Atribut dibungkus menggunakan hak akses `private` (`-`) dan `protected` (`#`).
   - Akses data dilakukan secara aman melalui *Getter* dan *Setter*.
2. **Inheritance (Pewarisan)**:
   - **Hierarchical Inheritance**: Kelas `ProdukFisik` dan `LayananGaransi` mewarisi kelas utama `Produk`.
   - **Multiple / Hybrid Inheritance**: Kelas `SmartPhoneResmi` menggabungkan sifat dari `ProdukFisik` dan `LayananGaransi`.
     - **C++**: Menggunakan *Virtual Inheritance* (`virtual public Produk`) untuk mencegah *Diamond Problem*.
     - **Java**: Menggunakan `extends ProdukFisik` dan `implements ILayananGaransi` (Interface).
     - **Python**: Menggunakan *Multiple Inheritance* native (`class SmartPhoneResmi(ProdukFisik, LayananGaransi)`).
3. **Composition (Komposisi)**:
   - Kelas `TokoElektronik` memiliki hubungan kepemilikan utuh (*Composition*) terhadap daftar produk `SmartPhoneResmi` menggunakan struktur *Array of Objects* (`vector` / `List` / `ArrayList`).

---

## 📐 Spesifikasi Desain UML Class Diagram

Diagram UML dirancang dengan ketentuan komponen dan simbol standar sebagai berikut:

### 1. Rincian Kelas, Atribut, dan Method

* **`Produk`** *(Base Class)*
  * Atribut: `# nama : String`, `# harga_dasar : float`
  * Method: `+ Produk()`, `+ Produk(nama : String, harga_dasar : float)`, `+ getNama() : String`, `+ setNama(nama : String) : void`, `+ getHargaDasar() : float`, `+ setHargaDasar(harga_dasar : float) : void`
* **`ProdukFisik`** *(Child Class 1)*
  * Atribut: `# berat_kg : float`, `# tarif_ongkir_per_kg : float`
  * Method: `+ ProdukFisik()`, `+ ProdukFisik(nama : String, harga_dasar : float, berat_kg : float, tarif_ongkir_per_kg : float)`, `+ getBerat() : float`, `+ setBerat(berat_kg : float) : void`, `+ getTarifOngkirPerKg() : float`, `+ setTarifOngkirPerKg(tarif : float) : void`, `+ hitung_ongkir() : float`
* **`LayananGaransi`** *(Child Class 2)*
  * Atribut: `# durasi_tahun : int`
  * Method: `+ LayananGaransi()`, `+ LayananGaransi(nama : String, harga_dasar : float, durasi_tahun : int)`, `+ getDurasiTahun() : int`, `+ setDurasiTahun(durasi_tahun : int) : void`, `+ hitung_biaya_garansi() : float`
* **`SmartPhoneResmi`** *(Derived Hybrid Class)*
  * Method: `+ SmartPhoneResmi()`, `+ SmartPhoneResmi(nama : String, harga_dasar : float, berat_kg : float, tarif_ongkir : float, durasi_garansi : int)`, `+ cetak_rincian_pembayaran() : void`
* **`TokoElektronik`** *(Container Class)*
  * Atribut: `- nama_toko : String`, `- daftar_produk : List<SmartPhoneResmi>`
  * Method: `+ TokoElektronik(nama : String)`, `+ getNamaToko() : String`, `+ setNamaToko(nama : String) : void`, `+ getDaftarProduk() : List<SmartPhoneResmi>`, `+ setDaftarProduk(daftar : List<SmartPhoneResmi>) : void`, `+ tambah_produk(sp : SmartPhoneResmi) : void`, `+ tampilkan_semua_produk() : void`

### 2. Aturan Panah Relasi UML
* **Inheritance (`<|--`)**: Menggunakan garis dengan ujung **segitiga putih/kosong (`△`)** yang menunjuk dari kelas anak (*child*) ke kelas induk (*parent*):
  * `ProdukFisik` $\rightarrow$ `Produk`
  * `LayananGaransi` $\rightarrow$ `Produk`
  * `SmartPhoneResmi` $\rightarrow$ `ProdukFisik` & `LayananGaransi`
* **Composition (`*--`)**: Menggunakan garis dengan ujung **belah ketupat hitam pekat (`◆`)** yang menempel di kotak `TokoElektronik` mengarah ke `SmartPhoneResmi` dengan kardinalitas `1` ke `0..*`.


🚀 Alur Skenario Pengujian Program
Eksekusi program pada ketiga bahasa menunjukkan 3 kondisi keluaran:

Kondisi Awal (Sebelum Tambah Data):

Toko diinisialisasi dengan nama "Toko Official Gadget".

Katalog ditampilkan saat masih belum memiliki produk ((Katalog Masih Kosong)).

Kondisi Setelah 2 Data Awal Masuk:

Menambahkan 2 item produk awal ke dalam toko:

iPhone 15 Pro (Harga Dasar: Rp 18.500.000, Berat: 0.4 kg, Ongkir/kg: Rp 25.000, Garansi: 2 Tahun)

Samsung Galaxy S24 Ultra (Harga Dasar: Rp 21.000.000, Berat: 0.5 kg, Ongkir/kg: Rp 30.000, Garansi: 1 Tahun)

Menampilkan seluruh katalog beserta kalkulasi ongkir, garansi, dan total harga.

Kondisi Akhir (Sesudah Tambah Data Baru):

Menambahkan 1 item produk baru:

Xiaomi 14 Ultra (Harga Dasar: Rp 14.000.000, Berat: 0.45 kg, Ongkir/kg: Rp 20.000, Garansi: 3 Tahun)

Menampilkan katalog akhir untuk memastikan data baru berhasil ditambahkan dan terhitung secara otomatis.

