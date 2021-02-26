#include "compatible.h"

__p_sig_fn_t signal(int _SigNum, __p_sig_fn_t _Func) {
    return;
}

char *getenv(char *name) {
    return 0;
}

// TODO
FILE *fopen(const char *path, const char *mode) {
    return 0;
}
int fclose(FILE *fp) {
    return 0;
}
int fseek(FILE *fp, long int offset, int origin) {
    return 0;
}
size_t fread(void *buf, size_t m, size_t n, FILE *fp) {
    return 0;
}
size_t fwrite(const void *buf, size_t m, size_t n, FILE *fp) {
    return 0;
}
long ftell(FILE *fp) {
    return 0;
}
int fflush(FILE *fp) {
    return 0;
}
FILE *tmpfile() {
    return 0;
}
int read() {
    return 0;
}
int setvbuf(FILE *fp, char *c, int m, size_t n) {
    return 0;
}
int exit() {
    return 0;
}
int printf(const char *fmt, ...) {
    return 0;
}
int fprintf(FILE *fp, const char *fmt, ...) {
    return 0;
}
int fputs(const char *s, FILE *fp) {
    return 0;
}
int clock() {
    return 0;
}
char *fgets(char *s, int n, FILE *fp) {
    return 0;
}
int ungetc(int c, FILE *fp) {
    return 0;
}
FILE *freopen(const char *path, const char *mode, FILE *fp) {
    return 0;
}
int time(int t) {
    return 0;
}
