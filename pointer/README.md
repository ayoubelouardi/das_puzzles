# Pointer Manipulation 

This is for applaying chapter in "Mastering Algorithms with C".

### comback to this so you can understand it better

```
One example of a consistent approach to storage management is the one used for
data structures presented in this book. The philosophy followed in every case is
that it is the responsibility of the user to manage the storage associated with the
actual data that the data structure organizes; the data structure itself allocates stor-
age only for internal structures used to keep the data organized. Consequently,
only pointers are maintained to the data inserted into the data structure, rather
than private copies of the data. One important implication of this is that a data
structure’s implementation does not depend on the type and size of the data it
stores. Also, multiple data structures are able to operate on a single copy of data,
which can be useful when organizing large amounts of data.
```

### comback to this section "Generic Pointers and Casts"
