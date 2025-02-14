# Proje: Sesle Kontrol Edilen Çeşme

## Proje Amacı

Bu proje, çevredeki seslere tepki veren bir çeşme yapmayı amaçlamaktadır. Ses sensörü, ortamda duyduğu seslere göre Arduino'yu tetikler. Arduino, bu veriye göre çeşmenin su akışını ya da müziği kontrol eder. Örneğin, bir ses duyulduğunda suyun akması başlayabilir veya müzik çalmaya başlayabilir. Sonuç olarak, sesle uyumlu çalışan interaktif bir deneyim ortaya çıkar, hem görsel hem de işitsel bir etki yaratılır.

## Kullanılacak Malzemeler

- **Arduino Uno**: Programlanabilir bir mikrodenetleyici kartıdır.
- **Ses Sensörü Modülü**: Çevredeki sesleri algılayarak sinyal üreten bir cihazdır.
- **Röle Modülü**: Düşük voltajlı sinyallerle yüksek voltajlı cihazları kontrol etmeye yarar.
- **DC Pompası**: DC motorla çalışan sıvı pompasıdır.
- **LED'ler**: Arduino kartıyla kontrol edilen ışıklı diyotlardır.
- **Bağlantı Kabloları**: Devreleri bağlayan iletkenlerdir.
- **Breadboard**: Lehim kullanmadan devre kurmaya yarayan araçtır.
- **Power Supply**: Enerji sağlayan güç kaynağıdır.
- **Direnç**: Elektrik akımına karşı koyan bileşendir.

## Proje Yapım Aşamaları

### 1. Malzemeleri Toplama
- Arduino, direnç, ses sensörü, röle modülü, su pompası, LED'ler, breadboard, power supply gibi bileşenleri temin edin.

### 2. Bağlantıları Yapma
- Ses sensörünü ve röle modülünü Arduino'ya bağlayın.
- Su pompasını röle modülüyle entegre edin.

### 3. Yazılım
- Arduino'ya, ses sensöründen gelen verilere göre pompa ve müzik kontrolü sağlayacak bir kod yazın.

### 4. Test ve Ayar
- Sistemi test ederek, ses seviyesine göre doğru tepki verdiğinden emin olun.
