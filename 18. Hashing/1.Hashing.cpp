//support insertion,deletion,search in average O(1) time
//not for maintaining order
//a hashtable is an array of fixed size.
//array elements are indexed by a key,which is mapped to an index
//(0 to table size -1)
//mapping (hash function)
//hash table insert = T[h(key])=value
//search T[H(Key)] ,delete T[h(key)]=NULL
//COLLISON=CANT BE AVOIDED but chances can  be reduced
//good hash function  below
//distribute keys uniformly over the table
//should be fast to compute