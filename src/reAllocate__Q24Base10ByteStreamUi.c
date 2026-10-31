typedef struct Inner { void *data; long cap; } Inner;
typedef struct S { unsigned int unk0; char pad[8]; Inner *unkC; int unk10; } S;
void *__builtin_vec_new(unsigned int);
void __builtin_vec_delete(void *);
void *memcpy(void *, const void *, unsigned long);
void reAllocate__Q24Base10ByteStreamUi(S *arg0, unsigned int arg1) {
    arg0->unk0 = arg1;
    if ((unsigned long)arg0->unkC->cap < arg1) {
        void *p = __builtin_vec_new(arg1);
        if (arg0->unkC->data) {
            memcpy(p, arg0->unkC->data, arg0->unk10);
            if (arg0->unkC->data) __builtin_vec_delete(arg0->unkC->data);
        }
        arg0->unkC->data = p;
        arg0->unkC->cap = arg1;
    }
}
