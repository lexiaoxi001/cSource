/*
 * trie.c
 *
 * reference:moloch
 *
 */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

typedef struct _trie_node_t{
	void *data;
	struct _trie_node_t **children;
	char  value, first, last;
}TrieNode_t;

typedef struct _ycc_Trie_node_t{
	int size;
	TrieNode_t root;
}ycc_trie_t;

void trie_init(ycc_trie_t *trie)
{
	bzero(trie,sizeof(*trie));

	trie->root.data = 0;
	trie->root.first = 0;
	trie->root.last = 255;
	trie->root.children = malloc(sizeof(TrieNode_t*)*256);
	bzero(trie->root.children,sizeof(TrieNode_t*)*256);
}






