#include <stdio.h>
#include <string.h>

#define SIZE 100
#define WORD_LEN 20

int word_cnt = 0;
char word[SIZE][WORD_LEN];
int word_freq[SIZE];

// Function to add or update word frequency
void add_word(char *str) {
    for (int i = 0; i < word_cnt; i++) {
        if (strcmp(word[i], str) == 0) {
            word_freq[i]++;
            return;
        }
    }
    strcpy(word[word_cnt], str);
    word_freq[word_cnt] = 1;
    word_cnt++;
}

// Function to sort words by frequency and lexicographically if frequencies are equal
void sort_words() {
    for (int i = 0; i < word_cnt - 1; i++) {
        for (int j = 0; j < word_cnt - 1 - i; j++) {
            if (word_freq[j] < word_freq[j + 1]) {
                int temp_freq = word_freq[j];
                word_freq[j] = word_freq[j + 1];
                word_freq[j + 1] = temp_freq;
                
                char temp_word[WORD_LEN];
                strcpy(temp_word, word[j]);
                strcpy(word[j], word[j + 1]);
                strcpy(word[j + 1], temp_word);
            } else if (word_freq[j] == word_freq[j + 1] && strcmp(word[j], word[j + 1]) > 0) {
                char temp_word[WORD_LEN];
                strcpy(temp_word, word[j]);
                strcpy(word[j], word[j + 1]);
                strcpy(word[j + 1], temp_word);
            }
        }
    }
}

// Main function to solve the problem
void solve(int n, char str[][WORD_LEN]) {
    for (int i = 0; i < n; i++) {
        add_word(str[i]);
    }
    sort_words();
}

int main() {
    int n;
    scanf("%d", &n);
    char str[SIZE][WORD_LEN];
    
    for (int i = 0; i < n; i++) {
        scanf("%s", str[i]);
    }

    solve(n, str);

    for (int i = 0; i < word_cnt; i++) {
        printf("%d %s\n", word_freq[i], word[i]);
    }

    return 0;
}
