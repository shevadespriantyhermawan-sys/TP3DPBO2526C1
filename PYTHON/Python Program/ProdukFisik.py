from Produk import Produk

# ============================================================================
# CHILD CLASS 1: ProdukFisik (Hierarchical Inheritance)
# Mewarisi kelas Produk dan menambahkan fitur spesifik barang fisik.
# ============================================================================
class ProdukFisik(Produk):
    def __init__(self, nama: str = "", harga_dasar: float = 0.0, berat_kg: float = 0.0, tarif_ongkir_per_kg: float = 0.0):
        super().__init__(nama, harga_dasar)
        self._berat_kg = berat_kg
        self._tarif_ongkir_per_kg = tarif_ongkir_per_kg

    # Getter & Setter berat_kg
    def get_berat(self) -> float:
        return self._berat_kg

    def set_berat(self, berat_kg: float):
        self._berat_kg = berat_kg

    # Getter & Setter tarif_ongkir_per_kg
    def get_tarif_ongkir_per_kg(self) -> float:
        return self._tarif_ongkir_per_kg

    def set_tarif_ongkir_per_kg(self, tarif: float):
        self._tarif_ongkir_per_kg = tarif

    # Hitung biaya pengiriman fisik
    def hitung_ongkir(self) -> float:
        return self._berat_kg * self._tarif_ongkir_per_kg