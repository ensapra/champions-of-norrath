typedef struct { u8 len; u8 pos; s8 x2; u8 data[125]; } EdBuf;

extern s8 D_00483829;
extern s32 D_00483F30;
extern s32 D_004865DC;
extern s32 D_00486DAC;
extern EdBuf D_008D88B8;
extern s8 D_008D8938[];
extern s32 D_008D8D28[];

extern s8 func_001354A8(s32);
extern s32 func_002CA440(void);
extern s32 func_002CA550(void);
extern void func_002CAAB8(void);
extern void func_003020AC(u8 *, u8 *, s32);

void func_002CACB8(void) {
    s32 c, k;
    s8 *p;
    s32 *q;

    if (D_00483829 == 0 || D_004865DC == 0) {
        while (func_002CA440() != -1) ;
        return;
    }
    if (D_00483F30 != 0) return;
    D_008D88B8.x2 = func_001354A8(0);
    p = D_008D8938 + 2;
    q = D_008D8D28;
    for (k = 7; k >= 0; k--) {
        if (*p != -2) *q += 1;
        p += 0x7E;
        q++;
    }
    if (D_00486DAC != 0) return;
    while ((c = func_002CA550()) != -1) {
        if (c == 8) {
            EdBuf *b = &D_008D88B8;
            if (b->pos != 0) {
                func_003020AC(&b->data[b->pos - 1], &b->data[b->pos], b->len - b->pos + 1);
                b->pos--;
                b->len--;
            }
        } else if (c == 13) {
            EdBuf *b = &D_008D88B8;
            if (b->x2 != -1) {
                func_002CAAB8();
                return;
            }
        } else if (c == 17) {
            EdBuf *b = &D_008D88B8;
            if (b->pos != 0) {
                b->data[b->pos] = b->data[b->pos - 1];
                b->pos--;
            }
        } else if (c == 18) {
            EdBuf *b = &D_008D88B8;
            if (b->pos != b->len - 1) {
                b->data[b->pos] = b->data[b->pos + 1];
                b->pos++;
            }
        } else if (c == 26) {
            EdBuf *b = &D_008D88B8;
            if (b->pos != b->len - 1) {
                func_003020AC(&b->data[b->pos], &b->data[b->pos + 1], b->len - b->pos);
                b->len--;
            }
        } else {
            EdBuf *b = &D_008D88B8;
            u16 ch = c;
            if (b->len < 0x7A) {
                func_003020AC(&b->data[b->pos + 1], &b->data[b->pos], b->len - b->pos + 1);
                b->data[b->pos++] = ch;
                b->len++;
            }
        }
    }
}
