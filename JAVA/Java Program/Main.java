// ============================================================================
// MAIN CLASS: Driver Utama Program Java
// ============================================================================
public class Main {
    public static void main(String[] args) {
        TokoElektronik toko = new TokoElektronik("Toko Official Gadget");

        // 1. Tampilan Sebelum Penambahan Data
        System.out.println("==========================================");
        System.out.println("  1. KONDISI AWAL (SEBELUM TAMBAH DATA)   ");
        System.out.println("==========================================");
        toko.tampilkanSemuaProduk();

        SmartPhoneResmi sp1 = new SmartPhoneResmi("iPhone 15 Pro", 18500000, 0.4f, 25000, 2);
        SmartPhoneResmi sp2 = new SmartPhoneResmi("Samsung Galaxy S24 Ultra", 21000000, 0.5f, 30000, 1);

        toko.tambahProduk(sp1);
        toko.tambahProduk(sp2);

        System.out.println("\n==========================================");
        System.out.println("  2. KONDISI SETELAH 2 DATA AWAL MASUK    ");
        System.out.println("==========================================");
        toko.tampilkanSemuaProduk();

        // 2. Tampilan Sesudah Penambahan Data Baru
        SmartPhoneResmi sp3 = new SmartPhoneResmi("Xiaomi 14 Ultra", 14000000, 0.45f, 20000, 3);
        System.out.println("\n>>> [SISTEM] Menambahkan produk baru: " + sp3.getNama() + " <<<");
        toko.tambahProduk(sp3);

        System.out.println("\n==========================================");
        System.out.println("  3. KONDISI AKHIR (SESUDAH TAMBAH DATA)  ");
        System.out.println("==========================================");
        toko.tampilkanSemuaProduk();
    }
}