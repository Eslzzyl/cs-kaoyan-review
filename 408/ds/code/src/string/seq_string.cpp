#include "seq_string.h"

#include <algorithm>
#include <cstddef>
#include <cstring>

void InitString_seq(SeqString &S)
{
    S.length = 0;
}

void StrAssign_seq(SeqString &S, const char *chars)
{
    size_t i = 0;
    while (chars[i] != '\0' && S.length != MaxSize) {
        S.ch[i] = chars[i];
        ++S.length;
    }
}

void StrCopy_seq(SeqString &S, const SeqString &T)
{
    S.length = T.length;
    std::copy(T.ch, T.ch + T.length, S.ch);
}

bool StrEmpty_seq(SeqString &S)
{
    return S.length == 0;
}

int StrCompare_seq(SeqString &S, const SeqString &T)
{

}

unsigned StrLength_seq(SeqString &S)
{
    return S.length;
}

bool SubString_seq(SeqString &Sub, const SeqString &S, unsigned pos, unsigned len)
{
    if (pos + len > S.length) {
        return false;
    }
    Sub.length = len;
    std::copy(S.ch + pos, S.ch + pos + len, Sub.ch);
    return true;
}

bool Concat_seq(SeqString &T, const SeqString &S1, const SeqString &S2)
{
    if (S1.length + S2.length > MaxSize) {
        return false;
    }
    T.length = S1.length + S2.length;
    std::copy(S1.ch, S1.ch + S1.length, T.ch);
    std::copy(S2.ch, S2.ch + S2.length, T.ch + S1.length);
    return true;
}

unsigned Index_seq_violent(SeqString &S, const SeqString &T)
{

}

unsigned Index_seq_kmp(SeqString &S, const SeqString &T)
{

}

void ClearString_seq(SeqString &S)
{
    S.length = 0;
}

void DestroyString_seq(SeqString &S)
{
    S.length = 0;
}