#ifndef STORAGE_FILESTREAM_H
#define STORAGE_FILESTREAM_H

#include <stddef.h>
#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

struct stream;
void fstream_init(struct stream * strm, FILE * F);
void fstream_done(struct stream * strm);
#ifdef __cplusplus
}
#endif
   
#endif
