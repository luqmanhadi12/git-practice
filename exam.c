#include <stdio.h>
#include <string.h>

// Definisi STRUCTURE untuk menyimpan maklumat pengguna
struct Person {
    char name[50];
    char ic[20];
    float weight;
    float height;
    float bmi;
};

int main() {
    struct Person u;
    int bmiCategory;

    printf("\n\nWELCOME TO BMI CALCULATE SYSTEMS\n");
    printf("    ~~SAVE LIFE ENTERPRISE~~\n");
    printf("------------------------------------\n");

    // Input data menggunakan structure
    printf("PLEASE INSERT :\n");
    printf("NAME            : ");
    fgets(u.name, sizeof(u.name), stdin);
    u.name[strcspn(u.name, "\n")] = 0; // Buang newline

    printf("NO IC           : ");
    scanf("%s", u.ic);

    printf("WEIGHT (in kg)  : ");
    scanf("%f", &u.weight);

    printf("HEIGHT (in meter): ");
    scanf("%f", &u.height);

    // Formula BMI: WEIGHT / (HEIGHT * HEIGHT)
    u.bmi = u.weight / (u.height * u.height);

    printf("\n------------------------------------\n");
    printf("YOUR BMI IS: %.2f\n", u.bmi);

    // Logik untuk menggunakan SWITCH CASE
    // Kita tukarkan julat BMI kepada kategori integer
    if (u.bmi < 18.5) {
        bmiCategory = 1;
    } else if (u.bmi >= 18.5 && u.bmi <= 24.9) {
        bmiCategory = 2;
    } else if (u.bmi >= 25.0 && u.bmi <= 29.9) {
        bmiCategory = 3;
    } else if (u.bmi >= 30.0 && u.bmi <= 39.9) {
        bmiCategory = 4;
    } else {
        bmiCategory = 5;
    }

    switch (bmiCategory) {
        case 1:
            printf("RESULT: UNDER WEIGHT\n");
            break;
        case 2:
            printf("RESULT: NORMAL\n");
            break;
        case 3:
            printf("RESULT: HEAVY WEIGHT\n");
            break;
        case 4:
            printf("RESULT: OBESITY I\n");
            break;
        case 5:
            printf("RESULT: OBESITY II\n");
            break;
        default:
            printf("RESULT: INVALID\n");
    }

    printf("------------------------------------\n");
    printf("BETTER HEALTH is BETTER LIFE\n");
    printf("STAY HEALTHY\n");

    return 0;
}