typedef struct E { s32 a, b; } E;
typedef struct Buf {
    E *data;
    s32 cap;
    s32 unk8;
    s32 count;
} Buf;
void func_00193768(Buf *);
void func_001A24AC(void *, void *, s32);
extern void *D_00480488;
void func_001B6268(void);
void KExit(s32);

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
    s32 end = arg1 + n;
    s32 i;
    if (arg0->cap < end) {
        do {
            func_00193768(arg0);
        } while (arg0->cap < end);
    }
    for (i = 0; i < n; i++) {
        arg0->data[arg1 + i] = arg2->data[i];
    }
    arg0->count = arg1 + n;
}

s32 func_00193FCC(Buf *arg0) {
    s32 n = arg0->cap;
    if (n > 0) {
        E *p = (E *)(*(void *(**)(s32))((char *)D_00480488 + 0x104))(n * 8);
        if ((s32)p < (s32)arg0->data) {
            func_001A24AC(p, arg0->data, arg0->count * 8);
            if (arg0->data != 0) {
                (*(void (**)(void *))((char *)D_00480488 + 0x108))(arg0->data);
            }
            arg0->data = p;
            return 1;
        }
        (*(void (**)(void *))((char *)D_00480488 + 0x108))(p);
    }
    return 0;
}

void func_001B6328(s32 a) {
    func_001B6268();
    KExit(a);
}
