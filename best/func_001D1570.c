typedef struct { s32 pad0; s32 (*fn)(); } Vt;
typedef struct { s16 off; s16 pad; s32 (*fn)(void *, void *); } Vt2;
typedef struct Obj Obj;
struct Obj {
    char pad0[0x48];
    char *vt;
    f32 x, y, z, w;
    char *name;
    s8 on;
    s8 init;
    s16 pad62;
    s32 timer;
    s32 idx;
    Obj *link;
};
extern void func_0013EF30(void *, void *, void *, s32, void *);
extern s32 func_00140F60(void *, void *, s32);
extern void func_00142310(void *, s32);
extern s32 func_001D3E88(void *);
extern s32 func_002FD2E0(s32, s32);
extern void func_00303EB8(void *, void *, void *);
extern s32 func_0030E498(void);
extern char D_00408600[];
extern char D_0046CD90[];
extern f32 D_00480694;
extern f32 D_00480698;
extern Obj *D_00483ACC;
extern s32 D_00484538;
extern s32 D_0048453C;
extern char D_00484FC8[];
extern char D_00484FF0[];
extern char D_00484FF8[];
extern char D_00485000[];

void func_001D1570(Obj *o) {
    Obj *list[136];
    f32 a[4];
    f32 b[4];
    char buf[160];
    s32 i, j, t, ev, on, flag, r;
    Obj **q;
    ev = 0;
    if (o->init == 0) {
        f32 x, y, z, w, c, d;
        o->init = 1;
        x = o->x;
        y = o->y;
        z = o->z;
        c = D_00480694;
        w = o->w;
        d = D_00480698;
        a[0] = x;
        a[1] = y;
        a[2] = c;
        b[0] = z;
        b[1] = w;
        b[2] = d;
        i = 0;
        func_0013EF30(a, b, list, 0x80, b);
        if (list[0] != 0) {
            t = 0;
            q = (Obj **)((char *)list + t);
            do {
                s32 v = ((Vt *)(*q)->vt)->fn();
                if (func_002FD2E0(v, func_0030E498()) != 0) {
                    Obj *e = *q;
                    *(Obj **)((char *)e + 0x4C) = o;
                    o->link = e;
                    break;
                }
                i++;
                t = i * 4;
                if (*(Obj **)((char *)list + t) == 0) break;
                q = (Obj **)((char *)list + t);
            } while (1);
        }
    }
    if (o->timer != 0) {
        o->timer = o->timer - 1;
        return;
    }
    o->idx = -1;
    j = 0;
    on = 0;
    if (D_00484538 > 0) {
        char *p = D_00408600 + 0x5570;
        do {
            void *e = *(void **)p;
            p += 0x5DB0;
            if (e != 0) {
                Vt2 *v = (Vt2 *)(o->vt + 0x88);
                if (v->fn((char *)o + v->off, e) != 0) {
                    ev = j;
                    on = 1;
                    o->idx = ev;
                    break;
                }
            }
            j++;
        } while (j < D_00484538);
    }
    t = on;
    if (on != o->on) {
        flag = 0;
        if (o->link != 0) {
            if (func_00140F60(o->link, D_00484FF0, 0) != 0) {
                t = 1;
                flag = 1;
            }
            if (o->link != 0) {
                if (func_00140F60(o->link, D_00484FC8, 0) != 0) {
                    t = 0;
                    flag = 1;
                }
                if (o->link != 0) {
                    func_00142310(o->link, t);
                }
            }
        }
        D_00483ACC = o;
        if (t != 0) {
            D_0048453C = ev;
            r = func_001D3E88(o->name);
        } else {
            func_00303EB8(buf, D_00484FF8, o->name);
            r = func_001D3E88(buf);
        }
        D_00483ACC = 0;
        o->on = on;
        if (flag != 0) {
            if (o->link != 0 && func_00140F60(o->link, D_00485000, 0) != 0) {
                if (o->timer == -1) {
                    o->on = 0;
                    return;
                }
                o->timer = func_00140F60(o->link, D_00485000, 0) * 4;
            } else {
                if (func_00140F60(o->link, D_0046CD90, 0) != 0) {
                    if (r == 0) {
                        o->on = 0;
                        return;
                    }
                }
                o->timer = -1;
            }
            o->on = 0;
        }
    }
}
