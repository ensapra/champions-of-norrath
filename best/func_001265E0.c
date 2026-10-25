typedef unsigned char u8;
typedef unsigned short u16;
extern void func_00126590(void);
extern void func_0013DE28(void *, void *);
extern u8 D_004CA158[];
extern u16 D_004CA180[];

typedef struct {
    u8 p0[0x200];
    u8 b200[0x100];
    u8 b300[0x100];
    u8 b400[0x100];
    u8 b500[0x100];
    u8 b600[0x100];
    u8 b700[0x100];
    u8 b800[0x100];
    u8 b900[0x100];
    u8 ba00[0x100];
    u8 bb00[0x100];
    u8 pc00[0x200];
    u8 be00[0x100];
    u8 bf00[0x100];
    u8 b1000[0x100];
    u8 b1100[0x100];
    u16 h1200;
    u8 p1202[0xfe];
    int w1300;
    int w1304;
    int w1308;
    int w130c;
    u8 b1310, b1311, b1312, b1313, b1314, b1315, b1316, b1317, b1318;
    u8 p1319[3];
    int w131c;
} G;
extern G D_001C5500;

void func_001265E0(void) {
    volatile G *g;
    int t;
    u8 c;
    func_00126590();
    g = &D_001C5500;
    t = g->w1304;
    if (t == 2) {
        g->b1315 = 0;
        g->b1310 = 0;
    }
    if (g->b1315 == 1) {
        g->w131c = 0x5AE;
        g->b900[0] = D_004CA158[0];
        g->w1300 = -1;
        g->b1313 = 1;
        g->b1314 = 4;
        g->h1200 = D_004CA180[0];
        g->b1310 = 0;
        g->b1316 = 0;
        g->b1317 = 0;
        g->b1318 = 0;
        g->be00[0] = D_004CA158[0];
        g->bf00[0] = D_004CA158[0];
        g->b1000[0] = D_004CA158[0];
        g->w130c = 0;
        g->b200[0] = D_004CA158[0];
        g->b300[0] = D_004CA158[0];
        g->b400[0] = D_004CA158[0];
        goto blk;
    } else {
        g->b1318 = -1;
        g->b1316 = -1;
        g->b1317 = -1;
        g->w131c = -1;
        if (t == 2) {
            g->w1308 = -1;
            g->b400[0] = D_004CA158[0];
            g->b1313 = 1;
            g->b1314 = 4;
            g->h1200 = D_004CA180[0];
            g->b200[0] = D_004CA158[0];
            g->b300[0] = D_004CA158[0];
        } else {
            g->w130c = -1;
            g->w1300 = -1;
            g->b900[0] = D_004CA158[0];
            g->be00[0] = D_004CA158[0];
            g->bf00[0] = D_004CA158[0];
            g->b1000[0] = D_004CA158[0];
            g->b1313 = 0;
            g->b1314 = 0;
            *(volatile u8 *)&g->h1200 = D_004CA158[0];
            g->ba00[0] = D_004CA158[0];
            g->bb00[0] = D_004CA158[0];
blk:
            g->b700[0] = D_004CA158[0];
            g->b800[0] = D_004CA158[0];
        }
    }
    c = D_004CA158[0];
    if (g->b1310 == 1) {
        g->b400[0] = c;
        g->b200[0] = c;
        g->b300[0] = c;
    } else {
        g->b1100[0] = c;
    }
    if ((*(volatile int *)&g->b1310 & 0xFFFF00) == 0x10100) {
        c = D_004CA158[0];
        g->b600[0] = c;
        g->b500[0] = c;
        if (g->w1304 != 2 && g->b1315 != 1) {
            g->b1312 = -1;
            g->b1311 = -1;
        }
    }
    func_0013DE28((void *)g, (void *)g);
}
