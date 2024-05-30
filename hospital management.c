#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_HOSPITALS 5
#define NUM_PATIENTS 3

typedef struct {
    char name[50];
    char city[50];
    int beds;
    float price;
    float rating;
    int reviews;
} Hospital;

typedef struct {
    char name[50];
    int age;
} Patient;

void printHospital(Hospital hospital) {
    printf("Hospital Name: %s\n", hospital.name);
    printf("City: %s\n", hospital.city);
    printf("Total Beds: %d\n", hospital.beds);
    printf("Price per Bed: $%.2f\n", hospital.price);
    printf("Rating: %.1f\n", hospital.rating);
    printf("Reviews: %d\n", hospital.reviews);
    printf("\n");
}

void sortByPrice(Hospital hospitals[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (hospitals[j].price > hospitals[j + 1].price) {
                Hospital temp = hospitals[j];
                hospitals[j] = hospitals[j + 1];
                hospitals[j + 1] = temp;
            }
        }
    }
}

void sortByName(Hospital hospitals[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(hospitals[j].name, hospitals[j + 1].name) > 0) {
                Hospital temp = hospitals[j];
                hospitals[j] = hospitals[j + 1];
                hospitals[j + 1] = temp;
            }
        }
    }
}

void sortByRating(Hospital hospitals[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (hospitals[j].rating < hospitals[j + 1].rating) {
                Hospital temp = hospitals[j];
                hospitals[j] = hospitals[j + 1];
                hospitals[j + 1] = temp;
            }
        }
    }
}

void sortByBeds(Hospital hospitals[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (hospitals[j].beds < hospitals[j + 1].beds) {
                Hospital temp = hospitals[j];
                hospitals[j] = hospitals[j + 1];
                hospitals[j + 1] = temp;
            }
        }
    }

