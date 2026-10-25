typedef struct {
    u8 pad[0x10C];
    char name[0x100];
} Ent001462D8;

extern Ent001462D8 *D_001C682C[];
extern s32 D_001C6838[];
extern s32 D_001C688C[];
extern s32 D_001C689C[];
extern s32 D_001BB6C4[];
extern char D_004CB168[];
void func_001461A8(void);
void func_001464B8(void);
void func_00110D10(s32, void *);
void func_00114948(s32, s32, s32, char *, void *, s32);
char *func_0011BA18(s32);
void func_00146538(void);
void func_00147290(s32);
void func_001A3D78(char *, char *, char *);
s32 func_001A4174(char *, char *);

void func_001462D8(s32 arg0) {
    char buf[0x260];
    s32 i;

    if (arg0 >= 0) {
        for (i = 0; i < *D_001C6838; i++) {
            if (func_001A4174((*D_001C682C)[i].name, D_004CB168) == 0) {
                break;
            }
        }
        if (i == *D_001C6838) {
            if (*D_001C688C != 0) {
                func_00114948(1, 500, 250, func_0011BA18(0x74), func_001464B8, *D_001BB6C4);
            } else {
                func_00146538();
            }
            return;
        }
        if (*D_001C688C == 0) {
            *D_001C689C = i;
            func_001A3D78(buf, func_0011BA18(0x76), D_004CB168);
            func_00114948(1, 500, 250, buf, func_001464B8, *D_001BB6C4);
            return;
        }
        func_00147290(0);
    } else if (*D_001C688C != 0) {
        func_00147290(0);
    } else if (arg0 == -15 || arg0 == -14 || arg0 == -1) {
        func_00110D10(arg0, func_001461A8);
    }
}
