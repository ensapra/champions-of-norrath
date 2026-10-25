typedef struct {
    s32 type;
    s32 unk4;
    u8 *str;
} Msg125078;

extern s32 D_001C4CBC[];
extern char D_001C6000[];
extern u8 D_010C7B50[];
s32 func_001A444C(void *);
void func_001A42B8(void *, void *);
void func_00124BA8(s32, s32, Msg125078 *);
void func_00124F18(s32);

void func_00125078(s32 a, s32 b, Msg125078 *p) {
    s32 len;
    s32 n;
    s32 i;
    s32 j;
    u8 c;

    if (p->type != 0x12) {
        if (p->type == 0x13) {
            n = 0;
            len = func_001A444C(p->str);
            for (i = 0; i < len && p->str[i] != 0x19; i++) {
                n++;
            }
            if (D_001C4CBC[0] + n >= 0x100) {
                p->unk4 = 0;
                return;
            }
            j = 0;
            while (p->str[j] != 0) {
                func_001A444C(p->str);
                c = p->str[j];
                if (c < 0x20 || c >= 0x7F) {
                    if (p->str[0] == 9) {
                        func_00124F18(a);
                        p->unk4 = 0;
                        break;
                    }
                    p->unk4 = 0;
                    break;
                }
                D_010C7B50[D_001C4CBC[0]++] = c;
                p->str[j++] = '*';
                D_010C7B50[D_001C4CBC[0]] = 0;
                func_001A42B8(D_001C6000, D_010C7B50);
            }
            p->str[j] = 0;
        }
        return;
    }
    func_00124BA8(a, b, p);
}
