#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define BSIZE 128
#define NONE -1
#define EOS '\0'

#define NUM 256
#define DIV 257
#define MOD 258
#define ID 259
#define DONE 260

#ifndef SIMPLECOMPILER_GLOBAL_H
#define SIMPLECOMPILER_GLOBAL_H

extern int tokenval;

extern int lineno;

struct entry {
    char *lexptr;
    int token;
};

extern struct entry symtable[];

#endif

void match(int t);

void expr();

void error(char *m);

void emit(int t, int tval);

int lookup(char s[]);

int insert(char s[], int tok);

void init();

void parse();

int lexan();

