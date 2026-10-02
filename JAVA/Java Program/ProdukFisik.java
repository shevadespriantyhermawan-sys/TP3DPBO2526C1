// ============================================================================
// CHILD CLASS 1: ProdukFisik (Pewarisan Utama)
// ============================================================================
public class ProdukFisik extends Produk {
    protected float beratKg;
    protected float tarifOngkirPerKg;

    // Konstruktor
    public ProdukFisik(String nama, float hargaDasar, float beratKg, float tarifOngkirPerKg) {
        super(nama, hargaDasar);
        this.beratKg = beratKg;
        this.tarifOngkirPerKg = tarifOngkirPerKg;
    }

    // Hitung ongkos kirim fisik
    public float hitungOngkir() {
        return beratKg * tarifOngkirPerKg;
    }
}