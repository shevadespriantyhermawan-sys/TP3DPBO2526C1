from Produk import Produk

# ============================================================================
# CHILD CLASS 2: LayananGaransi (Hierarchical Inheritance)
# Mewarisi kelas Produk dan menambahkan fitur garansi.
# ============================================================================
class LayananGaransi(Produk):
    def __init__(self, nama: str = "", harga_dasar: float = 0.0, durasi_tahun: int = 0):
        super().__init__(nama, harga_dasar)
        self._durasi_tahun = durasi_tahun

    # Getter & Setter durasi_tahun
    def get_durasi_tahun(self) -> int:
        return self._durasi_tahun

    def set_durasi_tahun(self, durasi_tahun: int):
        self._durasi_tahun = durasi_tahun

    # Biaya garansi: 5% dari harga dasar dikali durasi tahun
    def hitung_biaya_garansi(self) -> float:
        return self._durasi_tahun * (0.05 * self._harga_dasar)