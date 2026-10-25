typedef struct {
    char pad0[0xF4];
    void (*print)(char *msg);
} Dbg;
extern Dbg *D_00362CC8[];
extern char D_004CDEA0[];
extern char D_004CDED0[];
typedef struct {
    u32 ids[11];
    s32 count;
    s32 f30;
} IdSet;
extern IdSet D_010F44A8;

void func_00186BB0(u32 *ids, s32 n) {
    s32 i;
    D_010F44A8.f30 = 0;
    if (n >= 12) {
        D_00362CC8[0]->print(D_004CDEA0);
        return;
    }
    for (i = 0; i < n; i++) {
        if (ids[i] > 10) {
            D_00362CC8[0]->print(D_004CDED0);
        }
        D_010F44A8.ids[i] = ids[i];
    }
    D_010F44A8.count = n;
}
