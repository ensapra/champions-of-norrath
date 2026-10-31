typedef struct {
    s32 unk0;
    void *unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    void *unk14;
    s32 unk18;
    void *unk1C;
    s32 unk20;
    s32 unk24;
} RpcData;

typedef struct { s32 v; s32 pad[2]; } Guard;
Guard D_004C3F14;

extern u8 onMatchGame__16VIRealmInterfaceiiUiPCPCUsN24PCiPCQ212RealmService4BlobPv[];
extern u8 onGetGame__16VIRealmInterfaceiiPCUsT3iPv[];
extern u8 onGetRules__16VIRealmInterfaceUiiPCUsUiPv[];
extern u8 Parse__12VIXMLHandlerPCci[];

void func_001B5C80(void);
void func_001B5CD8(void);
void func_001AF7E8(void);
void func_001AFAD0(u32, void *, void *);
void func_001AFCD0(u32, void *, s32, s32, s32, s32);
void func_001B0610(void);
void func_001B0820(void);
void func_001B0358(void);
void func_001B0248(void);
s32 func_001AF7A0(s32);
s32 ovl_ntgui2_func_001ADB30(u32);
void ovl_ntgui2_func_001ADB20(u32, s32);

#define UNCACHED(p) ((void *)((u32)(p) | 0x20000000))

void func_001AFF48(void) {
    u8 *packet;
    RpcData *dt;
    u8 *free1;
    u8 *free2;
    func_001B5C80();
    if (D_004C3F14.v != 0) {
        func_001B5CD8();
        return;
    }
    D_004C3F14.v = 1;
    func_001B5CD8();
    func_001AF7E8();
    func_001B5C80();
    packet = onMatchGame__16VIRealmInterfaceiiUiPCPCUsN24PCiPCQ212RealmService4BlobPv + 0x7F0;
    dt = (RpcData *)(Parse__12VIXMLHandlerPCci + 0x100);
    free1 = onGetGame__16VIRealmInterfaceiiPCUsT3iPv + 0x278;
    free2 = onGetRules__16VIRealmInterfaceUiiPCUsUiPv + 0x320;
    dt->unk20 = 0x20;
    dt->unk0 = 1;
    dt->unk14 = UNCACHED(free1);
    dt->unk4 = UNCACHED(packet);
    dt->unk1C = UNCACHED(free2);
    dt->unk8 = 0x20;
    dt->unkC = 0;
    dt->unk10 = 0;
    dt->unk18 = 0x20;
    dt->unk24 = 0;
    func_001AFAD0(0x80000008, func_001B0248, dt);
    func_001AFAD0(0x80000009, func_001B0610, dt);
    func_001AFAD0(0x8000000A, func_001B0820, dt);
    func_001AFAD0(0x8000000C, func_001B0358, dt);
    func_001B5CD8();
    if (ovl_ntgui2_func_001ADB30(0x80000002) != 0) {
        return;
    }
    {
        u8 *p = packet + 0x40;
        *(s32 *)(p + 0xC) = 1;
        func_001AFCD0(0x80000002, p, 0x10, 0, 0, 0);
    }
    while (func_001AF7A0(0) == 0) {
    }
    ovl_ntgui2_func_001ADB20(0x80000002, 1);
}
