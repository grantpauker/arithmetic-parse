#include "token.hpp"
#include "number_token.hpp"
Token *Token::GetToken(char c){
    return new NumberToken(c-'0');
}