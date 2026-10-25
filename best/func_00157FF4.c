typedef struct { char pad[0x8A0]; s32 f8a0; char pad2[0x948-0x8A4]; s32 f948, f94c, f950, f954, f958, f95c, f960, f964; char pad3[0x990-0x968]; s32 f990, f994, f998, f99c; } Obj;

void func_00157FF4(Obj *o, s32 *a1, s32 *a2, s32 *a3, s32 *a4, s32 *a5, s32 *a6, s32 *a7, s32 *a8) {
    s32 t, u;
    s32 f990 = o->f990;
    if (o->f8a0 != 0) {
        t = o->f948;
        if (f990 != 0) {
            *a1 = t;
            *a5 = o->f958;
        } else {
            *a5 = t;
            *a1 = t;
        }
        t = o->f948;
        u = o->f950;
        if (o->f994 != 0) {
            *a3 = t + u;
            *a7 = o->f958 + o->f960;
        } else {
            t = t + u;
            *a7 = t;
            *a3 = t;
        }
        t = o->f94c;
        if (o->f998 != 0) {
            *a2 = t;
            *a6 = o->f95c;
        } else {
            *a6 = t;
            *a2 = t;
        }
        t = o->f94c;
        u = o->f954;
        if (o->f99c != 0) {
            *a4 = t + u;
            *a8 = o->f95c + o->f964;
        } else {
            t = t + u;
            *a8 = t;
            *a4 = t;
        }
    } else {
        if (f990 != 0) {
            *a1 = o->f958;
            *a5 = o->f948;
        } else {
            t = o->f948;
            *a5 = t;
            *a1 = t;
        }
        if (o->f994 != 0) {
            *a3 = o->f958 + o->f960;
            *a7 = o->f948 + o->f950;
        } else {
            t = o->f948 + o->f950;
            *a7 = t;
            *a3 = t;
        }
        if (o->f998 != 0) {
            *a2 = o->f95c;
            *a6 = o->f94c;
        } else {
            t = o->f94c;
            *a6 = t;
            *a2 = t;
        }
        if (o->f99c != 0) {
            *a4 = o->f95c + o->f964;
            *a8 = o->f94c + o->f954;
        } else {
            t = o->f94c + o->f954;
            *a8 = t;
            *a4 = t;
        }
    }
}
