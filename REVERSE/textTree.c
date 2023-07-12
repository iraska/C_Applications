#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX_WORD_LENGTH 100

struct Node 
{
    struct Node* children[26];
    bool isEndOfWord;
};

struct Node* createNode() 
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->isEndOfWord = false;

    for (int i = 0; i < 26; i++) 
    {
        node->children[i] = NULL;
    }
    return node;
}

void insertWord(struct Node* root, const char* word) 
{
    struct Node* currentNode = root;
    int length = strlen(word);

    for (int i = 0; i < length; i++) 
    {
        int index = word[i] - 'a';
        if (currentNode->children[index] == NULL) 
        {
            currentNode->children[index] = createNode();
        }
        currentNode = currentNode->children[index];
    }

    currentNode->isEndOfWord = true;
}

void traverseTrie(struct Node* node, char* prefix) 
{
    if (node->isEndOfWord) {
        printf("%s\n", prefix);
    }

    for (int i = 0; i < 26; i++) 
    {
        if (node->children[i] != NULL) 
        {
            char newPrefix[MAX_WORD_LENGTH];
            strcpy(newPrefix, prefix);
            int length = strlen(newPrefix);
            newPrefix[length] = 'a' + i;
            newPrefix[length + 1] = '\0';
            traverseTrie(node->children[i], newPrefix);
        }
    }
}

void findWordsStartingWith(struct Node* root, const char* prefix) 
{
    struct Node* currentNode = root;
    int length = strlen(prefix);

    for (int i = 0; i < length; i++) 
    {
        int index = prefix[i] - 'a';
        if (currentNode->children[index] == NULL) 
        {
            printf("No words found starting with '%s'\n", prefix);
            return;
        }
        currentNode = currentNode->children[index];
    }

    printf("Words starting with '%s':\n", prefix);
    traverseTrie(currentNode, prefix);
}

void freeTrie(struct Node* node) 
{
    if (node == NULL) 
    {
        return;
    }

    for (int i = 0; i < 26; i++) 
    {
        freeTrie(node->children[i]);
    }

    free(node);
}

int main() 
{
    struct Node* root = createNode();

    insertWord(root, "apple");
    insertWord(root, "application");
    insertWord(root, "banana");
    insertWord(root, "art");
    insertWord(root, "ball");
    insertWord(root, "cat");

    findWordsStartingWith(root, "app");

    freeTrie(root);

    return 0;
}
