typedef struct { char pad[0x530]; s32 f530; } Veh215;
typedef struct { char pad[0x5570]; Veh215 *veh; char pad2[0x5DB0 - 0x5574]; } Player215;
typedef struct { char pad[0xC7]; s8 fC7; } Obj215;
s32 func_001671F8(char *);
void ovl_ntgui2_func_00191830(s32, s32);
void func_001C7600(s32, s32, s32, s32);
s32 func_001D0F08(void);
s32 func_0025ACD8(void);
extern Player215 D_00408600[];
extern char D_00470728[];
extern char D_00470738[];
extern char D_00470748[];
extern char D_00470760[];
extern char D_00470770[];
s8 D_00483829;
s32 D_00484538;
s32 D_00484F44;
s32 D_00485BE4;

s32 func_00215910(Obj215 *o, s32 arg1) {
    char *s;
    s32 i;
    if (func_0025ACD8()) {
        return 0;
    }
    if (func_001D0F08()) {
        for (i = 0; i < D_00484538; i++) {
            if (D_00408600[i].veh && D_00408600[i].veh->f530) {
                break;
            }
        }
        if (i == D_00484F44) {
            func_001C7600(func_001671F8(D_00470728), 0xB4, -1, 0);
        } else {
            func_001C7600(func_001671F8(D_00470738), 0xB4, -1, 0);
        }
        return 0;
    }
    if (D_00483829) {
        if (D_00485BE4 >= 0x709 && o->fC7 == -1) {
            ovl_ntgui2_func_00191830(arg1, func_001671F8(D_00470748));
        } else {
            s32 t = func_001671F8(D_00470760);
            ovl_ntgui2_func_00191830(arg1, t);
        }
        return 1;
    }
    ovl_ntgui2_func_00191830(arg1, func_001671F8(D_00470770));
    return 1;
}
