//important ds for pattern matching
//sample problem-given a list of strings and q queries,each query containing a word, you have to tell whether the word,
//containined in the list or not

//prfix trie
//SAMPLE INPUT
//words[]={"apple","appe","mango","news","no"}

//queries[]={"apple","banana","new","mango","no"} //search

//sample output
//YES,NO,NO,YES

//WE CAN SOLVE ABOVE BY BRUTE FORCE,BST,HASHING,UNORDERED SET
//BUT WITH TRIE ITS o(n) TIME EFFICIENT

//OPTIMAL

//TRIE PERFORMACE DOES NOT DEGRADES  THAT EASILY

//PREFIX TRIE
//GENRIC tree like ds
//efficient information retrival data structure
//searches in optimal time O(key length) but uses extra storage

//important operation
//insert a new word
//search for a given word

//deletion is rare case