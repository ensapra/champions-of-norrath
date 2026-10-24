typedef struct {
    char pad[0xE74];
    s32 e74;
    char pad2[0xC];
    s32 e84;
} S_0015EF14;

void func_0015EF14(S_0015EF14 *arg0) {
    switch (arg0->e84) {
    case 19:
        arg0->e74 = 1;
        break;
    case 2:
        arg0->e74 = 2;
        break;
    case 1:
        arg0->e74 = 3;
        break;
    case 0:
    default:
        arg0->e74 = 4;
        break;
    }
}
