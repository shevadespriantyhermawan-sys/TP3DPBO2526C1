import java.util.ArrayList;

// ============================================================================
// CONTAINER CLASS: TokoElektronik
// Mengatur Composition dan ArrayList of Objects SmartPhoneResmi.
// ============================================================================
public class TokoElektronik {
    private String namaToko;
    private ArrayList<SmartPhoneResmi> daftarProduk; // Composition & Array of Objects

    public TokoElektronik(String namaToko) {
        this.namaToko = namaToko;
        this.daftarProduk = new ArrayList<>();
    }

    // Tambah objek ke ArrayList toko
    public void tambahProduk(SmartPhoneResmi sp) {
        daftarProduk.add(sp);
    }

    // Tampilkan seluruh objek produk di toko
    public void tampilkanSemuaProduk() {
        System.out.println("\n========================================");
        System.out.println("     KATALOG PRODUK: " + namaToko);
        System.out.println("========================================");
        if (daftarProduk.isEmpty()) {
            System.out.println("(Katalog Masih Kosong)");
            return;
        }
        for (int i = 0; i < daftarProduk.size(); i++) {
            System.out.println("\n[ Item #" + (i + 1) + " ]");
            daftarProduk.get(i).cetakRincianPembayaran();
        }
        System.out.println("\nTotal Produk Tersedia: " + daftarProduk.size() + " item.");
    }
}