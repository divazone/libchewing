/* @(#)hanyupinying.h
 */

#ifndef _HANYUPINYING_H
#define _HANYUPINYING_H 1

/*
  This is a key-sequense map.
  From pinyin sequence to a default-layout sequence.
  Eg: Zhang -> {"zh","5"}, {"ang",";"}
 */
typedef struct {
    char pinying[5];
    char zuin[4];
} PinYingZuinMap;

#endif /* _HANYUPINYING_H */

