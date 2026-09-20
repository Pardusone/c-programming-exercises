#include <stdio.h>
#include <stdlib.h>

//C++ programlama dilinde, union ve struct iki farklı veri yapısıdır. Her ikisi de veri öğelerini gruplamak ve yapılandırmak için kullanılır, ancak farklı şekillerde çalışırlar. İşte bir union ve bir struct'ın nasıl tanımlandığı ve çalıştığına dair temel bilgiler:
/*
Struct (Yapı):

Struct, birden fazla veri öğesini (değişkenleri) bir araya getirmek için kullanılır.
Struct içindeki tüm veri öğeleri aynı anda kullanılabilir ve her biri ayrı ayrı bellekte saklanır.
Her bir veri öğesi kendi bellek alanına sahiptir ve birbirlerinden bağımsızdır.
Örnek bir struct tanımı:

struct Ogrenci {
    int numara;
    char ad[50];
    double not_ortalama;
};
Union:

Union, struct'a benzer bir şekilde birden fazla veri öğesini bir araya getirir, ancak farklı bir davranış sergiler.
Union içindeki veri öğeleri aynı bellek alanını paylaşır, yani yalnızca bir öğe aynı anda kullanılabilir.
Bellek tasarrufu sağlamak için kullanılır, çünkü union içindeki en büyük veri öğesi kadar bellek ayrılır.
Örnek bir union tanımı:

union Veri {
    int tamsayi;
    double ondalik;
    char karakter;
};
Örnek kullanım:


int main() {
    Ogrenci ogrenci1;
    ogrenci1.numara = 101;
    strcpy(ogrenci1.ad, "Ahmet");
    ogrenci1.not_ortalama = 85.5;

    Veri veri1;
    veri1.tamsayi = 42;
    cout << "Tamsayi deger: " << veri1.tamsayi << endl;

    veri1.ondalik = 3.14;
    cout << "Ondalik deger: " << veri1.ondalik << endl;

    return 0;
}


Yukarıdaki örnekte, struct Ogrenci birden fazla veri öğesini içerir ve her bir öğe ayrı bellek alanında saklanır. Union Veri, farklı veri türlerini paylaşan aynı bellek alanına sahip öğeleri içerir ve sadece bir öğe aynı anda kullanılır. Dolayısıyla, union kullanarak bellek tasarrufu sağlayabilirsiniz, ancak bu, herhangi bir anda yalnızca bir veri öğesini kullanabileceğiniz anlamına gelir.
*/
