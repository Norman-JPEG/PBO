
#include <iostream>
using namespace std;

int main() {
    int pilihan, skor;
    char ulang;

    do {
        skor = 0;

        cout << "====================================\n";
        cout << "       MISI MAHASISWA BERETIKA\n";
        cout << "====================================\n";
        cout << "Belajar etika dan sopan santun kampus\n";
        cout << "Jawab 5 pertanyaan dengan benar!\n";

        // SOAL 1: MENGHORMATI DOSEN
        cout << "\n====================================\n";
        cout << "MISI 1: MENGHORMATI DOSEN\n";
        cout << "====================================\n";
        cout << "Kamu bertemu dosen di koridor kampus.\n";
        cout << "Apa yang sebaiknya dilakukan?\n";
        cout << "1. Pura-pura tidak melihat\n";
        cout << "2. Menyapa dan memberi salam\n";
        cout << "3. Langsung pergi\n";
        cout << "Jawaban: ";
        cin >> pilihan;

        if (pilihan == 2) {
            cout << "\nBENAR! +20 poin\n";
            skor = skor + 20;
        } else {
            cout << "\nKURANG TEPAT!\n";
            cout << "Jawaban yang benar adalah nomor 2.\n";
        }

        cout << "\nEDUKASI:\n";
        cout << "Menyapa dosen merupakan bentuk rasa hormat.\n";
        cout << "Sikap sopan dapat membangun hubungan baik\n";
        cout << "antara mahasiswa dan dosen.\n";

        // SOAL 2: ETIKA MASUK KELAS
        cout << "\n====================================\n";
        cout << "MISI 2: ETIKA MASUK KELAS\n";
        cout << "====================================\n";
        cout << "Kamu terlambat masuk kelas.\n";
        cout << "Apa yang sebaiknya dilakukan?\n";
        cout << "1. Meminta izin kepada dosen\n";
        cout << "2. Langsung duduk tanpa izin\n";
        cout << "3. Membuat keributan\n";
        cout << "Jawaban: ";
        cin >> pilihan;

        if (pilihan == 1) {
            cout << "\nBENAR! +20 poin\n";
            skor = skor + 20;
        } else {
            cout << "\nKURANG TEPAT!\n";
            cout << "Jawaban yang benar adalah nomor 1.\n";
        }

        cout << "\nEDUKASI:\n";
        cout << "Meminta izin menunjukkan sikap tanggung jawab\n";
        cout << "dan menghargai dosen yang sedang mengajar.\n";
        cout << "Mahasiswa juga harus berusaha datang tepat waktu.\n";

        // SOAL 3: MENGHARGAI PENDAPAT
        cout << "\n====================================\n";
        cout << "MISI 3: MENGHARGAI PENDAPAT\n";
        cout << "====================================\n";
        cout << "Temanmu berbeda pendapat saat diskusi.\n";
        cout << "Apa yang akan kamu lakukan?\n";
        cout << "1. Memotong pembicaraannya\n";
        cout << "2. Mengejek pendapatnya\n";
        cout << "3. Mendengarkan dan menghargainya\n";
        cout << "Jawaban: ";
        cin >> pilihan;

        if (pilihan == 3) {
            cout << "\nBENAR! +20 poin\n";
            skor = skor + 20;
        } else {
            cout << "\nKURANG TEPAT!\n";
            cout << "Jawaban yang benar adalah nomor 3.\n";
        }

        cout << "\nEDUKASI:\n";
        cout << "Setiap mahasiswa memiliki pendapat berbeda.\n";
        cout << "Kita harus menghargai pendapat orang lain.\n";
        cout << "Jika tidak setuju, sampaikan alasan dengan sopan\n";
        cout << "tanpa menghina atau memotong pembicaraan.\n";

        // SOAL 4: ETIKA MENGANTRE
        cout << "\n====================================\n";
        cout << "MISI 4: ETIKA MENGANTRE\n";
        cout << "====================================\n";
        cout << "Kamu sedang antre di bagian akademik.\n";
        cout << "Apa yang sebaiknya dilakukan?\n";
        cout << "1. Menyerobot antrean\n";
        cout << "2. Menunggu giliran dengan tertib\n";
        cout << "3. Memarahi petugas\n";
        cout << "Jawaban: ";
        cin >> pilihan;

        if (pilihan == 2) {
            cout << "\nBENAR! +20 poin\n";
            skor = skor + 20;
        } else {
            cout << "\nKURANG TEPAT!\n";
            cout << "Jawaban yang benar adalah nomor 2.\n";
        }

        cout << "\nEDUKASI:\n";
        cout << "Mengantre merupakan bentuk kedisiplinan.\n";
        cout << "Menyerobot antrean berarti tidak menghargai\n";
        cout << "hak orang lain yang sudah menunggu lebih dulu.\n";
        cout << "Budayakan tertib di lingkungan kampus.\n";

        // SOAL 5: KEJUJURAN AKADEMIK
        cout << "\n====================================\n";
        cout << "MISI 5: KEJUJURAN AKADEMIK\n";
        cout << "====================================\n";
        cout << "Kamu belum menyelesaikan tugas kuliah.\n";
        cout << "Teman menawarkan jawaban untuk disalin.\n";
        cout << "Apa yang sebaiknya dilakukan?\n";
        cout << "1. Mengerjakan sendiri dengan jujur\n";
        cout << "2. Menyalin semua jawaban teman\n";
        cout << "3. Mengaku tugas teman sebagai milikmu\n";
        cout << "Jawaban: ";
        cin >> pilihan;

        if (pilihan == 1) {
            cout << "\nBENAR! +20 poin\n";
            skor = skor + 20;
        } else {
            cout << "\nKURANG TEPAT!\n";
            cout << "Jawaban yang benar adalah nomor 1.\n";
        }

        cout << "\nEDUKASI:\n";
        cout << "Kejujuran adalah bagian penting dari etika.\n";
        cout << "Menyalin tugas teman tanpa izin dan mengakuinya\n";
        cout << "sebagai karya sendiri merupakan tindakan tidak jujur.\n";
        cout << "Jika kesulitan, mintalah bantuan untuk memahami\n";
        cout << "materi, bukan untuk menyalin jawabannya.\n";

        // HASIL AKHIR
        cout << "\n====================================\n";
        cout << "             HASIL AKHIR\n";
        cout << "====================================\n";
        cout << "Total skor: " << skor << "/100\n";

        if (skor == 100) {
            cout << "LUAR BIASA!\n";
            cout << "Semua jawaban kamu benar!\n";
        } else if (skor >= 80) {
            cout << "SELAMAT! Misi berhasil!\n";
            cout << "Pemahaman etika kamu sudah baik.\n";
        } else {
            cout << "MISI BELUM BERHASIL!\n";
            cout << "Ayo belajar dan coba lagi!\n";
        }

        cout << "\nIngat! Etika bukan hanya dipahami,\n";
        cout << "tetapi juga diterapkan setiap hari.\n";

        // MENGULANG PERMAINAN
        cout << "\nIngin bermain lagi? (y/n): ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');

    cout << "\nTerima kasih sudah bermain!\n";

    return 0;
}
