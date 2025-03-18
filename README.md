# Banka Sistemi Projesi 💳

Bu proje, C++ kullanarak geliştirilmiş, kullanıcı yönetimi ve banka işlemleri simülasyonu yapan bir sistemdir. Banka uygulaması, admin kullanıcılarının yönetim işlevlerini ve müşteri işlemlerini kolayca yapabilmesini sağlar.

---

## Sistemde Bulunan Özellikler 📜

### 1. **Login Ekranı** 🖥️
![Ekran görüntüsü 2025-03-18 223136](https://github.com/user-attachments/assets/0238a79d-051f-4a3b-bd94-216f38db7764)
Sisteme kullanıcı adı ve şifre girilerek giriş yapılır. Başarılı bir giriş sonrası ana ekrana yönlendirilirsiniz.

### 2. **Ana Menü** 🏠
![Ekran görüntüsü 2025-03-18 223028](https://github.com/user-attachments/assets/e3322346-7151-48df-9b76-ffbdaa7b9f07)
Ana menüde kullanıcılar çeşitli işlemleri gerçekleştirebilir. Admin kullanıcılarının erişebileceği işlemler şunlardır:

#### **[1] Müşteri Listesini Görüntüle** 👥
![Ekran görüntüsü 2025-03-18 224032](https://github.com/user-attachments/assets/2f9f0c34-6f5d-4eff-8624-241482634f63)
Müşteri listesini görüntüleyebilirsiniz. Hesap numarası, ad, telefon, e-posta, pin kodu ve bakiye bilgilerini içerir.

#### **[2] Yeni Müşteri Ekle** ➕
Yeni bir müşteri ekleyebilirsiniz. Müşteri adı, telefon numarası, e-posta adresi, pin kodu ve başlangıç bakiyesi gibi bilgileri girerek yeni bir müşteri oluşturabilirsiniz.

#### **[3] Müşteri Sil** 🗑️
Mevcut bir müşteriyi sistemden silebilirsiniz.

#### **[4] Müşteri Bilgilerini Güncelle** ✏️
Bir müşterinin bilgilerini güncelleyebilirsiniz. Telefon numarasını, e-posta adresini veya diğer bilgilerini değiştirebilirsiniz.

#### **[5] Müşteri Bul** 🔍
Belirli bir müşteri hakkında arama yapabilirsiniz. Müşteri adı veya hesap numarasını girerek arama gerçekleştirebilirsiniz.

#### **[6] Para Transferi** 💸
![Ekran görüntüsü 2025-03-18 223943](https://github.com/user-attachments/assets/11c9b137-5885-4665-b95b-495c372b48e4)

Para transferi işlemleri yapabilirsiniz. Yatırma, çekme, bakiye sorgulama ve transfer geçmişi gibi işlemler içerir.

#### **[7] Kullanıcıları Yönet** 👥
![Ekran görüntüsü 2025-03-18 223957](https://github.com/user-attachments/assets/7f5c3bae-2a9c-4c70-a03f-036c97d072cf)

Kullanıcıları ekleyebilir, silebilir, güncelleyebilir veya yetkilerini değiştirebilirsiniz.

#### **[8] Giriş Kayıtları** 📜
![Ekran görüntüsü 2025-03-18 224417](https://github.com/user-attachments/assets/e2ecf939-2824-47b5-8d2e-0faf6493a947)

Sisteme giriş yapılan kullanıcıların kayıtlarını görüntüleyebilirsiniz. Kimlerin ne zaman giriş yaptığını gösterir.

#### **[9] Döviz Değişimi** 💱
![Ekran görüntüsü 2025-03-18 224010](https://github.com/user-attachments/assets/cf895388-c2fd-4ada-bb1e-998b46ab28db)

Kullanıcılar döviz listelme, arama, kuru güncelleme ve döviz hesaplamaları yapabilir.


### Güvenlik ve Kayıt Yönetimi 🔒

- **Giriş Kayıtları** 📝  
  Her kullanıcı, sisteme ne zaman giriş yaptığını öğrenebilir. Sistem, kullanıcı girişlerini kaydeder ve giriş geçmişine erişim sağlar.

- **Şifre Güvenliği** 🔐  
  Tüm şifreler, güvenli şifreleme yöntemleri ile saklanır. Bu sayede, şifreler üçüncü şahıslar tarafından okunamaz ve sistemdeki güvenlik maksimum seviyeye çıkar.

- **Transfer İşlemi Kayıtları** 📊
  
  ![Ekran görüntüsü 2025-03-18 230844](https://github.com/user-attachments/assets/a7f27cdc-0941-4947-8752-69671e928eb4)

  Yapılan tüm transfer işlemleri kaydedilir. Hangi kullanıcı hangi transferi yaptı, ne zaman yaptı ve kime yaptı bilgileri kayıt altına alınır. Böylece sistemdeki tüm işlemler takip edilebilir.

- **Yanlış Giriş Denemeleri** ⚠️  
  Bir kullanıcı 3 kez ardı ardına yanlış şifre girerse, sistem otomatik olarak kullanıcıyı geçici olarak engeller. Bu, güvenliği artırmak için önemli bir özelliktir.

- **Admin Yetkileri** 👑
  ![Ekran görüntüsü 2025-03-18 231905](https://github.com/user-attachments/assets/38a78245-dc33-47fd-b604-0cdacb8809f3)
  Admin kullanıcıları, tüm sistemi kontrol edebilir. Adminler, kullanıcıların yetkilerini değiştirebilir ve sisteme yeni kullanıcılar ekleyebilir. Adminler ayrıca tüm işlem geçmişine erişebilir ve kullanıcılar üzerinde tam yetki sahibi olabilir.


