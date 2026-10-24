extern s32 iSignalSema_2(s32);
extern volatile s32 D_004460D8[], D_004460DC[], D_004460A8[], D_004460B4[], D_00446094[], D_004460A0[], D_008E8140[];

void func_002E23F8(s32 *arg0) {
    D_004460D8[0] = *arg0;
    D_004460DC[0] = D_004460D8[0];
    if (D_004460D8[0] == 0xB) {
        D_004460D8[0] = 0;
        D_004460B4[0] = 0;
        return;
    }
    iSignalSema_2(D_004460A8[0]);
    if (D_00446094[0] && D_008E8140[0]) {
        iSignalSema_2(D_004460A0[0]);
    } else {
        D_004460B4[0] = 0;
    }
    D_004460D8[0] = 0;
}
