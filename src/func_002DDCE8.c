/* identical to func_001B6328 (matched), with its names changed by decompdecomp */
typedef struct E { s32 a, b; } E;
typedef struct Buf {
    E *data;
    s32 cap;
    s32 unk8;
    s32 count;
} Buf;
void func_00193768(Buf *);
void func_002DDC28(void);
void KExit_2(s32);

void func_00193E60(Buf *arg0, Buf *arg1) {
    s32 n = arg1->count;
    s32 i;
    while (arg0->cap < arg0->count + n) {
        func_00193768(arg0);
    }
    for (i = 0; i < n; i++) {
        arg0->data[arg0->count + i] = arg1->data[i];
    }
    arg0->count += n;
}

void func_00193F0C(Buf *arg0, s32 arg1, Buf *arg2) {
    s32 n = arg2->count;
    s32 i;
    if (arg0->cap < arg1 + n) {
        do {
            func_00193768(arg0);
        } while (arg0->cap < arg1 + n);
    }
    for (i = 0; i < n; i++) {
        arg0->data[arg1 + i] = arg2->data[i];
    }
    arg0->count = arg1 + n;
}

void func_002DDCE8(s32 a) {
    func_002DDC28();
    KExit_2(a);
}
