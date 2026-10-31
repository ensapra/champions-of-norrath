typedef struct { int base; } B;
typedef struct { int pos; } It;
void *memcpy(void*, const void*, unsigned long);
void get__CQ24Base10ByteStreamPvRQ34Base10ByteStream12ReadIteratorUl(void *self, void *dest, It *it, unsigned int count) {
    B *b = *(B **)((char *)self + 0xC);
    memcpy(dest, (const void *)(long)(b->base + it->pos), (unsigned long)count);
}
