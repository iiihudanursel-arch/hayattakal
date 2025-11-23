# 🏕 Hayatta Kalma Simülatörü

**Basit bir metin tabanlı hayatta kalma oyunu.**  
Oyuncu, sağlık ve enerji değerlerini yöneterek hayatta kalmaya çalışır ve çeşitli rastgele olaylarla karşılaşır.

---

## 🎮 Oyun Kuralları

### Başlangıç Değerleri
- **Sağlık:** 100  
- **Enerji:** 100  
- **Yemek:** 1  

### Komutlar

| Komut | Açıklama |
|-------|----------|
| `A` | **Avlan**: Enerji harcanır, şansa göre yemek bulunur veya sağlık kaybı olabilir. |
| `S` | **Sığınak ara**: Hava ve arazi durumuna göre sığınak bulunur veya sağlık kaybı olur. |
| `E` | **Envanteri göster**: Sağlık, enerji ve yemek sayısını gösterir. |
| `R` | **Dinlen**: Enerji ve sağlık yenilenir. |
| `F` | **Tehlike**: 5 tur boyunca rastgele hasar alırsınız. Sağlık 0 olursa oyun biter. |
| `P` | **Şifreli kapı**: Doğru şifre (1234) girilene kadar kapı açılmaz. |
| `X` | **Çıkış**: Oyundan çıkılır. |

---

## ⚡ Oyun Mantığı
- Sağlık ve enerji 0-100 arasında tutulur.  
- Avlanma veya tehlike sırasında rastgele olaylar gerçekleşir.  
- Sağlık 0 olursa oyun sona erer.  
- Enerji düşük olduğunda avlanma veya tehlike riskli hale gelir.  

---

## 📌 Örnek Kullanım

```text
=== HAYATTA KALMA SIMULATORU ===
Komutlar: A Avlan | S Siginak | E Envanter | R Dinlen | F Tehlike | P Sifre | X Cikis

Komut gir: A
Avlanıyorsun...
Başarılı! Yemek buldun. Yemek = 2

Komut gir: E
--- ENVANTER ---
Sağlık: 100
Enerji: 90
Yemek : 2
