#include <stdio.h>
#include <string.h>

void insertionChar (char strings[][100], int n) { 
  for (int i = 0; i < n; i++) {
    char currentElement[100];
    strcpy(currentElement, strings[i]);
    int j = i - 1;

    while (j >= 0 && strcmp(strings[j], currentElement) > 0) {
      strcpy (strings[j+1], strings[j]);
      j--;
    }
    strcpy(strings[j+1], currentElement);
  }
}

int main () {
  int numbers[] = {21, 10, 4, 2, 5, 8, 1};
  
  for (int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++) {
    int currentElement = numbers[i];
    int j = i -1;

    while (j >= 0 && numbers[j] > currentElement) {
      numbers[j + 1] = numbers[j];
      j--;
    }
    numbers[j+1] = currentElement;
  }

  for (int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++) {
    printf("%d, ", numbers[i]);
  }

  // atau
  int arr[] = {21, 10, 4, 2, 5, 8, 1};
  
  for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
      for (int j = i; j > 0; j--) {
          if (arr[j] < arr[j - 1]) {
                // Tukar elemen jika perlu
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
          } 
          else {
            break;
          }
      }
  }
  printf("\n");

  for (int i = 0; i < sizeof(numbers)/sizeof(arr[0]); i++) {
    printf("%d, ", arr[i]);
  }

  // For string
  char strings[][100] = {"Rem", "Haju", "Lain", "Arisu", "Kurumi", "Aruna"};
  int n = sizeof(strings)/sizeof(strings[0]);

  printf("\n\nBefore: ");
  for (int i = 0; i < sizeof(strings)/sizeof(strings[0]); i++){
      printf("%s, ",strings[i]);
  }

  insertionChar(strings, n);
    
  printf("\nAfter: ");
  for (int i = 0; i < sizeof(strings)/sizeof(strings[0]); i++){
    printf("%s, ",strings[i]);
  }

  return 0;
}
