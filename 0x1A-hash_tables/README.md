# 0x1A. C - Hash tables
### Hash Tables - Key Concepts and Best Practices

This document serves as a reference for understanding hash tables, hash functions, and their use cases. Below is an explanation of key concepts such as hash functions, collisions, and the advantages and drawbacks of using hash tables.

## What is a Hash Function?

A **hash function** is a function that takes an input (or "key") and returns a fixed-size string of bytes, usually a number, which is typically a hash code. The main purpose of a hash function is to map the input data to a value in a way that is both deterministic (the same input always yields the same output) and efficient (quick to compute).

A good hash function should:

- Be fast to compute.
- Minimize the number of collisions (when two keys produce the same hash).
- Distribute keys uniformly across the hash table.

### Example:
For a string key `"apple"`, a hash function might return a value like `12345`, which could represent the index where the key-value pair is stored in the hash table.

## What Makes a Good Hash Function?

A **good hash function** should satisfy the following criteria:

1. **Deterministic**: The hash function must always return the same output for the same input.
2. **Efficient**: The function should be computationally efficient and run in constant time (O(1)).
3. **Uniform Distribution**: The function should distribute hash values evenly across the hash table to reduce collisions.
4. **Minimize Collisions**: The hash function should ideally generate unique values for different inputs, although some collisions are inevitable.
5. **Avoid Patterns**: The function should avoid producing predictable hash values based on the input, ensuring randomness in the distribution.

## What is a Hash Table, How Do They Work, and How to Use Them?

### What is a Hash Table?

A **hash table** is a data structure that stores key-value pairs and allows for fast lookup, insertion, and deletion operations. It uses a hash function to compute an index in an array (called the hash table) where the key-value pair is stored.

### How Do Hash Tables Work?

1. **Hashing**: The key is passed through a hash function, which returns a hash value (an index in the array).
2. **Indexing**: The hash value is used as the index to place the key-value pair in the array.
3. **Handling Collisions**: If two keys map to the same index (collision), a method of collision resolution is used (e.g., chaining or open addressing).

### How to Use a Hash Table

- **Insert**: To add a key-value pair, use the hash function to compute the index, then store the pair at that index.
- **Retrieve**: To retrieve a value, use the hash function to find the index of the key and access the value.
- **Delete**: To remove a key-value pair, use the hash function to locate the key and delete the pair from the array.

### Example Code:
```c
#include "hash_tables.h"

int main(void)
{
    hash_table_t *ht = hash_table_create(1024);
    
    hash_table_set(ht, "key1", "value1");
    printf("Value for 'key1': %s\n", hash_table_get(ht, "key1"));
    
    hash_table_delete(ht);
    return 0;
}