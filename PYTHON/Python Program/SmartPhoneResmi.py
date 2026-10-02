from Produk import Produk
from ProdukFisik import ProdukFisik
from LayananGaransi import LayananGaransi

# ============================================================================
# HYBRID / MULTIPLE INHERITANCE CLASS: SmartPhoneResmi
# Menggabungkan dua superclass sekaligus: ProdukFisik dan LayananGaransi.
# ============================================================================
class SmartPhoneResmi(ProdukFisik, LayananGaransi):
    def __init__(self, nama: str = "", harga_dasar: float = 0.0, berat_kg: float = 0.0, tarif_ongkir_per_kg: float = 0.0, durasi_tahun: int = 0):
        # Memanggil inisialisasi Produk secara eksplisit
        Produk.__init__(self, nama, harga_dasar)
        self._berat_kg = berat_kg
        self._tarif_ongkir_per_kg = tarif_ongkir_per_kg
        self._durasi_tahun = durasi_tahun

    # Method mencetak rincian biaya lengkap
    def cetak_rincian_pembayaran(self):
        ongkir = self.hitung_ongkir()
        biaya_garansi = self.hitung_biaya_garansi()
        total = self._harga_dasar + ongkir + biaya_garansi

        print("----------------------------------------")
        print(f"Nama Produk         : {self._nama}")
        print(f"Harga Dasar         : Rp {self._harga_dasar:,.2f}")
        print(f"Berat Produk        : {self._berat_kg} kg")
        print(f"Tarif Ongkir / kg   : Rp {self._tarif_ongkir_per_kg:,.2f}")
        print(f"Total Biaya Ongkir  : Rp {ongkir:,.2f}")
        print(f"Durasi Garansi      : {self._durasi_tahun} Tahun")
        print(f"Total Biaya Garansi : Rp {biaya_garansi:,.2f}")
        print("----------------------------------------")
        print(f"TOTAL PEMBAYARAN    : Rp {total:,.2f}")
        print("----------------------------------------")