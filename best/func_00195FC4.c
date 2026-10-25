typedef struct { char pad[4]; u16 state; char pad2[0x2A]; } E195;
typedef struct { E195 e[8]; char pad[0x18]; } R195;
typedef struct { char pad[0x48]; s32 n; s32 x4C; char pad2[2]; u8 idx; char pad3[0x25]; R195 *rows; } O195;
typedef struct { char pad[0xF4]; void (*fn)(char *); } D195;
extern char D_004CECB8[];
extern char D_004CED70[];
extern char D_004CEED0[];
D195 *D_00480488;
void func_001A1568(char *, s32, char *);
void func_00195704(O195 *, s32);
void func_00195A78(O195 *, s32, s32);

s32 func_00195FC4(O195 *o)
{
    s32 idx = o->idx & 0x7F;
    s32 n = o->n;
    s32 st;
    if (o == NULL) {
        func_001A1568(D_004CECB8, 0x5B7, D_004CED70);
    }
    st = o->rows[n].e[idx].state;
    if (st != 0) {
        switch (st) {
        case 1:
            func_00195704(o, 0);
            o->x4C = 0;
            break;
        case 4: func_00195A78(o, 4, 2); break;
        case 5: func_00195A78(o, 5, 2); break;
        case 6: func_00195A78(o, 6, 2); break;
        case 7: func_00195A78(o, 7, 2); break;
        case 8: func_00195A78(o, 8, 2); break;
        case 9: func_00195A78(o, 9, 2); break;
        case 10: func_00195A78(o, 10, 2); break;
        case 12: func_00195A78(o, 12, 2); break;
        case 13:
            D_00480488->fn(D_004CEED0);
            break;
        }
    } else {
        func_00195704(o, 1);
    }
}
