typedef struct {
    u8 pad[0x60];
    f32 m[13];
    u8 pad2[0x100 - 0x94];
    f32 f100;
    s32 pad3[2];
    void *i[3];
} Obj_155;
s32 func_00143C38(void *);

s32 func_00155BD0(Obj_155 *o, volatile f32 *p) {
    volatile f32 *start = p;
    *p++ = o->f100;
    *(s32 *)p++ = func_00143C38(o->i[0]);
    *(s32 *)p++ = func_00143C38(o->i[1]);
    *(s32 *)p++ = func_00143C38(o->i[2]);
    *p++ = o->m[0];
    *p++ = o->m[1];
    *p++ = o->m[2];
    *p++ = o->m[3];
    *p++ = o->m[4];
    *p++ = o->m[5];
    *p++ = o->m[6];
    *p++ = o->m[7];
    *p++ = o->m[8];
    *p++ = o->m[9];
    *p++ = o->m[10];
    *p++ = o->m[11];
    *p++ = o->m[12];
    return (u8 *)p - (u8 *)start;
}
