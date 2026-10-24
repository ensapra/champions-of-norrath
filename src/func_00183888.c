extern u8 jtbl_004C006C[];
extern u8 D_001D2340[];
extern u8 D_001E2440[];
s32 func_00197958(void *);

typedef struct Node {struct Node*next,*prev;s32 id,flags;u64 start,spent,delay;} Node;
Node*func_001B6AE8(Node*p){Node*prev=p->prev;Node*next=p->next;if(prev)prev->next=next;else *(Node**)(jtbl_004C006C+0x4EFC)=next;if(next)next->prev=p->prev;p->prev=0;return next;}

s32 func_00184198(void) {
    u8 *base = D_001D2340;
    s32 r = func_00197958(base + 0x470 + *(s32 *)(base + 0x5BD0) * 0xE90);
    s32 ret = -1;
    if (r > 0) {
        if (r < 3) {
            ret = 0;
        } else if (r < 0x83) {
            if (r >= 0x80) {
                ret = 1;
            }
        }
    }
    return ret;
}

void func_00184160(s32 *a, s32 *b, s32 *c) {
    u8 *p = D_001E2440;
    *a = *(u16 *)(p + 0xC2);
    *b = *(u16 *)(p + 0xC4);
    *c = *(u16 *)(p + 0xC6);
}

s32 func_00183888(s32 *dst, s32 *src, s32 n) {
    s32 i;
    for (i = 0; i < n; i++) {
        dst[i] = src[i];
        if (src[i] == 0) {
            for (; i < n; i++) {
                dst[i] = 0;
            }
            return 0;
        }
    }
    i--;
    dst[i] = 0;
    return -i;
}
