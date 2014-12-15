#ifndef REMOVE_COMMENTS_H
#define REMOVE_COMMENTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* stradd(const char* a, const char b);

int skipSingleLineComment(int indexToStartFrom, int upToIndex, char* source);

/**
 * Skip multiline comments. 
 * indexToStartFrom - must point to first comment charachter. Example: [comment start]text of comment[comment end], must point to letter 't'.
 * upToIndex - must point to last charackter we check. If comment end was found earlier, letter  upToIndex points to  may not be reached.
 * source - source string.
 * return - if no comment end was found returns indexToStartFrom otherwise return index of last charackter in [commend end] block.
 * */
int skipMultilineComment(int indexToStartFrom, int upToIndex, char* source);

char* removeComments(char* source);

#endif /* REMOVE_COMMENTS_H */
