typedef struct {
    char name[0x10];
    s32 lsn;
    s32 size;
    s32 pad[2];
} DirEnt_164C70;
typedef struct {
    DirEnt_164C70 ent[0x300];
    s32 count;
} Dir_164C70;

extern u8 D_00486920;
s32 func_002E38E8(s32 lsn, s32 n, void *buf, void *mode);
s32 func_002E2ED8(s32 mode);
char *func_00304640(char *dst, const char *src);

#define LE32(b, i) ((b)[i] + ((b)[(i) + 1] << 8) + ((b)[(i) + 2] << 16) + ((b)[(i) + 3] << 24))

void func_00164C70(Dir_164C70 *dir, s32 lsn, s32 nsec) {
    u8 raw[0x900];
    char name[0x40];
    u8 *buf = (u8 *)(((u32)raw + 0xFF) & ~0xFF);
    s32 i;

    dir->count = 0;
    for (i = 0; i < nsec; i++) {
        s32 off = 0;
        func_002E38E8(lsn + i, 1, buf, &D_00486920);
        func_002E2ED8(0);
        while (buf[off] != 0) {
            s32 j, k = 0;
            s32 end = off + buf[off + 0x20] + 0x20;
            s32 a, b;
            s32 o2, o10;
            for (j = off + 0x21; j <= end; j++) {
                name[k++] = buf[j];
            }
            name[k] = 0;
            o2 = off + 2;
            o10 = off + 10;
            a = LE32(buf, o2);
            b = LE32(buf, o10);
            func_00304640(dir->ent[dir->count].name, name);
            dir->ent[dir->count].lsn = a;
            dir->ent[dir->count].size = b;
            dir->count++;
            off += buf[off];
        }
    }
}
