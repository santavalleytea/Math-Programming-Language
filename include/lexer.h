#ifndef LEXER_H
#define LEXER_H

typedef enum {
    TOKEN_NUMBER,
    TOKEN_IDENTIFIER, // "x"
    TOKEN_PLUS,
    TOKEN_MINUS,
    TOKEN_MULT,
    TOKEN_DIV,
    TOKEN_POW,
    TOKEN_LPAREN, // "("
    TOKEN_RPAREN, // ")"
    TOKEN_ASSIGN, // "="
    TOKEN_EOF,
    TOKEN_UNKNOWN,
} TokenType;

typedef struct {
    TokenType type;
    char* lexeme;
} Token;

Token* tokenize(const char* input, int* token_count);
void free_tokens(Token* tokens, int count);

#endif