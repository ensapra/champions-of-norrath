typedef struct G { char pad0[8]; long a; long b; char pad1[0x3E0]; u16 h; char pad2[0x7D]; char f; } G;
typedef union { u16 h; s32 v; } U;
char *func_001A0008(char *, void *);
char *func_0019FFC0(char *, void *);
void func_001A1550(void) __attribute__((noreturn));
char *func_001A0E28(char *s, G *g)
{
    u32 c = *(u8 *)s;
    U u;
    s++;
    switch (c) {
    case 0x50: case 0x51: case 0x52: case 0x53: case 0x54: case 0x55: case 0x56: case 0x57:
    case 0x58: case 0x59: case 0x5A: case 0x5B: case 0x5C: case 0x5D: case 0x5E: case 0x5F:
    case 0x60: case 0x61: case 0x62: case 0x63: case 0x64: case 0x65: case 0x66: case 0x67:
    case 0x68: case 0x69: case 0x6A: case 0x6B: case 0x6C: case 0x6D: case 0x6E: case 0x6F:
        g->h = c - 0x50;
        break;
    case 0x90:
        s = func_001A0008(s, &u);
        g->h = u.h;
    case 0x70: case 0x71: case 0x72: case 0x73: case 0x74: case 0x75: case 0x76: case 0x77:
    case 0x78: case 0x79: case 0x7A: case 0x7B: case 0x7C: case 0x7D: case 0x7E: case 0x7F:
    case 0x80: case 0x81: case 0x82: case 0x83: case 0x84: case 0x85: case 0x86: case 0x87:
    case 0x88: case 0x89: case 0x8A: case 0x8B: case 0x8C: case 0x8D: case 0x8E: case 0x8F:
        g->h = c - 0x70;
        s = func_001A0008(s, &u);
        g->b = u.v;
        break;
    case 0x92:
        s = func_001A0008(s, &u);
        g->h = u.h;
        s = func_001A0008(s, &u);
        g->b = u.v;
        break;
    case 6:
        g->f = 1;
        break;
    case 0x23:
        s = func_0019FFC0(s, &u);
        g->a = u.v;
        break;
    default:
        func_001A1550();
    }
    return s;
}
