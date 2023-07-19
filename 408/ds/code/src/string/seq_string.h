#ifndef SEQ_STRING_H
#define SEQ_STRING_H

const static unsigned MaxSize = 100;

struct SeqString {
    char ch[MaxSize];
    unsigned length;
};

void InitString_seq(SeqString &S);

void StrAssign_seq(SeqString &S, const char *chars);

void StrCopy_seq(SeqString &S, const SeqString &T);

bool StrEmpty_seq(SeqString &S);

int StrCompare_seq(SeqString &S, const SeqString &T);

unsigned StrLength_seq(SeqString &S);

bool SubString_seq(SeqString &Sub, const SeqString &S, unsigned pos, unsigned len);

bool Concat_seq(SeqString &T, const SeqString &S1, const SeqString &S2);

unsigned Index_seq_violent(SeqString &S, const SeqString &T);

unsigned Index_seq_kmp(SeqString &S, const SeqString &T);

void ClearString_seq(SeqString &S);

void DestroyString_seq(SeqString &S);

#endif