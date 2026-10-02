// ============================================================================
// HYBRID CLASS: SmartPhoneResmi
// Menggabungkan ProdukFisik (Extends) dan ILayananGaransi (Implements Interface).
// ============================================================================
public class SmartPhoneResmi extends ProdukFisik implements LayananGaransi {
    private int durasiTahun;

    // Konstruktor Parameter
    public SmartPhoneResmi(String nama, float hargaDasar, float beratKg, float tarifOngkir, int durasiTahun) {
        super(nama, hargaDasar, beratKg, tarifOngkir);
        this.durasiTahun = durasiTahun;
    }

    @Override
    public int getDurasiTahun() { return durasiTahun; }

    @Override
    public float hitungBiayaGaransi() {
        return durasiTahun * (0.05f * hargaDasar);
    }

    // Cetak detail pembayaran gabungan
    public void cetakRincianPembayaran() {
        float ongkir = hitungOngkir();
        float biayaGaransi = hitungBiayaGaransi();
        float total = hargaDasar + ongkir + biayaGaransi;

        System.out.println("----------------------------------------");
        System.out.println("Nama Produk         : " + nama);
        System.out.printf("Harga Dasar         : Rp %,.2f\n", hargaDasar);
        System.out.println("Berat Produk        : " + beratKg + " kg");
        System.out.printf("Tarif Ongkir / kg   : Rp %,.2f\n", tarifOngkirPerKg);
        System.out.printf("Total Biaya Ongkir  : Rp %,.2f\n", ongkir);
        System.out.println("Durasi Garansi      : " + durasiTahun + " Tahun");
        System.out.printf("Total Biaya Garansi : Rp %,.2f\n", biayaGaransi);
        System.out.println("----------------------------------------");
        System.out.printf("TOTAL PEMBAYARAN    : Rp %,.2f\n", total);
        System.out.println("----------------------------------------");
    }
}