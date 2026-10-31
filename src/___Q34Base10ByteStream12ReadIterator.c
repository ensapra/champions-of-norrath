typedef struct { int f0; int f4; } T;
void __builtin_delete(void*);
void ___Q34Base10ByteStream12ReadIterator(T *arg0, int arg1) {
    arg0->f4 = 0;
    if (arg1 & 1) {
        __builtin_delete(arg0);
    }
}
