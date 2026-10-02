# ============================================================================
# BASE CLASS: Produk
# Kelas teratas dalam struktur hierarki pewarisan.
# ============================================================================
class Produk:
    def __init__(self, nama: str = "", harga_dasar: float = 0.0):
        # Protected attributes (menggunakan awalan _ )
        self._nama = nama
        self._harga_dasar = harga_dasar

    # Getter & Setter Atribut nama
    def get_nama(self) -> str:
        return self._nama

    def set_nama(self, nama: str):
        self._nama = nama

    # Getter & Setter Atribut harga_dasar
    def get_harga_dasar(self) -> float:
        return self._harga_dasar

    def set_harga_dasar(self, harga_dasar: float):
        self._harga_dasar = harga_dasar