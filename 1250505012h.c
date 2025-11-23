#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char komut;
    int saglik = 100;
    int enerji = 100;
    int yemek = 1;

    int sans;
    int hava;
    int arazi;
    int i;
    int hasar;
    int sifre;

    srand(time(NULL)); // rastgele sayý baþlat

    printf("=== HAYATTA KALMA SIMULATORU ===\n");
    printf("Komutlar: A Avlan | S Siginak | E Envanter | R Dinlen | F Tehlike | P Sifre | X Cikis\n");

    do {
        printf("\nKomut gir: ");
        scanf(" %c", &komut);

        switch (komut) {
            case 'A':
            case 'a':
                printf("Avlanýyorsun...\n");
                enerji = enerji - 10;
                if (enerji < 0) enerji = 0;

                sans = rand() % 100; // 0-99
                if (sans > 50 && enerji > 10) {
                    yemek = yemek + 1;
                    printf("Baþarýlý! Yemek buldun. Yemek = %d\n", yemek);
                } else if (sans < 20 || enerji < 20) {
                    saglik = saglik - 10;
                    if (saglik < 0) saglik = 0;
                    printf("Kötü þans! Yaralandýn. Saðlýk = %d\n", saglik);
                } else {
                    printf("Hiçbir þey bulamadýn.\n");
                }
                break;

            case 'S':
            case 's':
                printf("Sýðýnak arýyorsun...\n");
                hava = rand() % 2;   // 0 veya 1
                arazi = rand() % 2;  // 0 veya 1

                if (hava == 1 && arazi == 1) {
                    printf("Güzel bir sýðýnak buldun.\n");
                } else if (hava == 1 || arazi == 1) {
                    printf("Küçük bir sýðýnak buldun.\n");
                } else {
                    saglik = saglik - 5;
                    if (saglik < 0) saglik = 0;
                    printf("Sýðýnak yok! Saðlýk -5. Saðlýk = %d\n", saglik);
                }
                break;

            case 'E':
            case 'e':
                printf("--- ENVANTER ---\n");
                printf("Saðlýk: %d\n", saglik);
                printf("Enerji: %d\n", enerji);
                printf("Yemek : %d\n", yemek);
                break;

            case 'R':
            case 'r':
                printf("Dinleniyorsun...\n");
                enerji = enerji + 15;
                saglik = saglik + 10;
                if (enerji > 100) enerji = 100;
                if (saglik > 100) saglik = 100;
                printf("Enerji ve saðlýk yenilendi. Enerji=%d Saðlýk=%d\n", enerji, saglik);
                break;

            case 'F':
            case 'f':
                printf("Tehlike serisine giriyorsun (5 tur)...\n");
                for (i = 1; i <= 5; i++) {
                    hasar = (rand() % 10) + 1; // 1-10
                    saglik = saglik - hasar;
                    if (saglik < 0) saglik = 0;
                    printf("%d. tehlike => %d hasar. Saðlýk = %d\n", i, hasar, saglik);
                    if (saglik == 0) {
                        printf("Saðlýðýn 0 oldu. Öldün. Oyun bitti.\n");
                        return 0;
                    }
                }
                break;

            case 'P':
            case 'p':
                printf("Þifreli kapý. Doðru þifre: 1234\n");
                do {
                    printf("Þifre gir: ");
                    scanf("%d", &sifre);
                    if (sifre != 1234) {
                        printf("Yanlýþ þifre. Tekrar deneyin.\n");
                    }
                } while (sifre != 1234);
                printf("Þifre doðru! Kapý açýldý.\n");
                break;

            case 'X':
            case 'x':
                printf("Oyundan çýkýlýyor...\n");
                break;

            default:
                printf("Geçersiz komut! Tekrar dene.\n");
        }

    } while (komut != 'X' && komut != 'x');

    return 0;
}

