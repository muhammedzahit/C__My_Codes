// HASH TABLE ALGORİTMASI
#include <stdio.h>
#define MOD 3

struct veri{
    int data;
    int key;
};

typedef struct veri v;

v array[MOD] ;

int hash(int key){
    return key%MOD;
}

void put(v data){
    if (array[hash(data.key)].key == -1){
        array[hash(data.key)].data = data.data;
        array[hash(data.key)].key = data.key;
        return;
    }
    else {
        int donus_sayisi = 0;
        int temp = hash(data.key);
        while (array[temp].key != -1){
            temp++;
            if (temp >= MOD){
                if (donus_sayisi >= 1){
                    printf("Liste dolu!\n");
                    return;
                }
                temp = 0;
                donus_sayisi++;
            }
        }
        array[temp].key = data.key;
        array[temp].data = data.data;
    }

}

void ekle(int value,int key){
    v data;
    data.data = value;
    data.key = key;
    put(data);
}

int get(int key){
    if (array[hash(key)].data == -1){
        printf("Deger bulunamadi. ");
        return -999;
    }
    int temp = hash(key);
    int donme_sayisi = 0;
    while (array[temp].key != key){
        temp++;
        if (temp > MOD){
            if (donme_sayisi == 1){
                printf("Girdiginiz key bir degeri ifade etmemektedir ");
                return -999;
            }
            temp = 0;
            donme_sayisi++;
        }
    }
    return array[temp].data;
}

void printList(){
    int i;
    printf("\nLIST =>");
    for (i=0; i<MOD ; i++){
        printf("%d %d | ",array[i].data,array[i].key);
    }
    printf("\n");
}

int main(){
    int i;
    for (i=0; i<MOD ; i++){
        array[i].key = -1;
        array[i].data = -1;
    }
    ekle(1,1789);
    ekle(2,2023);
    ekle(3,1453);
    printList();
    ekle(5,1);
    printf("%d",get(2023));
}