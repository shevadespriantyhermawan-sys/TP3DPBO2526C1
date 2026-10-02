// ============================================================================
// BASE CLASS: Produk
// Superclass teratas dalam struktur hierarki.
// ============================================================================
public class Produk {
    protected String nama;          // Atribut nama
    protected float hargaDasar;    // Atribut harga dasar

    // Konstruktor Default
    public Produk() {
        this.nama = "";
        this.hargaDasar = 0.0f;
    }

    // Konstruktor Parameter
    public Produk(String nama, float hargaDasar) {
        this.nama = nama;
        this.hargaDasar = hargaDasar;
    }

    // Getter & Setter Atribut nama
    public String getNama() { return nama; }
    public void setNama(String nama) { this.nama = nama; }

    // Getter & Setter Atribut hargaDasar
    public float getHargaDasar() { return hargaDasar; }
    public void setHargaDasar(float hargaDasar) { this.hargaDasar = hargaDasar; }
}