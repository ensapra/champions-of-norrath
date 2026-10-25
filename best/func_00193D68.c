typedef struct E { s32 a, b; } E;
typedef struct Buf {
    E *data;
    s32 cap;
    s32 unk8;
    s32 count;
} Buf;
void func_00193768(Buf *);

void func_00193D68(Buf *arg0, s32 arg1, Buf *arg2) {
    s32 n = arg2->count;
    s32 i;
    while (arg0->cap < arg0->count + n) {
        func_00193768(arg0);
    }
    for (i = arg0->count + n - 1; i >= arg1 + n; i--) {
        arg0->data[i + 1] = arg0->data[i];
    }
    for (i = 0; i < n; i++) {
        arg0->data[arg1 + i] = arg2->data[i];
    }
    arg0->count += n;
}
