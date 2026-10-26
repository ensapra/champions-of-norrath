typedef struct { u8 pad[0xBC]; s32 unkBC; u16 unkC0; u8 pad2[0x22]; s32 (*fnE4)(s32); s32 (*fnE8)(s32); } Disp;
typedef struct { s32 a, b, c; u16 d, e; } Q;
typedef struct { Q *p0; Q *p1; Q *p2; u64 (*p3)[2]; u8 pad[0x10]; s32 n0; s32 n1; } Ent;
extern Ent D_00364060[];
Disp *D_00480488;
s32 D_00480900;
s32 D_00480904;
extern u8 D_010F64A0[];
void func_00198620(void *, void *, s32, s32);

void func_001982EC(s32 a0, s32 a1) {
    s32 sel, i;
    Ent *e;
    Q *s, *d;
    sel = D_00480488->unkC0;
    if (D_00480488->unkBC == 0) {
        if (sel == 1) sel = 8;
    } else {
        switch (sel) {
        case 0: sel = 1; break;
        case 1: sel = 2; break;
        case 2: sel = 3; break;
        case 3: sel = 4; break;
        case 4: sel = 5; break;
        case 5: sel = 6; break;
        case 6: sel = 7; break;
        case 7: sel = 1; break;
        default: sel = 1; break;
        }
    }
    i = 0;
    D_00480900 = D_00480488->fnE8(a0);
    D_00480904 = D_00480488->fnE4(a1);
    e = &D_00364060[sel];
    if (e->n1 > 0) {
        s = e->p1;
        do {
            Q *q = &s[i];
            d = (Q *)(D_010F64A0 + 0x3D0) + i;
            i++;
            d->a = D_00480488->fnE8(q->a + a0);
            d->b = D_00480488->fnE4(q->b + a1);
            d->c = D_00480488->fnE8(q->c);
            d->d = D_00480488->fnE8(q->d);
            d->e = D_00480488->fnE4(q->e);
        } while (i < e->n1);
    }
    i = 0;
    if (e->n0 > 0) {
        s = e->p0;
        do {
            Q *q = &s[i];
            d = (Q *)(D_010F64A0 + 0x470) + i;
            i++;
            d->a = D_00480488->fnE8(q->a + a0);
            d->b = D_00480488->fnE4(q->b + a1);
            d->c = D_00480488->fnE8(q->c);
            d->d = D_00480488->fnE8(q->d);
            d->e = D_00480488->fnE4(q->e);
        } while (i < e->n0);
    }
    {
        Q *o = (Q *)(D_010F64A0 + 0x510);
        i = 0;
        o->a = D_00480488->fnE8(e->p2->a + a0);
        o->b = D_00480488->fnE4(e->p2->b + a1);
        o->c = D_00480488->fnE8(e->p2->c);
        o->d = D_00480488->fnE8(e->p2->d);
        o->e = D_00480488->fnE4(e->p2->e);
    }
    {
        s32 off = 0;
        do {
            u64 (*dst)[2] = (u64 (*)[2])(D_010F64A0 + 0xA50 + i * 16);
            (*dst)[0] = e->p3[i][0];
            (*dst)[1] = e->p3[i][1];
            func_00198620(D_010F64A0 + 0x540 + off, &e->p3[i], a0, a1);
            i++;
            off += 0x90;
        } while (i < 9);
    }
}
