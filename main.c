#include <stdio.h>
#include <stdlib.h>

int main(){
    int st_awal, st_akhir, i, a;
    float jarak, var = 0;
    float st_1 = 0;
    float st_2 = 1.236;
    float st_3 = 1.829;
    float st_4 = 0.973;
    float st_5 = 1.567;
    float st_6 = 1.436;
    float st_7 = 1.901;
    float st_8 = 1.444;
    float st_9 = 4.102;
    float st_10 = 1.230;
    float st_11 = 3.632;
    float st_12 = 2.029;
    float st_13 = 0.811;
    float st_14 = 3.186;
    float st_15 = 2.610;
    float st_16 = 1.301;
    float st_17 = 1.475;
    float st_18 = 1.509;
    float st_19 = 1.695;
    float st_20 = 3.031;
    float st_21 = 2.460;
    float st_22 = 1.029;
    float st_23 = 2.264;
    float st_24 = 1.109;
    float st_25 = 2.570;
    float st_26 = 1.741;
    float st_27 = 5.084;
    float st_28 = 5.197;
    float st_29 = 4.331;
    float st_30 = 7.518;
    printf("Selamat Datang, Berikut daftar stasiun rute JATINEGARA - BOGOR\n");
    printf("1. Stasiun Jatinegara\n2. Stasiun Pondok Jati\n3. Stasiun Kramat\n4. Stasiun Gang Sentiong\n");
    printf("5. Stasiun Pasar Senen\n6. Stasiun Kemayoran\n7. Stasiun Rajawali\n8. Stasiun Kampung Bandan\n");
    printf("9. Stasiun Angke\n10. Stasiun Duri\n11. Stasiun Tanah Abang\n12. Stasiun Karet\n13. Stasiun Sudirman\n");
    printf("14. Stasiun Manggarai\n15. Stasiun Tebet\n16. Stasiun Cawang\n17. Stasiun Duren Kalibata\n");
    printf("18. Stasiun Pasar Minggu Baru\n19. Stasiun Pasar Minggu\n20. Stasiun Tanjung Barat\n21. Stasiun Lenteng Agung\n");
    printf("22. Stasiun Univ. Pancasila\n23. Stasiun Univ. Indonesia\n24. Stasiun Pondok Cina\n25. Stasiun Depok Baru\n");
    printf("26. Stasiun Depok\n27. Stasiun Citayam\n28. Stasiun Bojong Gede\n29. Stasiun Cilebut\n30. Stasiun Bogor\n");
    printf("Masukkan Stasiun Keberangkatan : ");
    scanf("%d", &st_awal);
    if(st_awal >= 1 && st_awal <= 30){
        printf("Masukkan Stasiun Kedatangan : ");
        scanf("%d", &st_akhir);
        if(st_akhir >= 1 && st_akhir <= 30){
            if(st_akhir > st_awal){
                for(i=st_awal;i<st_akhir;i++){
                    a = i + 1;
                    
                }
            }else{
                printf("Stasiun Kedatangan Tidak Benar !\n");
                printf("===================================================================\n");
                main();
            }
        }else{
            printf("Stasiun yang anda inputkan tidak terdaftar\n");
            printf("===================================================================\n");
            main();
        }
    }else{
        printf("Stasiun yang anda inputkan tidak terdaftar\n");
        printf("===================================================================\n");
        main();
    }
    return 0;
}
