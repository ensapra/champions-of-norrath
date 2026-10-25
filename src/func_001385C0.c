extern s32 func_003044FC(char *, char *);
typedef struct { char *name; s32 value; } Pair;
typedef struct { s32 value; char name[0x14]; } Entry;
typedef struct { char pad[0x28]; s16 count; s16 pad2; s32 offset; } Hdr;

static inline s32 Lookup(Pair *list, s32 n, char *name)
{
    s32 i;
    for (i = 0; list[i].name != 0 && (i < n || n == -1); i++) {
        if (func_003044FC(name, list[i].name) == 0)
            return list[i].value;
    }
    return 0;
}

s32 func_001385C0(Hdr **obj, Pair *list, s32 n)
{
    Hdr *h = *obj;
    Entry *e = (Entry *)((char *)h + h->offset);
    s32 err = 0;
    s32 i;
    for (i = 0; i < h->count; i++, e++) {
        if (e->value == 0) {
            s32 v = Lookup(list, n, e->name);
            if (v != 0)
                e->value = v;
            else
                err = 0x13;
        }
    }
    return err;
}
