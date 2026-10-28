typedef struct { s32 x, y; s32 pad; u16 w, h; } Rect;
typedef struct { u8 pad[0x180]; u16 idx; u8 pad2[0xA]; u8 flags; u8 pad3[0x198 - 0x18D]; } Ent;
typedef struct { u8 pad[0x68]; u32 count; Rect *rects; u8 pad2[0x78 - 0x70]; u8 *ents; } Obj;

u32 func_00196464(Obj *o, Rect *q)
{
    Rect *r = q;
    Obj *ob = o;
    u32 i = 0;
    s32 off;
    s32 x = r->x + (r->w >> 1);
    s32 y = r->y + (r->h >> 1);
    u32 n = ob->count;
    if (n != 0) {
        off = 0;
        do {
            Ent *e = (Ent *)(ob->ents + off);
            r = &ob->rects[e->idx];
            off += 0x198;
            if (!(x < r->x || y < r->y || x >= r->x + r->w || y >= r->y + r->h)) {
                if ((e->flags & 0x34) == 0)
                    return i;
            }
            i++;
        } while (i < n);
    }
    return 0;
}
