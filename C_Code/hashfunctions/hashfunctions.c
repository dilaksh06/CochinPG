#include <stdio.h>

#define TABLE_SIZE 11 // Prime number for better distribution

// Division-based hash function using a prime number table size
int hash(int key) {
    return key % TABLE_SIZE;
}

// Insert key-value pairs into the hash table
void insert(int hashTable[], int key, int value) {
    int index = hash(key); // Get hash index for key
    hashTable[index] = value; // Store value at hash index
}

// Display hash table contents
void display(int hashTable[]) {
    for (int i = 0; i < TABLE_SIZE; i++) {
        printf("Index %d: %d\n", i, hashTable[i]);
    }
}

int main() {
    int hashTable[TABLE_SIZE] = {0}; // Initialize hash table with 0s

    // Insert key-value pairs
    insert(hashTable, 12, 100); // hash(12) = 12 % 11 = 1
    insert(hashTable, 22, 200); // hash(22) = 22 % 11 = 0
    insert(hashTable, 35, 300); // hash(35) = 35 % 11 = 2

    printf("Hash Table:\n");
    display(hashTable);

    return 0;
}
