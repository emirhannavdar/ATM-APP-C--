#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    int kulNum,sifre,bakiye,borc,tus,tutar,kullanılabilirBakiye,devam,yatır,borcÖdeme,degerlendirme ;
    string yorum,gelistirici,uygulamaSifre,yorumGorme,kimlik ;
    kimlik = "223301080" ;
    uygulamaSifre = "szdrx122" ;
    bakiye = 10000 ;
    borc   = 2560 ; 
    kullanılabilirBakiye = bakiye - borc ;
    cout << "Müşteri numaranızı ve şifrenizi tuşlayınız:        " << endl ;
    bas : cout << "Müşteri numaranız:          " ; cin >> kulNum ;
    bas2 : cout << "Şifrenizi giriniz:          " ; cin >> sifre ;
    if(kulNum != 220722){
        cout << "Yanlıs müşteri numarası girdiniz.Tekrar giris yapınız...      " << endl ;
        goto bas ;
    }
    if(sifre != 123456){
        cout << "Yanlıs sifre girdiniz.Şifrenizi tekrar giriniz...        " << endl ;
        goto bas2;
    }
    if(kulNum == 220722 && sifre == 123456){
        cout << "\n\t\tAŞK BANKALARINA HOSGELDİNİZ" << endl ;
        cout << "\nToday : " << __DATE__ << " Time : " << __TIME__ << endl;
        cout << "\nToplam bakiyeniz:       " << bakiye << "\nToplam borcunuz :       " << borc << "\nKullanılabilir bakiye:  " << kullanılabilirBakiye << endl ;
        bas3 : cout << "\nPara çekmek için 1'i\nPara yatırmak için 2'yi\nBorç ödemek için 3'ü\nUygulamadan çıkmak için 4'ü tuslayınız:      " ; cin >>  tus ; 
        switch(tus){
            case 1 :
                cout << "\nÇekmek istediğiniz tutarı giriniz:    " ; cin >> tutar ;
                kullanılabilirBakiye -= tutar ;
                cout << "\nKalan kullanılabilir bakiye:   " << kullanılabilirBakiye << endl ;
                cout << "\nBaşka işlem yapmak için 1' tuslayınız.Uygulamadan çıkmak için 2'yi tuslayınız:   " ; cin >> devam ;
                if(devam == 1){
                    goto bas3 ;
                }
                if(devam == 2){
                    cout << "\nEğer bankamızın uygulamasını değerlendirirseniz çok memnun oluruz :)\nDeğerlenirme yapmak için 1' tuslamanız yeterli.\nEğer değerlendirme yapmıcaksanız 2'yi tuslayınız...   " ; cin >> degerlendirme ;
                    if(degerlendirme == 2){
                        cout << "\nTekrar görüşmek üzere.Kendinize iyi bakın.." << endl ;
                        exit(0) ;
                    }
                    if(degerlendirme == 1){
                        cout << "\nYapıcak olcağınız değerlendirme bizim ve uygulamamızın gelişimi için çok önemli.Yorumda bulunmayı kabul ettiğiniz için çok teşekkürler.\nYorumunuz(lütfen boşluk kullanmak yerine _ ifadesini kullanınız.Teşekkür ederiz.) : " << endl ;
                        cin >> yorum ;
                    }
                }
                break;

            case 2 :
                cout << "Hesabınıza ne kadar para yatırmak istiyorsunuz:     " ; cin >> yatır ;
                kullanılabilirBakiye += yatır ;
                cout << "\nKalan kullanılabilir bakiye:    " << kullanılabilirBakiye << endl ;
                cout << "\nBaşka işlem yapmak için 1' tuslayınız.Uygulamadan çıkmak için 2'yi tuslayınız:   " ; cin >> devam ;
                if(devam == 1){
                    goto bas3 ;
                }
                if(devam == 2){
                    cout << "\nEğer bankamızın uygulamasını değerlendirirseniz çok memnun oluruz :)\nDeğerlenirme yapmak için 1' tuslamanız yeterli.\nEğer değerlendirme yapmıcaksanız 2'yi tuslayınız...   " ; cin >> degerlendirme ;
                    if(degerlendirme == 2){
                        cout << "\nTekrar görüşmek üzere.Kendinize iyi bakın.." << endl ;
                        exit(0) ;
                    }
                    if(degerlendirme == 1){
                        cout << "\nYapıcak olcağınız değerlendirme bizim ve uygulamamızın gelişimi için çok önemli.Yorumda bulunmayı kabul ettiğiniz için çok teşekkürler.\nYorumunuz(lütfen boşluk kullanmak yerine _ ifadesini kullanınız.Teşekkür ederiz.) : " << endl ;
                        cin >> yorum ;
                    }
                }
                break;

            case 3 :
                cout << "\nKaç tl tutarında borç ödemek istiyorsunuz:      " ; cin >> borcÖdeme ;
                borc -= borcÖdeme ;
                kullanılabilirBakiye += borcÖdeme ; 
                cout << "\nBankamıza olan toplam borcunuz: " << borc << "TL ye düşmüştür. " << endl ;
                cout << "\nToplam kullanılabilir bakiyeniz " << kullanılabilirBakiye << " TL olmuştur. " << endl ; 
                cout << "\nBaşka işlem yapmak için 1' tuslayınız.Uygulamadan çıkmak için 2'yi tuslayınız:   " ; cin >> devam ;
                if(devam == 1){
                    goto bas3 ;
                }
                if(devam == 2){
                    cout << "\nEğer bankamızın uygulamasını değerlendirirseniz çok memnun oluruz :)\nDeğerlenirme yapmak için 1' tuslamanız yeterli.\nEğer değerlendirme yapmıcaksanız 2'yi tuslayınız...   " ; cin >> degerlendirme ;
                    if(degerlendirme == 2){
                        cout << "\nTekrar görüşmek üzere.Kendinize iyi bakın.." << endl ; 
                        exit(0) ;
                    }
                    if(degerlendirme == 1){
                        cout << "\nYapıcak olcağınız değerlendirme bizim ve uygulamamızın gelişimi için çok önemli.Yorumda bulunmayı kabul ettiğiniz için çok teşekkürler.\nYorumunuz(lütfen boşluk kullanmak yerine _ ifadesini kullanınız.Teşekkür ederiz.) : " << endl ;
                        cin >> yorum ;
                    }
                }
                break;

            case 4 :
                cout << "\nEğer bankamızın uygulamasını değerlendirirseniz çok memnun oluruz :)\nDeğerlenirme yapmak için 1' tuslamanız yeterli.\nEğer değerlendirme yapmıcaksanız 2'yi tuslayınız...   " ; cin >> degerlendirme ;
                    if(degerlendirme == 2){
                        cout << "\nTekrar görüşmek üzere.Kendinize iyi bakın.." << endl ;
                        exit(0) ;
                    }
                    if(degerlendirme == 1){
                        cout << "\nYapıcak olcağınız değerlendirme bizim ve uygulamamızın gelişimi için çok önemli.Yorumda bulunmayı kabul ettiğiniz için çok teşekkürler.\nYorumunuz(lütfen boşluk kullanmak yerine _ ifadesini kullanınız.Teşekkür ederiz.) : " << endl ;
                        cin >> yorum ;
                    }
                break;

            default :
                cout << "\nGeçersiz değer girdiniz.Tekrar işlem yapmanız için ana sayfa'ya yönlendiriliyorsunuz.  " << endl ;
                goto bas3 ;
                break;
        }
}
bas5 : cout << "\nUygulamanın geliştiricimisiniz:      " ; cin >> gelistirici ;
if(gelistirici == "evet"){
    cout << "\nUygulama kimliğinizi giriniz:    " ; cin >> kimlik ;
    cout << "Uygulama şifrenizi giriniz:        " ; cin >> uygulamaSifre ;
    if(kimlik == "223301080" && uygulamaSifre == "szdrx122"){
        bas4 : cout << "Yapılan yorumu görmek istiyormusunuz:     " ; cin >> yorumGorme ;
        if(yorumGorme == "evet"){
            cout << yorum << endl ;
        }
        else if(yorumGorme == "hayır"){
            cout << "\nTekrar görüşmek üzere,kendinize iyi bakın... " << endl ;
            exit(0) ;
        }
        else{
            cout << "\nYanlış cevap verdiniz... " << endl ;
            goto bas4 ;
        }
    }
    if(kimlik != "223301080" || uygulamaSifre != "szdrx122"){
        cout << "\nKimlik bilginizi veya uygulama şifrenizi yanlış girdiniz.Size yardımcı olamıyoruz... " << endl ;
        exit(0);
    }
}
else if(gelistirici == "hayır"){
    cout << "\nYorum görme yetkisi sadece yetkili kişilere aittir.\nYetkili değilsiniz... " << endl ; 
    exit(0) ;
}
else{
    cout << "\nYanlış cevap verdiniz...  " << endl ;
    goto bas5 ;
}

return 0;
}
