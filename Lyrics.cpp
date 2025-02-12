#include <iostream>
#include <vector>
#include <string>
#include <thread>
#include <chrono>

void printLirik() {
    std::vector<std::tuple<std::string, int, int>> lirik = {
        {"Your morning eyes, I could stare like watching stars", 760, 100},
        {"I could walk you by, and I'll tell without a thought", 560, 110},
        {"You'd be mine, would you mind if I took your hand tonight?", 660, 90},
        {"Know you're all that I want this life", 460, 120},
        {"", 1500, 70},
        {"", 560, 140},
        {"I'll imagine we fell in love", 780, 80},
        {"I'll nap under moonlight skies with you", 680, 75},
        {"I think I'll picture us, you with the waves", 580, 85},
        {"The ocean's colors on your face", 480, 90},
        {"I'll leave my heart with your air", 580, 80},
        {"So let me fly with you", 680, 70},
        {"Will you be forever with me?", 780, 100},
        {"*                   *", 680, 70},
        {"     *     *      ", 680, 70},
        {"    **   **     ", 680, 70},
        {"   ** **    ", 680, 70},
        {"    *****     ", 680, 70},
        {"     ***      ", 680, 70},
        {"      ***       ", 680, 70},
        {"       ***        ", 680, 70},
        {"        *         ", 680, 70},
        {"         *          ", 680, 70},
        {"*                  *", 680, 70},
        {"", 560, 120},
        /*{"My love will always stay by you", 760, 95},
        {"I'll keep it safe, so don't you worry a thing", 560, 100},
        {"I'll tell you I love you more", 660, 90},
        {"It's stuck with you forever, so promise you won't let it go", 560, 105},
        {"I'll trust the universe will always bring me to you", 760, 110},
        {"", 360, 60},
        {"", 560, 100},
        {"I'll imagine we fell in love", 760, 95},
        {"I'll nap under moonlight skies with you", 660, 90},
        {"I think I'll picture us, you with the waves", 560, 105},
        {"The ocean's colors on your face", 460, 110},
        {"I'll leave my heart with your air", 560, 100},
        {"So let me fly with you", 660, 90},
        {"Will you be forever with me?", 760, 110},*/
    };

    // Cetak lirik dengan huruf muncul satu per satu dengan delay yang berbeda
    for (const auto& baris : lirik) {
        const std::string& teks = std::get<0>(baris);
        int delayBaris = std::get<1>(baris);
        int delayHuruf = std::get<2>(baris);

        for (char c : teks) {
            std::cout << c << std::flush;
            std::this_thread::sleep_for(std::chrono::milliseconds(delayHuruf)); // Delay per huruf
        }
        std::cout << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(delayBaris)); // Delay setelah baris selesai
    }
}

int main() {
    // Panggil fungsi untuk mencetak lirik
    printLirik();
    return 0;
}