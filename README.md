# ESP8266 Relay 1 Channel 30A
### Diskripsi
![](https://github.com/hwthinker/esp8266-relay1ch-30A/blob/main/picture/3.png)
Proyek ini menggunakan modul ESP8266 untuk mengontrol relay 1-channel 30A dengan konfigurasi GPIO sebagai berikut:

- Relay: GPIO 16 
- LED ESP: GPIO 2 
- LED Board: GPIO 5 

### Deskripsi
Dalam proyek ini, relay dihubungkan ke pin GPIO 16 dari ESP8266. Harap diperhatikan bahwa relay tidak terhubung secara default ke GPIO 16, sehingga diperlukan jumper untuk menghubungkan relay dengan pin tersebut. Setelah dihubungkan, relay dapat dikontrol secara digital untuk mengaktifkan atau mematikan perangkat yang terhubung dengan kemampuan menangani arus hingga 30A.

LED ESP pada GPIO 2 dan LED pada board di GPIO 5 juga digunakan untuk memberikan indikasi status saat relay aktif atau tidak.

### Fitur
Mengontrol perangkat berdaya tinggi melalui relay 30A.
Indikasi status melalui LED ESP dan LED pada board.
Menggunakan modul ESP8266 dengan koneksi nirkabel untuk kontrol jarak jauh.

## Cara download dengan jumper
![](https://github.com/hwthinker/esp8266-relay1ch-30A/blob/main/picture/3.png)
- Pasang serial USB TTL dengan ketentuan: 
   - TX -> RX USB Serial (Kabel Putih)
   - RX -> TX USB Serial (Kabel Hijau)
   - GND -> GND USB Serial (Kabel Hitam)
- Pastikan supply 9VDC dihubungkan pin VCC; GND Power supply -> GND
- Tekan dan tahan tombol key pada Board
- Klik (tekan dan lepas) tombol rst(EN) pada board dan pastikan  tombol key(IO0) masih di tekan
- Lepas tombol Key
- Download program dan tunggu sampai selesai
- Klik tombol rest untuk run-program (langkah ini penting agar firmware baru dijalankan)
- ulang langkah awal bila melakukan download ulang lagi


## Cara download dengan Serial USB auto Download
![](https://github.com/hwthinker/esp8266-relay1ch-30A/blob/main/picture/2.png)
- Pasang serial USB TTL dengan ketentuan:
    - RX Board  -> RX USB Serial  
    - TX Board  -> TX USB Serial 
    - GND Board -> GND USB Serial  
    - IO0 Board -> IO# USB Serial 
    - EN Board  -> EN# USB Serial
- Pastikan supply 9VDC dihubungkan pin VCC; GND Power supply -> GND
- Download program dan tunggu sampai selesai

⚠️ Note:
Anda dapat memilih untuk menggunakan power supply dari salah satu konektor berikut: konektor Power 9V atau konektor Power 5V. Namun, Anda tidak bisa menggunakan kedua konektor secara bersamaan."