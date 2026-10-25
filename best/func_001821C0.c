typedef struct { u8 data[0xE90]; } Page;
typedef struct {
    u8 pad0[0x470];
    Page pages[5];
    u8 pad4d40[0x5BD0 - 0x4D40];
    s32 cur;
    u8 pad5bd4[0x18];
    s32 next[5];
} Menu;
extern char func_001D1C80[];
#define gMenu (*(Menu *)(func_001D1C80 + 0x6C0))
void func_00181E68(s32);
void func_0019732C(Page *);
void func_0019738C(Page *);
s32 func_00197958(Page *);

void func_001821C0(s8 dir)
{
    s32 i;

    if (gMenu.next[gMenu.cur] == gMenu.cur) {
        return;
    }
    func_0019738C(&gMenu.pages[gMenu.cur]);
    if (dir == 15) {
        gMenu.cur = gMenu.next[gMenu.cur];
    } else {
        if (dir < 0) {
            dir += 5;
        }
        for (i = 0; i < dir; i++) {
            gMenu.cur = gMenu.next[gMenu.cur];
        }
    }
    func_00181E68(func_00197958(&gMenu.pages[gMenu.cur]));
    func_0019732C(&gMenu.pages[gMenu.cur]);
}
