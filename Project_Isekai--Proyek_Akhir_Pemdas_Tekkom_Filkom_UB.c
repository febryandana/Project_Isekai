/*
---CREDIT---
Dibuat oleh         : Moch. Febryandana Nurfahri - 185150301111016
Pembaruan terbaru   : Selasa, 27 November 2018, 14.03
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char user[12], pass[6], pil[3];
char check[3]="yes";
char user_default[12]= "febryan";
char pass_default[6]= "123456";
char player_name[12]= "player_name";
char job[6][12]= {"Novice","Archer","Assassin","Priest","Warrior","Wizard"};
int n1, n2, pil_job, pilih, hp, atk, def, str, agi, inte, luk;
int earth_cap, mars_cap, venus_cap, jupiter_cap, bekasi_cap;

void main_menu();
void login();
void daftar_baru();
void edit_data();
void worlds();
void earth();
void mars();
void venus();
void jupiter();
void bekasi();

int main(){
    system("clear || cls");
    printf("*========================================*\n");
    printf("| WELCOME TO PROJECT ISEKAI - LAST WORLD |\n");
    printf("*========================================*\n\n");
    printf("------------------------------------------\n");
    printf("| Made by Moch. Febryandana Nurfahri     |\n");
    printf("| 185150301111016                        |\n");
    printf("| Teknik Komputer B 2018                 |\n");
    printf("------------------------------------------\n");
    printf("EARTH -- MARS -- VENUS -- JUPITER -- BEKASI\n\n");
    printf("===== Start Menu =====\n\n");
    printf("\n1. Login");
    printf("\n2. Register");
    printf("\n3. Exit");
    printf("\nSelect: ");
    scanf("%d", &pilih);
    switch(pilih){
    case 1 :
        login();
        break;
    case 2 :
        daftar_baru();
        break;
    case 3 :
        return 0;
        break;
    default :
        main();
        break;
    }
}

void login(){
    system("clear || cls");
    printf("===== LOGIN =====\n\n");
    printf("\nUsername\t: ");
    scanf("%s", user);
    printf("Password\t: ");
    scanf("%s", pass);
    n1 = strcmp(user, user_default);
    n2 = strcmp(pass, pass_default);
    if((n1 || n2)==0){
        main_menu();
    }
    else{
        printf("\nTry Again (1)\n");
        printf("\nUsername\t: ");
        scanf("%s", user);
        printf("Password\t: ");
        scanf("%s", pass);
        n1 = strcmp(user, user_default);
        n2 = strcmp(pass, pass_default);
        if((n1 || n2)==0){
            system("clear||cls");
            main_menu();
        }
        else{
            printf("\nTry Again (2)\n");
            printf("\nUsername\t: ");
            scanf("%s", user);
            printf("Password\t: ");
            scanf("%s", pass);
            n1 = strcmp(user, user_default);
            n2 = strcmp(pass, pass_default);
            if((n1 || n2)==0){
                system("clear||cls");
                main_menu();
            }
            else{
                printf("\nTry Again (3)\n");
                printf("\nUsername\t: ");
                scanf("%s", user);
                printf("Password\t: ");
                scanf("%s", pass);
                n1 = strcmp(user, user_default);
                n2 = strcmp(pass, pass_default);
                if((n1 || n2)==0){
                    system("clear||cls");
                    main_menu();
                }
                else{
                    printf("\nYou entered the wrong username or password 3 times, please register first\n\n");
                    printf("Register? (yes/no): ");
                    scanf("%s", pil);
                    strcmp(pil,check) ? login() : daftar_baru();
                }
            }
        }
    }
}

void daftar_baru(){
    char pass_confirm[6];
    system("clear||cls");
    printf("\n===== Register =====\n\n");
    printf("\nNew Username (max 12 char)\t: ");
    scanf("%s", user_default);
    printf("New Password (max 6 char)\t: ");
    scanf("%s", pass_default);
    printf("\nConfirm new password\t: ");
    scanf("%s", pass_confirm);
    if(strcmp(pass_default,pass_confirm)==0){
        printf("\nThe password confirmation match, go to Login page? (yes/no): ");
        scanf("%s", pil);
        strcmp(pil, check) ? daftar_baru() : login();
    }
    else{
        printf("\nThe password confirmation doesn't match, try again? (yes/no): ");
        scanf("%s", pil);
        strcmp(pil, check) ? main() : daftar_baru();
    }
}

void main_menu(){
    hp = rand() % 100;
    atk = rand() % 100;
    def = rand() % 100;
    str = rand() % 100;
    agi = rand() % 100;
    inte = rand() % 100;
    luk = rand() % 100;
    system("clear||cls");
mainmenu:
    printf("\n=== MAIN MENU ===\n");
    printf("\n1. Player Status");
    printf("\n2. Worlds");
    printf("\n3. Exit");
    printf("\nSelect: ");
    scanf("%d", &pilih);
    switch(pilih){
    case 1 :
        do{
            system("clear||cls");
            printf("\n--- Player Status ---\n");
            printf("\nUsername\t: %s", user_default);
            printf("\nPlayer Name\t: %s", player_name);
            printf("\nClass\t: %s", job[pil_job]);
            printf("\n HP  = %d", hp);
            printf("\n ATK = %d", atk);
            printf("\n DEF = %d", def);
            printf("\n STR = %d", str);
            printf("\n AGI = %d", agi);
            printf("\n INT = %d", inte);
            printf("\n LUK = %d\n\n", luk);
            printf("\n1. Edit");
            printf("\n2. Back");
            printf("\nSelect: ");
            scanf("%d", &pilih);
            switch(pilih){
            case 1 :
                edit_data();
                break;
            case 2 :
                system("clear||cls");
                goto mainmenu;
                break;
            default :
                pilih=3;
            }
        }
        while(pilih>2);
        break;
    case 2 :
        worlds();
        break;
    case 3 :
        main();
        break;
    default :
        main_menu();
    }
}

void worlds(){
    earth_cap = rand() % 200;
    mars_cap = rand() % 200;
    venus_cap = rand() % 200;
    jupiter_cap = rand() % 200;
    bekasi_cap = rand() % 200;
do{
    printf("\n--- Worlds ---");
    printf("\n1. Earth (%d/100)", earth_cap);
    printf("\n2. Mars (%d/100)", mars_cap);
    printf("\n3. Venus (%d/100)", venus_cap);
    printf("\n4. Jupiter (%d/100)", jupiter_cap);
    printf("\n5. Bekasi (%d/100)", bekasi_cap);
    printf("\n6. Back");
    printf("\nSelect: ");
    scanf("%d", &pilih);
    switch(pilih){
    case 1 :
        if(earth_cap>=100){
            system("clear||cls");
            printf("*** Sorry, Earth is crowded, choose another world ***");
            pilih=7;
        }
        else{
            earth();
        }
        break;
    case 2 :
        if(mars_cap>=100){
            system("clear||cls");
            printf("*** Sorry, Mars is crowded, choose another world ***");
            pilih=7;
        }
        else{
            mars();
        }
        break;
    case 3 :
        if(venus_cap>=100){
            system("clear||cls");
            printf("*** Sorry, Venus is crowded, choose another world ***");
            pilih=7;
        }
        else{
            venus();
        }
        break;
    case 4 :
        if(jupiter_cap>=100){
            system("clear||cls");
            printf("*** Sorry, Jupiter is crowded, choose another world ***");
            pilih=7;
        }
        else{
            jupiter();
        }
        break;
    case 5 :
        if(bekasi_cap>=100){
            system("clear||cls");
            printf("*** Sorry, Bekasi is crowded, choose another world ***");
            pilih=7;
        }
        else{
            bekasi();
        }
        break;
    case 6 :
        main_menu();
        break;
    default :
        system("clear||cls");
        pilih=7;
    }
}
while(pilih>6);
}

void edit_data(){
    system("clear||cls");
    printf("New Player Name\t: ");
    scanf("%s", player_name);
    printf("New Class :");
    printf("\n\t0. Novice");
    printf("\n\t1. Archer");
    printf("\n\t2. Assassin");
    printf("\n\t3. Priest");
    printf("\n\t4. Warrior");
    printf("\n\t5. Wizard");
    printf("\n\tSelect your new class: ");
    scanf("%d", &pil_job);
    printf("\n\n** Changes saved");
    printf("\nBack to menu? (yes/no):");
    scanf("%s", pil);
    strcmp(pil, check) ? edit_data() : main_menu();
}

void earth(){
do{
    system("clear||cls");
    printf("===== Welcome to Earth =====\n\n");
    printf("This is a suitable place for you who want true peace");
    printf("\n\nUsername\t: %s", user_default);
    printf("\nPlayer Name\t: %s", player_name);
    printf("\nClass\t: %s", job[pil_job]);
    printf("\n HP  = %d", hp);
    printf("\n ATK = %d", atk);
    printf("\n DEF = %d", def);
    printf("\n STR = %d", str);
    printf("\n AGI = %d", agi);
    printf("\n INT = %d", inte);
    printf("\n LUK = %d\n\n", luk);
    printf("\n1. Back to Worlds");
    printf("\n2. Back to Menu");
    printf("\n3. Quit Game");
    printf("\nSelect : ");
    scanf("%d", &pilih);
    switch(pilih){
    case 1 :
        system("clear||cls");
        worlds();
        break;
    case 2 :
        main_menu();
        break;
    case 3 :
        main();
        break;
    default :
        pilih=4;
    }
}
while(pilih>3);
}

void mars(){
do{
    system("clear||cls");
    printf("===== Welcome to Mars =====\n\n");
    printf("This is a suitable place for you who believe knowledge and science above all");
    printf("\n\nUsername\t: %s", user_default);
    printf("\nPlayer Name\t: %s", player_name);
    printf("\nClass\t: %s", job[pil_job]);
    printf("\n HP  = %d", hp);
    printf("\n ATK = %d", atk);
    printf("\n DEF = %d", def);
    printf("\n STR = %d", str);
    printf("\n AGI = %d", agi);
    printf("\n INT = %d", inte);
    printf("\n LUK = %d\n\n", luk);
    printf("\n1. Back to Worlds");
    printf("\n2. Back to Menu");
    printf("\n3. Quit Game");
    printf("\nSelect : ");
    scanf("%d", &pilih);
    switch(pilih){
    case 1 :
        system("clear||cls");
        worlds();
        break;
    case 2 :
        main_menu();
        break;
    case 3 :
        main();
        break;
    default :
        pilih=4;
    }
}
while(pilih>3);
}

void venus(){
do{
    system("clear||cls");
    printf("===== Welcome to Venus =====\n\n");
    printf("This is a suitable place for you who believe in love and nature");
    printf("\n\nUsername\t: %s", user_default);
    printf("\nPlayer Name\t: %s", player_name);
    printf("\nClass\t: %s", job[pil_job]);
    printf("\n HP  = %d", hp);
    printf("\n ATK = %d", atk);
    printf("\n DEF = %d", def);
    printf("\n STR = %d", str);
    printf("\n AGI = %d", agi);
    printf("\n INT = %d", inte);
    printf("\n LUK = %d\n\n", luk);
    printf("\n1. Back to Worlds");
    printf("\n2. Back to Menu");
    printf("\n3. Quit Game");
    printf("\nSelect : ");
    scanf("%d", &pilih);
    switch(pilih){
    case 1 :
        system("clear||cls");
        worlds();
        break;
    case 2 :
        main_menu();
        break;
    case 3 :
        main();
        break;
    default :
        pilih=4;
    }
}
while(pilih>3);
}

void jupiter(){
do{
    system("clear||cls");
    printf("===== Welcome to Jupiter =====\n\n");
    printf("This is a suitable place for you who believe strength and power more than anything");
    printf("\n\nUsername\t: %s", user_default);
    printf("\nPlayer Name\t: %s", player_name);
    printf("\nClass\t: %s", job[pil_job]);
    printf("\n HP  = %d", hp);
    printf("\n ATK = %d", atk);
    printf("\n DEF = %d", def);
    printf("\n STR = %d", str);
    printf("\n AGI = %d", agi);
    printf("\n INT = %d", inte);
    printf("\n LUK = %d\n\n", luk);
    printf("\n1. Back to Worlds");
    printf("\n2. Back to Menu");
    printf("\n3. Quit Game");
    printf("\nSelect : ");
    scanf("%d", &pilih);
    switch(pilih){
    case 1 :
        system("clear||cls");
        worlds();
        break;
    case 2 :
        main_menu();
        break;
    case 3 :
        main();
        break;
    default :
        pilih=4;
    }
}
while(pilih>3);
}

void bekasi(){
do{
    system("clear||cls");
    printf("===== Welcome to Bekasi =====\n\n");
    printf("Mysterious planet for you who seek the truth");
    printf("\n\nUsername\t: %s", user_default);
    printf("\nPlayer Name\t: %s", player_name);
    printf("\nClass\t: %s", job[pil_job]);
    printf("\n HP  = %d", hp);
    printf("\n ATK = %d", atk);
    printf("\n DEF = %d", def);
    printf("\n STR = %d", str);
    printf("\n AGI = %d", agi);
    printf("\n INT = %d", inte);
    printf("\n LUK = %d\n\n", luk);
    printf("\n1. Back to Worlds");
    printf("\n2. Back to Menu");
    printf("\n3. Quit Game");
    printf("\nSelect : ");
    scanf("%d", &pilih);
    switch(pilih){
    case 1 :
        system("clear||cls");
        worlds();
        break;
    case 2 :
        main_menu();
        break;
    case 3 :
        main();
        break;
    default :
        pilih=4;
    }
}
while(pilih>3);
}
